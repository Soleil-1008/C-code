#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//常量
//#define定义的标识符常量
#define MAX 10
//枚举常量
//性别：男 女 保密
//三原色：红黄蓝
//星期：1,2,3,4,5,6,7
//枚举关键字--enum
enum Color {
	RED,
	YELLOW,
	BLUE
};
enum Sex
{
	MALE,
	FEMALE,
	SECRET//枚举常量
};
int main() {
	int arr[MAX] = { 0 };
	printf("%d\n",MAX);//打印结果为10
	//enum Sex s = MALE;
	enum Color color = BLUE;
	color = YELLOW;//通过枚举类型创建出的变量可以改
	//BLUE = 6;//error大括号定义的枚举常量不能改
	printf("%d\n",MALE);//0
	printf("%d\n",FEMALE);//1
	printf("%d\n",SECRET);//2
	//字面常量
	3;
	100;
	3.14;
	//const属性
	//const修饰的常变量，不可改变
	const int num1 = 1;
	printf("%d\n", num1);
	//num1 = 8;//error
	printf("%d\n", num1);
	int num2 = 4;
	printf("%d\n",num2);
	num2 = 8;
	printf("%d\n",num2);
	const int n = 10;//n是变量，但是又有常属性，n为常变量
	//int arr[n] = { 0 };//error
	//n = 20;//error，不可改变
	return 0;
}