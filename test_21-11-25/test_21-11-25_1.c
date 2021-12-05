#define _CRT_SECURE_NO_WARNINGS 1
//分支语句if switch（选择结构）
//C语言中由一个分号;隔开的就是一条语句
//; 是语句-空语句
//c语言中 0 表示假 非0 表示真
//单分支：if(表达式) 语句;
//双分支：if(表达式){语句列表1;}  else{语句列表2;}
//多分支：if(表达式1){语句列表1;}  else if(表达式2){语句列表2;}  else{语句列表3;}
//判断年龄段
#include <stdio.h>
int main()
{ 
	//单分支
	/*
	int age = 10;
	if(age<18) 
		printf("未成年\n");//未成年（一条语句时可以不要大括号）
	*/

	//双分支
	/*
	int age = 22;
	if (age < 18)
	{
		printf("未成年\n");
	}
	else {
		printf("成年\n");//成年
	}
	*/

	//多分支
	int age1 = 17;
	int age2 = 24;
	if(age1<18)
	{
		printf("未成年\n");//未成年
		printf("不能谈恋爱\n");//不能谈恋爱，执行多条语句时加上大括号 一对{}就是一个代码块
	}//代码块
	else if(age1>=18 && age1<28)//18<age<28  18<17<28  值为1
		printf("青年\n");//一条语句
	else if(age1>=28 && age1<50)
		printf("壮年\n");
	else
		printf("老年\n");

	//也可写为（逻辑相同）
	if (age2 < 18) 
		printf("未成年\n");
	else {
		if (age2 >= 18 && age2 < 28)
			printf("青年\n");//青年
		else if (age2>=28 && age2<50)  
			printf("壮年\n");
		else
			printf("老年\n");
	}//代码块
	return 0;
}