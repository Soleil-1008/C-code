#define _CRT_SECURE_NO_WARNINGS 1
//从小到大排列输入的10个数
#include <stdio.h>
//#define ARRAY_LENGTH 10
int main() {
	int a[10];
	int i, j, temp;
	printf("请输入10个数字：\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d ", &a[i]);
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			//引入中间变量temp，交换两个数字
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	//打印排列后的数据
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}