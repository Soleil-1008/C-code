#define _CRT_SECURE_NO_WARNINGS 1
//��һ�����������в��Ҿ����ĳ������n ��дint binsearch(int x, int v[], int n); 
//���ܣ���v[0]<=v[1]<=v[2]<= ��.<=v[n-1]�������в���x
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//дһ�����룬��arr���飨����ģ����ҵ�7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", i);//6
			break;//���ҵ��󣬾�����ѭ��
		}
	}
	if (i == sz)
		printf("�Ҳ���\n");
	return 0;
}