#define _CRT_SECURE_NO_WARNINGS 1
//��������
//ʵ�ֺ���init()��ʼ��ȫΪ0
//ʵ��printf()��ӡ�����ÿ��Ԫ��
//ʵ��reverse()�����������Ԫ�ص�����(���鱾��)
#include<stdio.h>
void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		arr[i] = 0;
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Reverse(int arr[], int sz) 
{
	int left = 0;
	int right = sz - 1;

	while (left<right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr, sz);//�������ʼ��Ϊ0
	Print(arr, sz);//��ӡ
	Reverse(arr, sz);
	Print(arr, sz);//��ӡ
	return 0;
}