#define _CRT_SECURE_NO_WARNINGS 1
//��ϰ��дһ��������ÿ����һ������������ͻὫnum��ֵ����1
#include<stdio.h>
void Add(int* p)
{
	//*p++;//++���ȼ��� ������p
	(*p)++;
}
int main() 
{
	int num = 0;
	//���ú�����ʹ��numÿ������1
	Add(&num);//��ַ
	printf("num = %d\n",num);//1
	Add(&num);
	printf("num = %d\n", num);//2
	Add(&num);
	printf("num = %d\n", num);//3
	return 0;
}