#define _CRT_SECURE_NO_WARNINGS 1
//操作符-位操作符（二进制位）  
//& 按位与 | 按位或  ^ 按位异或  操作数必须是整数
#include <stdio.h>
int main()
{ 
	int num1 = 3;//011(32位)
	int num2 = 5;//101
	int a = num1 & num2;//001(都为1才为1)
	int b = num1 | num2;//111(都为0才为0)
	int c = num1 ^ num2;//110(相异为1，相同为0)
	printf("%d\n", a);//1
	printf("%d\n", b);//7
	printf("%d\n", c);//6
	return 0;
}