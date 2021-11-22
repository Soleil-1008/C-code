#define _CRT_SECURE_NO_WARNINGS 1
//字符串类型
//"hello bite";
//"";//空字符串
//'\0'--0
// 0-数字
// ‘0’-字符0  48
// EOF-end of file-文件结束标志
//'a'--97
// 'A'--65
// ASCII 编码
// ASCII 码值
//数据在计算机存储的时候，存储的是2进制
#include <stdio.h>
#include <string.h>
int main() {
	char arr1[] = "abc";//数组
	//"abcd"--'a' 'b' 'c' 'd' '\0'
	//'\0'---转义字符'\0'字符串的结束标志
	char arr2[] = { 'a','b','c','\0'};
	char arr3[] = { 'a','b','c',0};

	char arr4[] = { 'a','b','c'};
	//'a' 'b' 'c' 'd' '\0'
	printf("%d\n",strlen(arr1));//strlen--string length-计算字符串的长度
	//输出值为3
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));
	printf("%d\n",strlen(arr4));//输出值为随意值 直到遇到/0
	printf("%s\n",arr1);//输出值为abc
	printf("%s\n",arr2);
	printf("%s\n",arr3);
	printf("%s\n",arr4);//输出值为abc烫烫烫烫虜愭渠
	return 0;
}
