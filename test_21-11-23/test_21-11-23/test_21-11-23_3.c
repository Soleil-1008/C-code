#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针
int main() {
	//每个内存单元的大小是个字节
	//变量都有地址，取出变量地址如下

	int a = 10;//申请了4个字节的空间
	printf("%p\n",&a); //&a取地址

	//有一种变量是用来存放地址的-指针变量
	int *p = &a;//p的类型int*，p为一个整型指针变量  int *p; p=&a;
	printf("%p\n", &a);//打印地址，%p以地址形式打印
	printf("%p\n", p);//打印地址

	*p = 20;//*-解引用操作符/间接访问操作符,找到对应的对象a把值改为20,*p就是a
	printf("a = %d\n",a);//20

	char ch = 'w';
	&ch;
	char *pc = &ch;//char *pc;pc=7ch
	*pc = 'a';
	printf("%c\n",ch);//%c以字符形式打印 a
	printf("%d\n", sizeof(pc));//4、8
	double d = 3.14;
	double* pd = &d;
	*pd = 5.5;
	printf("d = %lf\n",d);//5.500000六位小数
	printf("d = %lf\n", *pd);
	return 0;
}