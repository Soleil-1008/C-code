#define _CRT_SECURE_NO_WARNINGS 1
//数组作为函数参数
//冒泡排序 将一个整型数组排序--优化
//break用于跳出一个循环体或者完全结束一个循环
//只能在循环体内和switch语句体内使用break
//continue只是中止(跳过)本次循环，接着开始下一次循环。
//continue 只能在循环语句中使用，即只能在 for、while 和 do…while 语句中使用
#include<stdio.h>

void bubble_sort(int arr[], int sz)
//int arr[]表示的依然是一个指针：int *arr
{
	//确定冒泡排序的躺数
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//error  sz=4/4=1
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设这一趟要排序的数据已经有序
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
				flag = 0;//本趟排序的数据其实不完全有序
			}
		}
		if (flag == 1) 
		{
			break;//终止循环 跳到外层for循环
		}
	}
}
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，排成升序
	//arr是数组,对数组进行传参时并非数组本身,实际上传过去的是数组首元素的地址 &arr[]
	bubble_sort(arr, sz);//冒泡函数排序    
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}