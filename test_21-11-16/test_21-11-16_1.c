#define _CRT_SECURE_NO_WARNINGS 1
//�ַ�������
//"hello bite";
//"";//���ַ���
//'\0'--0
// 0-����
// ��0��-�ַ�0  48
// EOF-end of file-�ļ�������־
//'a'--97
// 'A'--65
// ASCII ����
// ASCII ��ֵ
//�����ڼ�����洢��ʱ�򣬴洢����2����
#include <stdio.h>
#include <string.h>
int main() {
	char arr1[] = "abc";//����
	//"abcd"--'a' 'b' 'c' 'd' '\0'
	//'\0'---ת���ַ�'\0'�ַ����Ľ�����־
	char arr2[] = { 'a','b','c','\0'};
	char arr3[] = { 'a','b','c',0};

	char arr4[] = { 'a','b','c'};
	//'a' 'b' 'c' 'd' '\0'
	printf("%d\n",strlen(arr1));//strlen--string length-�����ַ����ĳ���
	//���ֵΪ3
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));
	printf("%d\n",strlen(arr4));//���ֵΪ����ֵ ֱ������/0
	printf("%s\n",arr1);//���ֵΪabc
	printf("%s\n",arr2);
	printf("%s\n",arr3);
	printf("%s\n",arr4);//���ֵΪabc��������̔����
	return 0;
}
