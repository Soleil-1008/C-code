#define _CRT_SECURE_NO_WARNINGS 1
//һά�������ڴ��еĴ洢
//�������ڴ�����������ŵ�
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//�����С
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		printf("&arr[%d] = %p\n",i,&arr[i]);//���4
	}
	return 0;
}