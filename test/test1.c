#define _CRT_SECURE_NO_WARNINGS 1
//将大小写字母转换
#include<stdio.h>
int main(void)
{
	char ch;
	printf("请输入一个字母：\n");
	scanf("%c", &ch);
	//检测字母是否符合要求
	if (ch < 'A' || ch > 'z')
	{
		printf("错误，这不是一个字母\n");
	}
	//大小写转换
	if (ch >= 'a' && ch <= 'z') {
		ch = ch - 'a' + 'A';
		printf("对应大小写转换: \n%c", ch);
	}

	else if (ch >= 'A' && ch <= 'Z') {
		ch = ch + 'a' - 'A';
		printf("对应大小写转换: \n%c", ch);
	}
	return 0;
}
