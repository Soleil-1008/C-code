#define _CRT_SECURE_NO_WARNINGS 1
//函数-库函数和自定义函数
#include<stdio.h>
#include<string.h>
int main() 
{
	//strcpy-string copy-字符串拷贝 /0也会拷贝过去
	// char * strcpy ( char * destination, const char * source );
	//strlen-string length-跟字符串长度有关
	char arr1[] = "bit";
	char arr2[20] = "#######";
	//               bit\0### 遇到\0直接结束
	char str1[] = "Sample string";
	char str2[40];
	char str3[40];
	strcpy(str2, str1);//strcpy()可能会有溢出问题
	strcpy(arr2, arr1);//目的地空间应该足够大
	strcpy(str3, "copy successful");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	printf("%s\n",arr2);//bit
	return 0;
}