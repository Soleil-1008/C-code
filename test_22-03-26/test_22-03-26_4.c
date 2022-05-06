#define _CRT_SECURE_NO_WARNINGS 1
//函数传参的时候，参数是需要压栈的
//如果传递一个结构体对象的时候,结构体过大,参数压栈的的系统开销比较大,所以会导致性能的下降
#include<stdio.h>
int Add(int x,int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);//从右向左传 先传b再传a
}