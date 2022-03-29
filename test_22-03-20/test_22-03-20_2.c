#define _CRT_SECURE_NO_WARNINGS 1
//指针和指针类型
//指针类型决定了指针进行解引用操作时，能够访问空间的大小
//int* p      *p能访问4个字节
//char* p     *p能访问1个字节
//double* p   *p能访问8个字节
#include<stdio.h>
int main()
{
	/*
	printf("%d\n", sizeof(char*));//32位：4    64位：8
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	*/

	int a = 0x11223344;//1个16进制位-4个2进制位  两个16进制位占1个字节  占4个字节
	/*
	int* pa = &a;
	char* pc = &a;//有警告  不兼容
	printf("%p\n", pa);
	printf("%p\n", pc);//相同
	*/

	//指针的解引用
	//重点在调试的过程中观察内存的变化
	/*
	int* pa = &a;
	*pa = 0;//0x00000000
	*/
	
	char* pc = &a;//内存0x44332211
	*pc = 0;//0x00332211  访问空间是只更改一个字节

	return 0;
}