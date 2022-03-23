#define _CRT_SECURE_NO_WARNINGS 1
//操作符-算术操作符 +  -  *  \  %
#include<stdio.h>
int main()
{
	int a = 5 / 2;//取商2  除
	int b = 5 % 2;//取余1  模
	//int b = 5 % 2.0; //error 两操作数必须是整数
	double c = 5 / 2.0;//2.500000 默认6位小数
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %lf\n", c);
	return 0;
}