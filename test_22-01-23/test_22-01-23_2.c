#define _CRT_SECURE_NO_WARNINGS 1
//�������
//����1/1+1/2+1/3+1/4+1/5+......+1/99+1/100��ֵ����ӡ�����
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0;
	for (i = 1; i <= 100; i++) 
	{
		sum += 1.0 / i;//������ΪС��
		//1/1+1/2+1/3+...
		//1+0+0+0...
	}
	printf("%lf\n",sum);//5.187378
	return 0;
}