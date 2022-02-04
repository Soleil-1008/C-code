#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个函数可以找出两个整数中的最大值。
/*
函数的组成：
ret_type fun_name(para1, * ){
statement;//语句项 函数体(函数如何实现)
}
ret_type 返回类型
fun_name 函数名
para1    函数参数
*/
//get_max函数定义
int get_max(int x, int y) {
	return (x > y) ? (x) : (y); 
}
int main() {
	int num1 = 0; 
	int num2 = 0;
	scanf("%d %d",&num1,&num2);
	//函数使用
	int max = get_max(num1, num2);
	printf("max = %d\n", max);
	max = get_max(10, get_max(56, 1));
	printf("max = %d\n", max);//56
	max = get_max(10, 15+1);
	//实参：常量 变量 表达式 函数
	printf("max = %d\n", max);//16
	return 0;
}