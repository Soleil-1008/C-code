#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//一个非空整型数组，除了有个元素只出现一次以外，其他元素均出现两次，找出只出现一次的数
//a^a=0  0^a=a
int main() {
	int arr[] = {1,2,3,4,5,1,2,3,4};
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
	int i = 0;
	/*
	for (i = 0; i < sz;i++) {  //遍历
		//统计arr[i]在数组中出现的次数
		int count = 0;//计数器
		int j = 0;
		for (j = 0; j < sz;j++) {  //遍历
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("%d\n",arr[i]);//5
			break;//跳出循环
		}
	}
	*/
	//优化算法，执行次数减少，提高效率
	int ret = 0;
	for (i = 0; i < sz;i++) {
		ret = 0 ^ ret ^ arr[i];
	}
	printf("%d\n",ret);
	return 0;
}