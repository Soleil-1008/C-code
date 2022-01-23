#define _CRT_SECURE_NO_WARNINGS 1
//求10个整数中最大值
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];//最大值,不能赋值为0,应赋值为第一个数
	int i = 0;//元素下标
	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
	for (i = 1; i <= sz; i++) 
	{
		if (max < arr[i]) 
		{
			max = arr[i];
		}
	}
	printf("max = %d\n",max);
	return 0;
}