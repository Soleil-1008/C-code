#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ѡ��
int main() {
	int coding = 0;
	printf("join me\n");
	printf("��ҪŬ���ô�����(1/0)>:");
	scanf("%d",&coding);
	if (coding == 1) {
		printf("��֣�����н\n");
	}
	else {
		printf("������������\n");
	}
	return 0;
}