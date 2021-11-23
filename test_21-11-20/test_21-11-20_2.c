#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;
}
//操作符
int main() {
	//关系操作符  >  >=  <  <=   !=用于测试'不相等'   ==用于测试'相等'
	//逻辑操作符  &&逻辑与(两个为真才真)  ||逻辑或(两者为假才为假)
	//0假   !0真
	/*
	int a = 3;
	int b = 5;
	int c = 0;
	int i = 0;
	int d = a && b;
	int e = a && c;
	printf("d = %d\n",d);//d=1
	printf("e = %d\n",e);//e=0
	int f = a || b;
	int g = a || c;
	int h = c || i;
	printf("f = %d\n", f);//f=1
	printf("g = %d\n", g);//g=1
	printf("h = %d\n", h);//h=0
	*/
	//条件操作符 三目操作符  （表达式）exp1？exp2：exp3 
	//表达式1结果为真 表达式2执行结果为整个表达式结果  表达式1结果为假 表达式3执行结果为整个表达式结果
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a>b?a:b);
	/*
	if (a>b) {
		max = a;
	}
	else {
		max = b;
	}
	*/
	printf("max = %d\n",max);//20
	//逗号表达式  exp1，exp2，exp3，....expn
	//下标引用[]、函数调用()和结构成员. ->
	int arr[10] = { 0 };
	arr[4];//[]下标引用操作符
	int sum = Add(a, b);//()函数调用操作符
	printf("sum = %d\n",sum);//30
	return 0;
}
