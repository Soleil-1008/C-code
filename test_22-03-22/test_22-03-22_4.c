#define _CRT_SECURE_NO_WARNINGS 1
//ʹ��ָ���ӡ����
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�룬arr��һ������һά����
#include<stdio.h>
void print(int* p, int sz) 
{
	int i = 0;
	for(i = 0 ; i < sz ; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}