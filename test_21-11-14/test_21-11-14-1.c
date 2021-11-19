#include <stdio.h>
int num1 = 20;//全局变量-定义在代码块{}之外的变量
int main() {
	//定义变量
	//年龄
	//20
	short age = 20;//向内存申请2个字节=16个bit位，用来存放20
	float weight = 95.6f;//向内存申请4个字节=32个bit位，用来存放小数
	char ch = 'w';
	int num2 = 10;//局部变量-定义在代码块{}内部的变量

	int num1 = 2;
	//局部变量和全局变量的名字建议不要相同-容易误会，产生bug
	//当局部变量和全局变量的名字相同时，局部变量优先
	printf("%d", num1);
	return 0;
}

/*
#include <stdio.h>
//int a = 10;//全局变量在任何范围均可使用
int main() 
{
	{int a = 10; }
	
	printf("%d\n",a);//局部变量只能在局部范围内使用
	return 0;
}
#include <stdio.h>
int a = 10;//全局变量在任何范围均可使用
int main()
{	
	printf("%d\n", a);//局部变量只能在局部范围内使用
	return 0;
}
*/