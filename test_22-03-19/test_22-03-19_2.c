#define _CRT_SECURE_NO_WARNINGS 1
//单目操作符  ++  --   (类型)强制转换
#include<stdio.h>
int main()
{
	int a = 10;
	//printf("%d\n", ++a);//11 前置++  先++ 再使用
	printf("%d\n", a++);//10 后置++   先使用  再++
	printf("%d\n", a);//11

	int b = (int)3.14;
	printf("%d\n", b);//3
	return 0;
}