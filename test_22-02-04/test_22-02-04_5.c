#define _CRT_SECURE_NO_WARNINGS 1
//函数
//实参-真实传给函数的参数：常量、变量、表达式、函数等
//形参-函数名后括号中的变量 
//形参-只有在函数被调用的过程中才实例化 当函数调用完成之后就自动销毁
#include <stdio.h>
//实现函数，但是不能完成任务
//形参实例化之后其实相当于实参的一份临时拷贝
//对形参的修改是不会改变实参的
//x y 和a b不在同一地址空间
void Swap1(int x, int y){
	int tmp = 0;
	tmp = x; 
	x = y; //x=2
	y = tmp;//y=1
}
//正确版本
//void-不需要返回值
void Swap2(int *px, int *py){ 
	int tmp = 0; 
	tmp = *px;
	*px = *py;
	*py = tmp;
}

int main(){ 
	int a = 10;
	int* pa = &a; //pa指针变量 类型int*
	*pa = 20;//解引用操作-通过地址找到内容
	printf("a = %d\n",a);//20
	int num1 = 1; 
	int num2 = 2; 
	printf("num1 = %d num2 = %d\n", num1, num2);//1 2
	//调用Swap1函数-传值调用
	//形参和实参分别占有不同内存块，对形参的修改不会影响实参
	Swap1(num1, num2); 
	printf("Swap1::num1 = %d num2 = %d\n", num1, num2); //1 2
	//调用Swap2函数-传址调用
	//函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
	//函数内部可以直接操作函数外部的变量
	Swap2(&num1, &num2);
	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);//2 1
	return 0;
}