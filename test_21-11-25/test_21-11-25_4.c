#define _CRT_SECURE_NO_WARNINGS 1
//Ӧ��
//1.�ж�һ�����Ƿ�Ϊ����
/*
#include <stdio.h>
int main() {
	int a = 0;
	printf("������һ��������");
	scanf_s("%d",&a);
	if (1 == a % 2)
		printf("�����Ϊ����\n");
	else
		printf("�����Ϊż��\n");
	return 0;
}
*/
//2.���1-100֮�������while for
/*
#include <stdio.h>
int main() {
	//printf("1-100֮��������У� ");
	for (int i = 1; i < 101; i++) {
		if (i % 2 == 1) {
			printf("%d ",i);
		}
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main() {
	int i = 1;
	while (i<=100) {
		if (i % 2 == 1) {
			printf("%d ",i);
		}
		i++;
	}
}
*/

#include <stdio.h>
int main() {
	int i = 1;
	while (i <= 100) {
		printf("%d ", i);
		i += 2;
	}
	return 0;
}