#define _CRT_SECURE_NO_WARNINGS 1
//�ַ������򣺱�дһ������ �ݹ�ʵ�ֽ������ַ����е��ַ��������� 
//����ʹ��C�������е��ַ�����������
// my_strlen()
//1.������
//2.�ݹ�
//3.ָ���ָ��
#include<stdio.h>
#include<string.h>

int my_strlen(char* str)
{
	//������
	int count = 0;
	while(* str != '\0')
	{
		count++;
		str++;//��һ���ַ�
	}
	return count;
}
/*
void reverse_string(char* arr)
{
	//1.ѭ���ķ���
	int left = 0;
	int right = my_strlen(arr) - 1;//sizeof-7  strlen-6
	while(left<right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
*/

//�ݹ�-���»�С
void reverse_string(char* arr)//(char arr[])Ҳ����
{
	char tmp = arr[0];       //��һ��
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];   //2
	arr[len - 1] = '\0';     //3
	if(my_strlen(arr+1)>=2)
		reverse_string(arr+1);
	
	arr[len - 1] = tmp;      //4
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);//��Ԫ�ص�ַ
	printf("%s\n", arr);//fedcba
	return 0;
}