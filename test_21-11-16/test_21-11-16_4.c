#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//whileѭ��
int main() {
	int line = 0;
	printf("join me\n");
	while (line<2000) {
		printf("��һ�д���:%d\n",line);
		line++;
	}
	if(line>=2000){
		printf("����н\n");
	}
	return 0;
}