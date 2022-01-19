#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//for语句的循环控制变量
//不可在for循环内修改循环变量，防止for循环失去控制（死循环）
//建议for语句的循环控制变量的取值采用“前闭后开区间”写法
int main()
{
	/*
	int i = 0;
	for (i=0;i<10;i++)
	{
		if (i = 5)//赋值i=5，i一直为5
			printf("haha ");//haha hehe haha hehe死循环
		printf("hehe ");
	}
	*/

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	//10次循环，10次打印，10个元素
	for (i=0;i<10;i++)//前闭后开写法
	//for (i=0;i<=9;i++)两边都是闭区间
	{
		printf("%d ",arr[i]);//1 2 3 4 5 6 7 8 9 10
	}
	return 0;
}