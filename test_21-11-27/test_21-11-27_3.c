#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//getchar()  putchar()应用
int main() {
	/*
	int ch = getchar();//获取字符-接受键盘输入一个字符
	putchar(ch);//输出
	printf("%c\n",ch);
	*/

	/*
	int ch = 0;
	while ((ch = getchar()) != EOF)
	//Ctrl+z--getchar()获取EOF,停止 EOF--end of file文件结束标志 值-1
	{
		putchar(ch);
	}*/

	//只打印字符'0'-'9',非数字字符不打印，遇到Ctrl+z停止
	/*
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;//跳过本次循环后面的代码，进行下一次循环的入口判断
		putchar(ch);
	}
	*/

	/*
	//error
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码：>");//输出函数
	scanf("%s",password);//输入函数,输入密码123456并存放在password数组中 123456\n scanf读取123456
	printf("请确认(Y/N)：>");
	ret = getchar();//输入函数,读取\n ASCII = 10
	if ('Y' == ret)
	{
		printf("确认成功。\n");
	}
	else
	{
		printf("确认失败。\n");//确认失败
	}
	*/

	//123456
	/*
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码：>");//输出函数
	scanf("%s",password);//输入函数,输入密码123456并存放在password数组中 123456\n scanf读取123456
	//缓冲器还剩余一个'\n'
	//读取一下'\n'
	getchar();//将'\n'读走，不用存放
	printf("请确认(Y/N)：>");
	ret = getchar();//输入函数
	if ('Y' == ret)
	{
		printf("确认成功。\n");
	}
	else
	{
		printf("确认失败。\n");
	}*/

	/*
	//error
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码：>");//输出函数
	scanf("%s", password);//输入函数,输入密码123456\n并存放在password数组中 scanf读取123456
	//当输入密码是123 abc\n时，scanf读取123
	//缓冲器还剩余一个' abc\n'
	getchar();//将' '读走，不用存放
	printf("请确认(Y/N)：>");
	ret = getchar();//输入函数 读取a
	if ('Y' == ret)
	{
		printf("确认成功。\n");
	}
	else
	{
		printf("确认失败。\n");//确认失败
	}
	*/

	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码：>");//输出函数123 abc\n
	scanf("%s", password);
	while ((ch = getchar()) != '\n')//当getchar()读取到'\n'时退出循环，否则一直读取一直判断
	{
		;//空语句
	}
	printf("请确认(Y/N)：>");
	ret = getchar();//输入函数
	if ('Y' == ret)
	{
		printf("确认成功。\n");
	}
	else
	{
		printf("确认失败。\n");
	}
	return 0;
}