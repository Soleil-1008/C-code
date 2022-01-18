#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//循环语句while  for  do while
//while(表达式) {循环语句;}--表达式为真则执行语句,表达式为假则跳出循环
int main() {
	/*
	if (1)
		printf("haha\n");//haha
	while(1)
		printf("haha\n");//死循环
	*/

	//在屏幕上打印1-10
	/*
	int i = 1;
	while (i <= 10)
	{
		printf("%d ",i);//1 2 3 4 5 6 7 8 9 10
		i++;
	}*/

	//while中的break(是用于永久终止循环的)--遇到break就停止后期的所有循环，直接终止循环。
	/*
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			break;//i=5时停止,跳出整个循环
		printf("%d ", i);//1 2 3 4 
		i++;
	}*/

	//while中的continue(是用于终止本次循环的)
	//--遇到continue后边的代码不会再执行，直接跳转到while语句跳转部分,进行下一次循环的入口判断
	/*
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			continue;//终止本次循环continue后面的代码，直接跳转到循环的判断部分
		printf("%d ", i);//1 2 3 4 死循环
		i++;
	}*/

	int i = 0;
	while (i < 10)
	{
		i++;//i=i+1;
		if (5 == i)
			continue;//跳过本次循环后面的代码，继续判断下一次循环
		printf("%d ", i);//1 2 3 4 6 7 8 9 10 
	}
	return 0;
}