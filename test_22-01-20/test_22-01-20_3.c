#define _CRT_SECURE_NO_WARNINGS 1
//��ϰ����д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//��ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����
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
		//==���������Ƚ������ַ�����ȣ�Ӧʹ��һ���⺯��-strcmp
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