#define _CRT_SECURE_NO_WARNINGS 1
//дһ�������ӡ1-100֮������3�ı���������
#include<stdio.h>
int main()
{
	int i = 1;
	int count = 0;
	for (i = 1; i <= 100; i++) 
	{
		if (i % 3 == 0) 
		{
			printf("%d ",i);
			count++;//����
		}
	}
	printf("������%d\n", count);//33
	return 0;
}