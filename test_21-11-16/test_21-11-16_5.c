#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数--简化代码,代码复用 自定义函数，库函数
int Add(int x, int y) {//函数返回类型 函数名 函数参数 函数体
	int z = x + y;
	return z;
}
int main() {
	int sum = 0;
	int num1 = 10;
	int num2 = 20;
	int a = 100;
	int b = 200;
	printf("请输入两个整数：");
	(void)scanf("%d %d",&num1,&num2);//或scanf_s
	//sum = num1+num2;
	sum = Add(num1,num2);
	//sum = a+b;
	//sum = Add(a,b);
	printf("sum = %d\n",sum);	
	return 0;
}