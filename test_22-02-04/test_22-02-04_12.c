#define _CRT_SECURE_NO_WARNINGS 1
//链式访问:s把一个函数的返回值作为另外一个函数的参数。
#include <stdio.h>
int main(){ 
	printf("%d", printf("%d", printf("%d", 43)));//4321
	//      1             2           43
	//注：printf函数的返回值是打印在屏幕上字符的个数
	return 0;
}