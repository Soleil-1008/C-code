#define _CRT_SECURE_NO_WARNINGS
//递归：调用自身（大化小）
//常见错误：栈溢出stack overflow
#include<stdio.h>
int main()
{
	printf("hehe\n");
	main();
	return 0;
}

