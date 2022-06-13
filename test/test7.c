#define _CRT_SECURE_NO_WARNINGS 1
//从键盘输入10个数，求最大值和最小值
#include<stdio.h>

int main() {
	int num[10];
	int i;
	int max, min;
	printf("请你输入10个整数:\n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	max = num[0]; min = num[0];
	for (i = 0; i < 10; i++) {
		if (max <= num[i])
			max = num[i];
		if (min > num[i])
			min = num[i];
	}
	printf("max=%d,min=%d\n", max, min);
	return 0;
}
