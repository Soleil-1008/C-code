#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����else
int main() {
	int a = 0;
	int b = 2;
	if (a == 1)//ʲô�������
		if (b = 2)
			printf("hehe\n");
	else//�������if��ƥ��
		printf("haha\n");

	if (a == 1) {
		if (b = 2)
			printf("hehe\n");
		else
			printf("haha\n");
	}//ʲô�������

	if (a == 1) {
		if (b = 2)
			printf("hehe\n");
	}
	else
		printf("haha\n");//haha

	return 0;
}