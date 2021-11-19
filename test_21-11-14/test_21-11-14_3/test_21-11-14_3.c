#include <stdio.h>
//局部变量的作用域是变量所在的局部范围
//全局变量的作用域是整个工程
// 变量的生命周期是变量的创建到变量的销毁之间的一个时间段
//局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束
//全局变量的生命周期是：整个程序的生命周期
int global = 2021;
void test() 
{
	printf("test()--%d\n",global);
}
int main() {
	test();//调用函数test()
	printf("%d\n",global);
	//未声明的标识符
	//声明extern外部符号的
	extern int a;
	printf("a = %d\n",a);
	//未声明的标识符
	return 0;
}
/*
int main() 
{
	int num1 = 25;//num1作用域外部是部大括号
	{
		int num2 = 0;//num2作用域是内部大括号
		printf("%d\n", num2);//ok
		printf("%d\n", num1);
	}
	printf("%d\n", num2);//error
	return 0;
}
*/
