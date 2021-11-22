#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//数组--一组相同类型元素的集合
int main() {
	/*int a = 1;
	int b = 2;
	int c = 3;
	....*/
	char ch[20];//字符数组
	float arr2[5];//浮点型数组
	int i = 0;//下标
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数数字的数组并赋值
	printf("%d\n", arr1[5]);//下标的形式访问元素，arr1[下标]，下标默认从0开始
	while (i < 10) {
		printf("%d ",arr1[i]);
		i++;
	}
	return 0;
}