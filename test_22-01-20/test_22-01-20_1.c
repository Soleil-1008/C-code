#define _CRT_SECURE_NO_WARNINGS 1
//练习：在一个有序数组中查找具体的某个数字n 编写int binsearch(int x, int v[], int n); 
//功能：在v[0]<=v[1]<=v[2]<= ….<=v[n-1]的数组中查找x
//优化：折半查找法、二分查找法
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz-1;//右下标
	while (left<=right)//有元素才能进行查找
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);//6（有相同时，不会打印两个下标）
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}