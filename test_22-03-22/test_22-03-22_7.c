#define _CRT_SECURE_NO_WARNINGS 1
//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//�ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
#include<stdio.h>
//DigitSum(1729)
//DigitSum(172)+1729%10
//DigitSum(17)+172%10+1729%10
//DigitSum(1)+17%10+172%10+1729%10
int DigitSum(unsigned int num)
{
	if(num>9)
	{
		return DigitSum(num / 10) + num % 10;
	}
	else
	{
		return num;
	}
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);//1729
	int ret = DigitSum(num);
	printf("ret = %d\n", ret);
	return 0;
}