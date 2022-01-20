#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//do...while()循环
//循环体至少执行一次
//语法   do 循环语句；while(表达式)；
int main() {
	//1-10
	int i = 1;
	//先执行再判断
	do
	{
		/*
		if (i == 5)
			break;
		//break1 2 3 4  continue1 2 3 4_死循环
		//continue跳过本次循环后面的代码
		*/
		printf("%d ", i);
		i++;
	}
	while (i <= 10);
	return 0;
}