#define _CRT_SECURE_NO_WARNINGS 1
//逗号表达式-exp1, exp2, exp3, …expN(尽量少用，易混淆)
//从左向右依次执行。整个表达式的结果是最后一个表达式的结果
#include<stdio.h>
int main()
{
	//代码1
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式 c=b=13
	//代码2
	int d = 1;
	if (a = b + 1, c = a / 2, d > 0)//等价于if(d>2)
	{
	}

	//代码3
	a = get_val();
	count_val(a);
	while (a > 0)
	{
		//业务处理        
		a = get_val();
		count_val(a);
	}
	//如果使用逗号表达式，改写：
	while (a = get_val(), count_val(a), a > 0)
	{
		//业务处理
	}
}
