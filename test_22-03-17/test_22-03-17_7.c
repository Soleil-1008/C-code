#define _CRT_SECURE_NO_WARNINGS 1
//二维数组在内存中的存储-连续存储
#include<stdio.h>
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)//如果i<=3 则下标越界 错误
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);//相差4
		}
		printf("\n");//换行
	}
	return 0;
}