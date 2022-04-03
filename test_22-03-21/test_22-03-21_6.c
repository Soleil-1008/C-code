#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	a = 5; 
	c = ++a;//c=6 a=6
	b = ++c, c++, ++a, a++;//c=7 b=7 c=8 a=7 a=8   =优先级高于，
	b += a++ + c;//b=7+8+8=23 a=9  ++优先级高于+=
	printf("a = %d b = %d c = %d\n", a, b, c);//a = 9 b = 23 c = 8
}