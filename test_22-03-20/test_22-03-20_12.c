#define _CRT_SECURE_NO_WARNINGS 1
//指针和数组
//可以直接通过指针来访问数组
#include <stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,0};
	int *p = arr; //指针存放数组首元素的地址    
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<sz; i++)
	{
		//printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p+i);//相同
		// p+i其实计算的是数组arr下标为i的地址
		//*(p + i) = i;
		//printf("%d ", arr[i]);//数组形式
		printf("%d ", *(p + i));//可以直接通过指针来访问数组
	}
	return 0;
}