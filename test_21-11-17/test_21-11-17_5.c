#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//�⺯��system()ͷ�ļ�
#include <string.h>//�⺯��strcmp()ͷ�ļ�
//�ػ�
int main() {
	//system()--ר������ִ��ϵͳ�����
	char input[20] = { 0 };//��������
	system("shutdown -s -t 60");//�ػ�����

again:
	printf("��ע�⣬��ĵ�����1�����ڹػ��������룺���Ǹ���ɵ�ӣ�ȡ���ػ�\n");
	scanf("%s",input);//%s=�ַ���
	if (strcmp(input,"���Ǹ���ɵ��") == 0) //�ж�input�зŵ��ǲ��ǡ����Ǹ���ɵ�ӡ�-strcmp--string compare
	{   
		system("shutdown -a");
	}
	else
	{
		goto again;//��ת
	}
	return 0;
}

