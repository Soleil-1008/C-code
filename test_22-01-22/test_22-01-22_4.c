#define _CRT_SECURE_NO_WARNINGS 1
//�Ż�
//дһ�����룺��ӡ100-200֮�������
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	//sqrt-��ƽ������ѧ�⺯��
	for (i = 101; i <= 200; i+=2)//�Ż� ż����������
	{
		//�ж�i�Ƿ�Ϊ����
		//�Գ���
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)//sqrt(i)���滻��i/2
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);//21
	return 0;
}
//����<��������n�־���>