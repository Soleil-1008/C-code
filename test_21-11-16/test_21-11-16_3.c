#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//选择
int main() {
	int coding = 0;
	printf("join me\n");
	printf("你要努力敲代码吗？(1/0)>:");
	scanf("%d",&coding);
	if (coding == 1) {
		printf("坚持，给高薪\n");
	}
	else {
		printf("放弃，卖红薯\n");
	}
	return 0;
}