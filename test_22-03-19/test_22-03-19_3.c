#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ������-sizeof()
#include <stdio.h>
void test1(int arr[])//��������Ԫ�ص�ַ
{ 
	printf("%d\n", sizeof(arr));//ָ�� 4/8
}
void test2(char ch[])//��������Ԫ�ص�ַ
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