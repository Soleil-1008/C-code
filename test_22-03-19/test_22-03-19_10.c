#define _CRT_SECURE_NO_WARNINGS 1
//整形提升的例子
#include<stdio.h>
int main() 
{ 
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4  参与运算就会发生整形提升
	printf("%u\n", sizeof(-c));//4
	printf("%u\n", sizeof(!c));//1
	return 0; 
}