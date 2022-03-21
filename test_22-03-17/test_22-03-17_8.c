#define _CRT_SECURE_NO_WARNINGS 1
//数组作为函数参数
//冒泡排序 将一个整型数组排序--效率较低
#include<stdio.h>

void bubble_sort(int arr[],int sz)
{
	//确定冒泡排序的躺数
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//error  sz=4/4=1
	for (i = 0; i < sz - 1; i++) 
	{ 
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) //比较相邻两个数
			{
				//交换两个元素 引入中间变量tmp
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，排成升序
	//arr是数组,对数组进行传参时并非数组本身,实际上传过去的是数组首元素的地址 &arr[]
	bubble_sort(arr,sz);//冒泡函数排序    
	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}