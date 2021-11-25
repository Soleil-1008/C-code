#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define定义标识符常量和宏-带参数
// #define定义标识符常量
//#define MAX 100
//#define定义宏-带参数
//函数的实现
Max(int x, int y) {
	if (x>y) {
		return x;
	}
	else {
		return y;
	}
}
//宏的定义
#define MAX(X,Y) (X>Y?X:Y)
int main() 
{
	//int a = MAX;//MAX赋给变量后，所有的变量均为100
	int a = 10;
	int b = 20;
	//函数方式
	int max = Max(a,b);
	printf("max = %d\n",max);//20
	//宏的方式
	max = MAX(a, b);
	//替换成max = (a>b?a:b);
	printf("max = %d\n",max);//20
	return 0;
}
/*#define ADD(x,y) ((x)+(y))
#include <stdio.h>
int main()
{
	int sum = ADD(2,3);
	printf("sum = %d\n",sum);//5
	sum = 10 * ADD(2, 3);
	printf("sum = %d\n",sum);//10
	return 0;
}
*/