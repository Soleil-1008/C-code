#define _CRT_SECURE_NO_WARNINGS 1
//����Сд��ĸת��
#include<stdio.h>
int main(void)
{
	char ch;
	printf("������һ����ĸ��\n");
	scanf("%c", &ch);
	//�����ĸ�Ƿ����Ҫ��
	if (ch < 'A' || ch > 'z')
	{
		printf("�����ⲻ��һ����ĸ\n");
	}
	//��Сдת��
	if (ch >= 'a' && ch <= 'z') {
		ch = ch - 'a' + 'A';
		printf("��Ӧ��Сдת��: \n%c", ch);
	}

	else if (ch >= 'A' && ch <= 'Z') {
		ch = ch + 'a' - 'A';
		printf("��Ӧ��Сдת��: \n%c", ch);
	}
	return 0;
}
