#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//有1、2、3、4个数字，能组成多少个互不相同且无重复的三位数，都是多少
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