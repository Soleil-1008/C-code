#define _CRT_SECURE_NO_WARNINGS 1
//单目操作符-sizeof()
#include <stdio.h>
void test1(int arr[])//传的是首元素地址
{ 
	printf("%d\n", sizeof(arr));//指针 4/8
}
void test2(char ch[])//传的是首元素地址
{ 
	printf("%d\n", sizeof(ch));//  4/8
}
int main()
{ 
	int arr[10] = {0};
	char ch[10] = {0};
	printf("%d\n", sizeof(arr));// 10*4=40
	printf("%d\n", sizeof(ch));// 10*1=10
	test1(arr);
	test2(ch);
	return 0;
}