#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {
	//计算两个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("输入两个操作数：");
	//输入数据-使用输入函数scanf()
	scanf("%d%d",&num1,&num2);//&取地址符号
	//int sum = 0;
	//c语言语法规定，变量要定义在当前代码块的最前面
	sum = num1 + num2;
	printf("sum = %d\n",sum);
	return 0;

}