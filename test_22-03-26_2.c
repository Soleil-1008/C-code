#define _CRT_SECURE_NO_WARNINGS 1
//结构的成员可以是标量、数组、指针，甚至是其他结构体
//结构变量的成员是通过点操作符（.）访问的
#include<stdio.h>
struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};
struct T
{
	char ch[10];
	struct S s;
	char* pc;
};
int main()
{
	char arr[] = "hello bit\n";
	struct T t = { "hehe", {100,'w',"hello world",3.14}, arr };////结构体嵌套初始化
	printf("%s\n", t.ch);//hehe
	printf("%s\n", t.s.arr);//hello world
	printf("%lf\n", t.s.d);//3.140000
	printf("%s\n", t.pc);//hello bit
	return 0;

}