#define _CRT_SECURE_NO_WARNINGS 1
//操作符-单目操作符
//!逻辑反操作  - 负值  + 正值  & 取地址
//sizeof  操作数的类型长度（以字节为单位）  ~ 对一个数的二进制按位取反
// --  前置、后置--    ++  前置、后置++
//* 间接访问操作符(解引用操作符)      (类型) 强制类型转换
#include<stdio.h>
int main()
{
	int a = -10;
	printf("%d\n", !2);//0
	printf("%d\n", !0);//1
	//a = -a;
	//int* p = &a;//取地址操作符
	//*p = 20;//解引用操作符
	printf("%d\n", sizeof a);// 4
	//printf("%d\n", sizeof int);//error

	int b = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	//sizeof 计算变量所占内存空间的大小，单位是字节
	printf("%d\n", sizeof(b));//4
	printf("%d\n", sizeof b);//名称可以去掉括号  类型不可以去掉括号
	printf("%d\n", sizeof(int));//4

	printf("%d\n", sizeof(c));//1
	printf("%d\n", sizeof(char));//1
	
	printf("%d\n", sizeof(p));//4\8(32位或64位)
	printf("%d\n", sizeof(char*));//4\8

	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(int [10]));//40  int[10]就是数组类型
	printf("%d\n", sizeof(int [5]));//20
	
	return 0;

}