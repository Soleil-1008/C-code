#define _CRT_SECURE_NO_WARNINGS 1
//习题
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;//地址强制转化为short*  解引用一次访问两个字节
	int i = 0;
	for (i = 0; i < 4; i++) //循环四次
	{
		*(p + i) = 0;//+1 跳两个字节  +0+1  1->0 0 0 0 +2+3  2->0 0 0 0
	}
	for(i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);//0 0 3 4 5
	}
}