#define _CRT_SECURE_NO_WARNINGS 1
//��ϰ:����n�Ľ׳�(�����������)
#include<stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	scanf_s("%d",&n);
	for (i = 1; i <= n;i++) 
	{
		ret = ret * i;
	}
	printf("%d\n", ret);
	return 0;
}