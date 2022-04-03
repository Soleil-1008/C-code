#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0x11223344;//十六进制 其实放置44332211-4个字节
	char* pc = (char*)&a;//a的地址强制转化为char*
	*pc = 0;//只能访问一个字节 00332211
	printf("%x\n", a);//11223300
	return 0;
}