#define _CRT_SECURE_NO_WARNINGS 1
//��ӡ�����Ƶ�����λ��ż��λ
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
#include<stdio.h>
void Print(int m)
{
	int i = 0;
	printf("����λ��\n");
	for(i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);//����λ0000000000000000
	}
	printf("\n");
	printf("ż��λ��\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);//ż��λ0000000000000011
	}
	printf("\n");
}
int main()
{
	//10
	//00000000000000000000000000001010
	int m = 0;
	scanf("%d", &m);
	Print(m);
	return 0;
}