#define _CRT_SECURE_NO_WARNINGS 1
//define不是关键字，一种指令
#include <stdio.h>
//static--静态的(修饰局部/全局变量和函数)
void test() {
	//static修饰局部变量，局部变量生命周期变长
	//int a = 1;//局部变量（出变量范围销毁，重新进入时，重新创建）
	static int a = 1;//a是一个静态局部变量，不销毁，出了作用域仍存在
	a++;//a为2
	//printf("a = %d\n",a);//a=2 a=2 a=2 a=2 a=2
	printf("a = %d\n", a);//a=2 a=3 a=4 a=5 a=6
}
//static修饰函数，改变了函数的链接属性（改变了函数的作用域-不准确）
//普通函数具有外部链接属性 static修饰时-->内部链接属性
//声明外部函数
extern int Add(int,int);
int main() {
	//static--静态的(修饰局部/全局变量和函数)
	int i = 0;
	while (i < 5) {
		test();
		i++;
	}
	//static修饰全局变量,改变了变量的作用域，让静态的全局变量只能在自己所在的源文件使用，出了源文件就无法使用
	//extern-声明外部符号
	extern int g_val;
	printf("g_val = %d\n", g_val);//2021
	int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("sum = %d\n",sum);//30
	return 0;
}