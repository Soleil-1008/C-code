#define _CRT_SECURE_NO_WARNINGS 1
//��ά�������ڴ��еĴ洢-�����洢
#include<stdio.h>
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)//���i<=3 ���±�Խ�� ����
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);//���4
		}
		printf("\n");//����
	}
	return 0;
}