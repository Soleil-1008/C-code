#define _CRT_SECURE_NO_WARNINGS 1
//练习：编写代码实现，模拟用户登录情景，并且只能登录三次。
//（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序。
#include<stdio.h>
#include <string.h>
int main()
{
	char psw[20] = "";
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; ++i)
	{ 
		printf("please input password:");
		scanf("%s", psw);
		//if(password=="password")
		//==不能用来比较两个字符串相等，应使用一个库函数-strcmp
		if (strcmp(psw, "password") == 0)
		{
			printf("enter\n");
			break;
		}
		else
		{
			printf("erro\n");
		}
	} 
	if (i == 3)
		printf("exit\n"); 
	return 0;
}