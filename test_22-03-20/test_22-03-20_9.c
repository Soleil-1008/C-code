#define _CRT_SECURE_NO_WARNINGS 1
//ָ������- ָ��-ָ��(�õ�����֮��Ԫ�ظ���)

#include<stdio.h>

int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
		end++;
	return end - start;
}
int main()
{
	/*
	char ch[5] = { 0 };
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);//9 ָ��ָ��ͬһ��ռ�
	printf("%d\n", &arr[0] - &arr[9]);//=9
	//printf("%d\n", &arr[9] - &ch[90]);//error �������Ԥ֪ ���Ͳ�ͬ
	*/

	//strlen - ���ַ�������
	//�ݹ�-ģ��ʵ��strlen-1.�������ķ�ʽ 2.�ݹ�ķ�ʽ
	char arr2[] = "bit";//b i t \0
	int len = my_strlen(arr2);
	printf("%d\n", len);//3
	return 0;
}
