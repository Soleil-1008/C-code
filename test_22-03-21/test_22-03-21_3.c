#define _CRT_SECURE_NO_WARNINGS 1
//ϰ��
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;//��ַǿ��ת��Ϊshort*  ������һ�η��������ֽ�
	int i = 0;
	for (i = 0; i < 4; i++) //ѭ���Ĵ�
	{
		*(p + i) = 0;//+1 �������ֽ�  +0+1  1->0 0 0 0 +2+3  2->0 0 0 0
	}
	for(i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);//0 0 3 4 5
	}
}