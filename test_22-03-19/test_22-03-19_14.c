#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//写出的表达式如果不能通过操作符的属性确定唯一的计算路径，那这个表达式就是存在问题的
int main()
{ 
	//(错误)
	//在linux 环境gcc编译器，VS2013环境下都执行，看结果(不同)
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	//第一个+在执行的时候，第三个++是否执行，这个是不确定的
	//依靠操作符的优先级和结合性是无法决定第一个+和第三个前置++的先后顺序
	printf("%d\n", ret);//12
	printf("%d\n", i);//4
	return 0;
}