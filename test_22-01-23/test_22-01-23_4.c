#define _CRT_SECURE_NO_WARNINGS 1
//��10�����������ֵ
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];//���ֵ,���ܸ�ֵΪ0,Ӧ��ֵΪ��һ����
	int i = 0;//Ԫ���±�
	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
	for (i = 1; i <= sz; i++) 
	{
		if (max < arr[i]) 
		{
			max = arr[i];
		}
	}
	printf("max = %d\n",max);
	return 0;
}