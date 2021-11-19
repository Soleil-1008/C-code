//定义预定义符号
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
int main() {
	int a = 10;
	scanf("%d", &a);
	printf("%d\n", a);
	return 0;
}*/
int main() {
	char arr[5] = { 0 };//5个字符
	scanf("%s", arr);//输入时超过5个字符？
	printf("%s", arr);
	return 0;
}