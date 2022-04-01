#define _CRT_SECURE_NO_WARNINGS 1
//二级指针
#include<stdio.h>
int main()
{
	int a = 10;//变量
	int* pa = &a;//指针变量-是变量就有地址  pa是一级指针
	int** ppa = &pa;//ppa就是二级指针
	printf("%d\n", **ppa);//10  ppa->pa地址 *ppa->pa **ppa->a
	**ppa = 20;
	printf("%d\n", **ppa);//20
	printf("%d\n", a);//20

	//*ppa通过对ppa中的地址进行解引用，这样找到的是pa，*ppa其实访问的就是pa
	//**ppa先通过*ppa找到pa,然后对pa进行解引用操作：*pa，那找到的是a
	return 0;
}