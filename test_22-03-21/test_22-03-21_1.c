#define _CRT_SECURE_NO_WARNINGS 1
//创建数组
//实现函数init()初始化全为0
//实现printf()打印数组的每个元素
//实现reverse()函数完成数组元素的逆置(数组本身)
#include<stdio.h>
void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		arr[i] = 0;
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Reverse(int arr[], int sz) 
{
	int left = 0;
	int right = sz - 1;

	while (left<right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr, sz);//把数组初始化为0
	Print(arr, sz);//打印
	Reverse(arr, sz);
	Print(arr, sz);//打印
	return 0;
}