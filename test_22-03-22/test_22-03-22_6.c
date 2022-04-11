#define _CRT_SECURE_NO_WARNINGS 1
//字符串逆序：编写一个函数 递归实现将参数字符串中的字符反向排列 
//不能使用C函数库中的字符串操作函数
// my_strlen()
//1.计数器
//2.递归
//3.指针减指针
#include<stdio.h>
#include<string.h>

int my_strlen(char* str)
{
	//计数器
	int count = 0;
	while(* str != '\0')
	{
		count++;
		str++;//下一个字符
	}
	return count;
}
/*
void reverse_string(char* arr)
{
	//1.循环的方法
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

//递归-大事化小
void reverse_string(char* arr)//(char arr[])也可以
{
	char tmp = arr[0];       //第一步
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
	reverse_string(arr);//首元素地址
	printf("%s\n", arr);//fedcba
	return 0;
}