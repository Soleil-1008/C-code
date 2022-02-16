#define _CRT_SECURE_NO_WARNINGS 1
//练习：写一个函数，每调用一次这个函数，就会将num的值增加1
#include<stdio.h>
void Add(int* p)
{
	//*p++;//++优先级高 作用于p
	(*p)++;
}
int main() 
{
	int num = 0;
	//调用函数，使得num每次增加1
	Add(&num);//传址
	printf("num = %d\n",num);//1
	Add(&num);
	printf("num = %d\n", num);//2
	Add(&num);
	printf("num = %d\n", num);//3
	return 0;
}