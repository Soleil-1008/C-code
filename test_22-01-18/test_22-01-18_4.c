#define _CRT_SECURE_NO_WARNINGS 1
//��ϰ:����1!+2!+3!+....+10!
#include<stdio.h>
int main()
{
	int i = 1;
	int n = 1;
	int ret = 1;
	int sum = 0;
	//�Ż�
	for (i = 1; i <= 10; i++) {
		ret = ret * i;
		printf("%d\n", ret);
		sum += ret;
	}
	//Ч�ʵ�
	/*
	for (n = 1; n <= 10; n++) 
	{
		ret = 1;
		for (i = 1; i <= n; i++) 
		{
			ret = ret * i;	
		}
		sum += ret;
	}
	*/
	printf("sum = %d\n", sum);//4037913
	return 0;
}