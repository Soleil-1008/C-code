#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//结构体-自己创造出的一种类型（复杂对象）
struct Book//创建一个结构体类型
{
	char name[20];//C语言程序设计 name 数组名，本质上是一个地址
	short price;//55  price 变量，可以直接更改
};//;不可缺少，结束类型定义
int main() {
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	printf("书名：%s\n",b1.name);//书名：C语言程序
	printf("价格：%d元\n",b1.price);//价格：55元
	//b1.name = "C++";//error name 实质是个地址，不能直接更改
	//strcpy(要把数据拷到哪里去，拷贝数据来自哪里)两个参数
	strcpy(b1.name,"C++");//字符串更改方式strcpy-string copy-字符串拷贝-库函数-string.h
	printf("修改后的书名：%s\n", b1.name);//C++
	b1.price = 50;
	printf("修改后的价格：%d元\n", b1.price);//修改后的价格：50元
	struct Book *pb = &b1;//struct Book *-指针类型，pb指针变量，指向b1
	//利用pb打印出书名和价格
	//.  操作符-结构体变量.成员
	//-> 操作符-结构体指针->成员
	printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);
	printf("%s\n", pb->name);//pb指向对象b1的name
	printf("%d\n", pb->price);//pb指向对象b1的price
	return 0;
}