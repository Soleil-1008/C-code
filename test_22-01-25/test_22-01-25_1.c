#define _CRT_SECURE_NO_WARNINGS 1
//����Ļ�����9*9�˷��ھ���
#include<stdio.h>
int main()
{
	int i = 0;
	//ȷ����ӡ9��
	for (i = 1; i <= 9; i++) 
	{
		//��ӡһ��
		int j = 1;
		for (j = 1; j <= i; j++) 
		{
			printf("%d*%d=%-2d ",i,j,i*j);
			//%2d-��ʾ��ӡ2λ�����Ҷ���,%-2d��ʾ�����
		}
		printf("\n");
	}
	return 0;
}