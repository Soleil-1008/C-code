#define _CRT_SECURE_NO_WARNINGS 1
//��С�������������10����
#include <stdio.h>
//#define ARRAY_LENGTH 10
int main() {
	int a[10];
	int i, j, temp;
	printf("������10�����֣�\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d ", &a[i]);
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			//�����м����temp��������������
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	//��ӡ���к������
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}