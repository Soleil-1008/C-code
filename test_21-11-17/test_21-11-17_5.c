#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//库函数system()头文件
#include <string.h>//库函数strcmp()头文件
//关机
int main() {
	//system()--专门用来执行系统命令的
	char input[20] = { 0 };//储存数据
	system("shutdown -s -t 60");//关机命令

again:
	printf("请注意，你的电脑在1分钟内关机，请输入：我是个大傻子，取消关机\n");
	scanf("%s",input);//%s=字符串
	if (strcmp(input,"我是个大傻子") == 0) //判断input中放的是不是“我是个大傻子”-strcmp--string compare
	{   
		system("shutdown -a");
	}
	else
	{
		goto again;//跳转
	}
	return 0;
}

