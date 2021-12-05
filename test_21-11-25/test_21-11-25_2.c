#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//悬空else
int main() {
	int a = 0;
	int b = 2;
	if (a == 1)//什么都不输出
		if (b = 2)
			printf("hehe\n");
	else//与最近的if相匹配
		printf("haha\n");

	if (a == 1) {
		if (b = 2)
			printf("hehe\n");
		else
			printf("haha\n");
	}//什么都不输出

	if (a == 1) {
		if (b = 2)
			printf("hehe\n");
	}
	else
		printf("haha\n");//haha

	return 0;
}