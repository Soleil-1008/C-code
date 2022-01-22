#define _CRT_SECURE_NO_WARNINGS 1
//给定两个数，求这两个数的最大公约数
//辗转相除法
#include<stdio.h>
int main()
{
	int m = 24;
	int n = 18;
	int r = 0;
	scanf("%d%d",&m,&n);
	while (r=m % n)
	{
		m = n;
		n = r;
	}
	printf("%d\n",n);//6
	return 0;
}