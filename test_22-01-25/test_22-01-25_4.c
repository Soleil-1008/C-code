#define _CRT_SECURE_NO_WARNINGS 1
//goto语句-随意滥用的语句和标记跳转的标号
#include<stdio.h>
int main()
{
again:
	printf("hello xiaohua\n");//死循环
	goto again;
	return 0;
}