#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ָ������Ĵ�С
int main() {
	//64λƽ̨ ָ���С8�ֽ�  32λƽ̨ ָ���С4�ֽ�
	printf("%d\n",sizeof(char *));//4��8
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(long *));
	printf("%d\n", sizeof(short *));
	return 0;
}