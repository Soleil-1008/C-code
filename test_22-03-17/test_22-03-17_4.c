#define _CRT_SECURE_NO_WARNINGS 1
//一维数组在内存中的存储
//数组在内存中是连续存放的
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//数组大小
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		printf("&arr[%d] = %p\n",i,&arr[i]);//相差4
	}
	return 0;
}