#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//while循环
int main() {
	int line = 0;
	printf("join me\n");
	while (line<2000) {
		printf("敲一行代码:%d\n",line);
		line++;
	}
	if(line>=2000){
		printf("给高薪\n");
	}
	return 0;
}