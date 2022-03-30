#define _CRT_SECURE_NO_WARNINGS 1
//指针运算- 指针-指针(得到的是之间元素个数)

#include<stdio.h>

int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
		end++;
	return end - start;
}
int main()
{
	/*
	char ch[5] = { 0 };
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);//9 指针指向同一块空间
	printf("%d\n", &arr[0] - &arr[9]);//=9
	//printf("%d\n", &arr[9] - &ch[90]);//error 结果不可预知 类型不同
	*/

	//strlen - 求字符串长度
	//递归-模拟实现strlen-1.计数器的方式 2.递归的方式
	char arr2[] = "bit";//b i t \0
	int len = my_strlen(arr2);
	printf("%d\n", len);//3
	return 0;
}
