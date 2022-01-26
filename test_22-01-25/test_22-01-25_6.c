#define _CRT_SECURE_NO_WARNINGS 1
//goto-终止程序在某些深度嵌套的结构的处理过程
//关机
#include<stdio.h>
#include<stdlib.h>//system()
#include<string.h>//strcmp
int main() 
{
	char input[20] = { 0 }; 
	//system()-执行系统命令的
	system("shutdown -s -t 60");//command-命令行
again:
	printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
	scanf("%s", input); 
	if(0 == strcmp(input, "我是猪"))//strcmp()比较两个字符串
	{
		system("shutdown -a");//取消关机
	}else
	{ 
		goto again;
	}
	return 0;
}