#define _CRT_SECURE_NO_WARNINGS 1
//������A��B�����ݽ���������һ����
#include<stdio.h>
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++) 
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		//printf("%d ", arr1[i]);
		//printf("%d ", arr2[i]);
	}
	

}