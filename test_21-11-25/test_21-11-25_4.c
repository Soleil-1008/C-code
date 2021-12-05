#define _CRT_SECURE_NO_WARNINGS 1
//应用
//1.判断一个数是否为奇数
/*
#include <stdio.h>
int main() {
	int a = 0;
	printf("请输入一个整数：");
	scanf_s("%d",&a);
	if (1 == a % 2)
		printf("这个数为奇数\n");
	else
		printf("这个数为偶数\n");
	return 0;
}
*/
//2.输出1-100之间的奇数while for
/*
#include <stdio.h>
int main() {
	//printf("1-100之间的奇数有： ");
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