#define _CRT_SECURE_NO_WARNINGS 1
//һά�����ʹ��
//����ͨ���±������ʣ��±��0��ʼ
//���������С int sz = sizeof(arr1) / sizeof(arr1[0]); 
#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	//[a][b][c][d][e][f][\0]
	// 0  1  2  3  4  5  6 
	printf("%c\n",arr[3]);//d
	int i = 0;
	int len = strlen(arr);
	//for (i = 0; i < (int)strlen(arr); i++) //i<6 strlen����һ���޷�����
	for (i = 0; i < len ; i++)
	{
		printf("%c ",arr[i]);//a b c d e f
	}

	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int n = 0;
	for (n = 0; n < sz; n++)
	{
		printf("%d ", arr1[n]);//1 2 3 4 5 6 7 8 9 0
	}
	return 0;
}