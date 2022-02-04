#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数-输入参数、返回值，提供对过程的封装和细节的隐藏
//加法函数
int Add(int x, int y) 
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	int sum = Add(a, b);//输入参数
	printf("%d\n",sum);
	return 0;
}