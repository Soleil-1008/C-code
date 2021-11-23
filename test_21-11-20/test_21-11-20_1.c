#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//求两个整数较大值，函数
 int Max(int a,int b) {
	 printf("请输入两个整数：");
	 scanf_s("%d %d",&a,&b);
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
int main() {
	int num1 = 0;
	int num2 = 0;
	int max = 0;
	max = Max(num1,num2);
	printf("max = %d\n",max);
	return 0;
}
/*int main() {
	int num1 = 0;
	int num2 = 0;
	printf("请输入两个整数：");
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2) {
		printf("较大值是：%d\n", num1);
	}
	else {
		printf("较大值是：%d\n", num2);
	}
	return 0;
 }
*/
