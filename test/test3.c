#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ�����λ�������Ƕ���
int main() {
	int i, j, k;
	for (i = 1; i < 5; i++) 
	{
		for (j = 1; j < 5; j++) 
		{
			for (k = 1; k < 5; k++) 
			{
				if(i != j && j != k && k != i)
				{
					//printf("%d%d%d ",i,j,k);
					int n= 100 * i + 10 * j + 1 * k;
					printf("%d ", n);
				}
					
			}
		}
	}
	return 0;
}