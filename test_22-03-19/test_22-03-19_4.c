#define _CRT_SECURE_NO_WARNINGS 1
//关系操作符  >  >=  <  <=  != 用于测试“不相等”  == 用于测试“相等”
//逻辑操作符  && 逻辑与    || 逻辑或
//区分逻辑与/按位与、逻辑或/按位或
//1&2----->0   二进制位与
//1&&2---->1   数本身真假

//1|2----->3
//1||2---->1
#include <stdio.h>
int main()
{
	int m = 1;//非0即真
	int n = 2;
	int x = 0;
	int y = m && n;
	int z = m || x;
	int l = m && x;
	printf("%d\n", y);//1
	printf("%d\n", z);//1
	printf("%d\n", l);//0

	//1
	/*
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//a为0  此时i=0 不再计算++b d++ 最后a+1=1
	//i = a++||++b||d++;
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//1 2 3 4
	*/
	
	//2
	/*
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//
	//i = a++||++b||d++;
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//2 3 3 5
	return 0;
	*/
	
	//3
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++||++b||d++;//0||1为1 不再计算后面d++ a=0+1=1 b=1+2=3
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//1 3 3 4
	return 0;
}