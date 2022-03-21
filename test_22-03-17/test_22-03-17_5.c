#define _CRT_SECURE_NO_WARNINGS 1
//二维数组-创建、初始化
#include<stdio.h>
int main()
{
	//创建
	int arr[3][4];//3行4列
	char ch[3][5];
	//初始化
	int arr[3][4] = {1,2,3,4,5};//不完全初始化，后面均为0
	int arr[3][4] = {{1,2},{4,5}};
	int arr[][4] = {{2,3},{4,5}};//二维数组如果有初始化，行可以省略，列不能省略
	return 0;
}