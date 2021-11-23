#define _CRT_SECURE_NO_WARNINGS 1
//关键字(不能和变量名冲突)const(常量) continue  default(默认)  enum(枚举) extern(引入外部符号)  register(寄存器) struct(结构体) 
// typedef(类型定义) union(联合体/共用体)  void(无/空)  volatile(不稳定的，反复无常的)
//计算机 存储数据-硬盘 内存 高速缓存 寄存器（速度越来越快，空间越来越小）CPU-中央处理器（处理数据从内存拿数据，未来从寄存器中拿数据）
#include <stdio.h>
void test() {
	//int a = 1;//局部变量（出变量范围销毁，重新进入时，重新创建）
	//static修饰局部变量，局部变量生命周期变长
	static int a = 1;//a是一个静态局部变量，不销毁，出了作用域仍存在
	a++;//a为2
	//printf("a = %d\n",a);//a=2 a=2 a=2 a=2 a=2
	printf("a = %d\n", a);//a=2 a=3 a=4 a=5 a=6
}
int main() {
	/*
	auto int a = 10;//局部变量-auto自动变量(自动创建，自动销毁)
	register int b = 10;//建议把a定义成寄存器变量（a会大量使用）
	signed int c = -10;//int定义的变量是有符号的
	unsigned int c = 0;//定义无符号数（负数也为正数）
	*/
	//typedef--类型定义--类型重定义
	typedef unsigned int u_int;
	unsigned int num1 = 20;
	u_int num2 = 20;//num1和num2类型一样
	//static--静态的(修饰局部/全局变量和函数)
	int i = 0;
	while (i < 5) {
		test();
		i++;
	}
	return 0;
}