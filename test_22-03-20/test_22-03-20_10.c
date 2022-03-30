#define _CRT_SECURE_NO_WARNINGS 1
//指针运算-指针的关系运算
//标准规定:允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
//但是不允许与指向第一个元素之前的那个内存位置的指针进行比较
#include<stdio.h>
int main()
{
	#define N_VALUES 5
	float values[N_VALUES];
	float* vp;//指针+-整数；指针的关系运算
	//1.更好
	for (vp = &values[N_VALUES]; vp > &values[0];)
	{
		*--vp = 0;//5个元素全改为0
		printf("%d ", *vp);
	}

	//2.代码简化（避免这种写法）-不满足c语言语法
	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
	{
		*vp = 0;//5个元素全改为0
		printf("%d ", *vp);
	}
	return 0;
}