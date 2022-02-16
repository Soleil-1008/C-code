#define _CRT_SECURE_NO_WARNINGS 1
//练习： 写一个函数，实现一个整形有序数组的二分查找
#include<stdio.h>
//形参名和实参名可以相同

//本质上这里arr是一个指针
int binary_search(int arr[],int k,int sz)
{
	//算法的具体实现
	//数组传参时,传的是首元素的地址,不能用此方法求元素个数
	//int sz = sizeof(arr) / sizeof(arr[0]);//数组个数
	//    1    指针大小4/8       4
	int left = 0;
	int right = sz - 1;
	while (left <= right) // <=  有元素可以被查找
	{
		int mid = (left + right) / 2;//中间元素下标
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main() 
{
	//二分查找
	//在一个有序数组中查找具体的某个数
	//如果找到返回下标，找不到返回-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//传递过去的是首元素的地址
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下标是：%d\n",ret);//6
	}
	return 0;
}