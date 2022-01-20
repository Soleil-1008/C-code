#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0, j = 0; j = 0; i++, j++) {
		//j=0赋值语句 0为假 不循环  判断语句j==0
		j++;
		count++;
	}
	printf("%d\n",count);//0 不循环
	return 0;
}