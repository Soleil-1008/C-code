#define _CRT_SECURE_NO_WARNINGS 1
//数组名
//数组名是数组首元素的地址。（有两个例外）
//1.sizeof(数组名)--数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&s数组名--数组名表示整个数组,取出的是整个数组的地址
#include<stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7};
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%p\n", arr);//数组名-首元素地址000000960B1CF8F8
	printf("%p\n", arr+1);//+4
	printf("%p\n", &arr[0]);//取的是首元素地址000000960B1CF8F8
	printf("%p\n", &arr[0]+1);//+4
	printf("%d\n", *arr);//1 解引用
	printf("%p\n", &arr);//取出的是数组的地址00000098B06FF988
	printf("%p\n", &arr+1);//+28
	return 0;
}