#define _CRT_SECURE_NO_WARNINGS 1
//����-�⺯�����Զ��庯��
#include<stdio.h>
#include<string.h>
int main() 
{
	//strcpy-string copy-�ַ������� /0Ҳ�´����ȥ
	// char * strcpy ( char * destination, const char * source );
	//strlen-string length-���ַ��������й�
	char arr1[] = "bit";
	char arr2[20] = "#######";
	//               bit\0### ����\0ֱ�ӽ���
	char str1[] = "Sample string";
	char str2[40];
	char str3[40];
	strcpy(str2, str1);//strcpy()���ܻ����������
	strcpy(arr2, arr1);//Ŀ�ĵؿռ�Ӧ���㹻��
	strcpy(str3, "copy successful");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	printf("%s\n",arr2);//bit
	return 0;
}