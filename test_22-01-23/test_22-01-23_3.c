#define _CRT_SECURE_NO_WARNINGS 1
//�������
//����1/1-1/2+1/3-1/4+1/5+......+1/99-1/100��ֵ����ӡ�����
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*1.0 / i;//������ΪС��
		flag = -flag;
	}
	printf("%lf\n", sum);//0.688172
	return 0;
}