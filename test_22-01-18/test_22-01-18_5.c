#define _CRT_SECURE_NO_WARNINGS 1
//在一个有序数组中查找具体的某个数字n 编写int binsearch(int x, int v[], int n); 
//功能：在v[0]<=v[1]<=v[2]<= ….<=v[n-1]的数组中查找x
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//写一个代码，在arr数组（有序的）中找到7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，下标是：%d\n", i);//6
			break;//当找到后，就跳出循环
		}
	}
	if (i == sz)
		printf("找不到\n");
	return 0;
}