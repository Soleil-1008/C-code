#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//switch(整型表达式)
//{语句项;}--case 整型常量表达式:语句;
//break实际效果是把语句列表划分为不同的部分---最后一个case加上一条break语句
//遇到break则跳出，没有break则继续向下执行
//可以出现if语句，不需要continue
int main() {
	int day = 0;//day 必须为整型
	int n = 3;
	scanf_s("%d",&day);//3
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");//weekday
		if (n == 3)
			printf("haha\n");//haha
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default://--默认 当前面switch表达式的值所有case都不能匹配的时执行
			//可有可无,处理非法的情况(最好加上,任意位置,建议放后面)
		printf("输入错误\n");
		break;//最好加上
	}

	/*
	switch (day)
	{
	case 1://决定入口
		printf("星期一\n");
		break;//决定出口
	case 2://整型常量
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");//星期三
		break;//跳出switch语句
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	}*/

	/*
	if (1 == day)
		printf("星期一\n");
	else if (2 == day)
		printf("星期二\n");
	else if (3 == day)
		printf("星期三\n");//星期三
	else if (4 == day)
		printf("星期四\n");
	else if (5 == day)
		printf("星期五\n");
	else if (6 == day)
		printf("星期六\n");
	else if (5 == day) 
		printf("星期天\n");*/
	return 0;
}
