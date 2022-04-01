#define _CRT_SECURE_NO_WARNINGS 1
// 指针和数组
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;//p存放的是数组首元素的地址 代码可行
	//数组名-首元素地址
	//例外：
	//1.&arr-数组名表示整个数组，取出的是整个数组的地址
	//2.sizeof(arr)-数组名表示整个数组,计算的是整个数组的大小
	printf("%p\n", arr);//数组名-首元素地址  000000067CCFFB98
	printf("%p\n", arr+1);//000000067CCFFB9C
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);//数字一样 意义不同 取出的是整个数组的地址 该地址从首地址开始
	printf("%p\n", &arr+1);//000000067CCFFBC0
	return 0;

}