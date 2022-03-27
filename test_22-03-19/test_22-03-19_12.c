#define _CRT_SECURE_NO_WARNINGS 1
//复杂表达式的求值有三个影响的因素 
//1.操作符的优先级 2.操作符的结合性 3.是否控制求值顺序  ,  &&  ||   ? :
//相邻的操作符  优先级相同，取决于他们的结合性
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int e = 1;
	int f = 2;
	int c = b + a * 3;//先*再+
	int d = b + a + 3;//加法 结合性L-R 先左后右

	a* b + c * d + e * f;//(少写)
	//优先级并不能决定第三个*比第一个+早执行
	//运算顺序可能：a*b  c*d  a*b + c*d  e*f  a*b + c*d + e*f
	//或者：a*b  c*d  e*f   a*b + c*d    a*b + c*d + e*f
	
	c + --c;
	//自减--的运算在+的运算的前面  不能确定+操作符的左操作数的获取在右操作数之前还是之后
	//printf("%d\n", c);

	//非法表达式
	int i = 10;
	i = i-- - --i * (i = -3) * i++ + ++i;
	printf("i = %d\n", i);//4
	//在不同编译器中测试结果(不同)：非法表达式程序的结果
	return 0;
}