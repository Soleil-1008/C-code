#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int fun() {
	static int count = 1;//执行一次后 不再有作用 
	return ++count;//每次返回结果都不同
}
int main() {
	int answer;
	answer = fun() - fun() * fun();//（少写 有问题 错误）
	//只能通过操作符的优先级得知：先算乘法，再算减法
	//函数的调用先后顺序无法通过操作符的优先级确定
	printf("%d\n", answer);//-10（结果可能不同 大多相同）
	return 0;
}