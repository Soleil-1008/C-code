#define _CRT_SECURE_NO_WARNINGS 1
//交换两个整型变量a,b的值
#include <stdio.h>
#include <limits.h>
int main() {
	int a = 3;
	int b = 5;
	int c = 0;
	INT_MAX;
	printf("交换前：a=%d b=%d\n",a,b);

	//1.引入第三变量-代码可读性高，执行效率高（企业里多采用）
	/*
	c = a;
	a = b;
	b = c;
	printf("交换后：a=%d b=%d\n",a,b);*/

	//2.不引入第三变量
	/*
	a = a + b;//a-a+b,b-b
	b = a - b;//b得到原来的a
	a = a - b;//a得到原来的b
	printf("交换后：a=%d b=%d\n", a, b);*/
	//问题：整型溢出 int-4个字节-32比特位（有最大值2147483647）

	//3.^-异或 可读性差，执行效率低于其他方法
	//解决2的问题(不会溢出)^按(2进制)位异或--相同为0,相异为1  a:011 b:101
	a = a ^ b;//a为110
	b = a ^ b;//b为011
	a = a ^ b;//a为101
	printf("交换后：a=%d b=%d\n", a, b);
	return 0;
}