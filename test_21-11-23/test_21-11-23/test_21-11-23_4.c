#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针变量的大小
int main() {
	//64位平台 指针大小8字节  32位平台 指针大小4字节
	printf("%d\n",sizeof(char *));//4、8
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(long *));
	printf("%d\n", sizeof(short *));
	return 0;
}