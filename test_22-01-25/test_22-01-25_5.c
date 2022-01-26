#define _CRT_SECURE_NO_WARNINGS 1
//goto
#include<stdio.h>
int main()
{
	printf("hello xiaohua\n");
	goto again;
	printf("你好\n");//跳过，不打印
again:
	printf("haha\n");
	return 0;
}