#define _CRT_SECURE_NO_WARNINGS 1
//�ػ�����
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	char input[10] = {0}; 
	system("shutdown -s -t 60");
	while(1){
		printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
		scanf("%s",&input);
		if(0 == strcmp(input, "������"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}