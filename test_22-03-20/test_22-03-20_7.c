#define _CRT_SECURE_NO_WARNINGS 1
// 如何规避野指针 
//1. 指针初始化  int a = 10;int* p = &a;*p = 20;
//2. 小心指针越界 
//3. 指针指向空间释放即使指针置NULL（不使用时置空）
//4. 避免返回局部变量的地址
//5. 指针使用之前检查有效性

#include <stdio.h>
int main()
{
	int *p = NULL;//((void *)0) 为空时不能访问
	int a = 10;
	p = &a;
	if(p != NULL)
	{
		*p = 20;
	}
	return 0;
}