#define _CRT_SECURE_NO_WARNINGS 1
//练习:编写代码，演示多个字符从两端移动，向中间汇聚
#include<stdio.h>
#include<string.h>//strlen库函数
#include<windows.h>//sleep库函数
#include<stdlib.h>//system库函数
int main() 
{
	//char arr[]="abc";四个元素[a b c \0] 下标0 1 2 3
	char arr1[] = "welcome to bit!!!"; 
	char arr2[] = "#################"; 
	int left = 0;
	int right = strlen(arr1) - 1; //遇到\0停止，不包括\0
	//int right=sizeof(arr1)/sizeof(arr1[0])-2
	//while循环实现 
	while(left<=right) 
	{ 
		arr2[left] = arr1[left]; 
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//每打印一次休息1s
		system("cls");//执行系统命令的一个函数-cls-清空屏幕
		left++;
		right--;
	} 
	printf("%s\n", arr2);
	
	//for循环实现 
	/*for (left=0, right=strlen(arr1)-1;left <= right;left++, right--)
	{ 
		Sleep(1000); 
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf( "%s\n", arr2);
	} */
	return 0;
}