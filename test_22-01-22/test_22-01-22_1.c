#define _CRT_SECURE_NO_WARNINGS 1
//���������������������������Լ��
//շת�����
#include<stdio.h>
int main()
{
	int m = 24;
	int n = 18;
	int r = 0;
	scanf("%d%d",&m,&n);
	while (r=m % n)
	{
		m = n;
		n = r;
	}
	printf("%d\n",n);//6
	return 0;
}