#define _CRT_SECURE_NO_WARNINGS 1
//��ϰ����һ�����������в��Ҿ����ĳ������n ��дint binsearch(int x, int v[], int n); 
//���ܣ���v[0]<=v[1]<=v[2]<= ��.<=v[n-1]�������в���x
//�Ż����۰���ҷ������ֲ��ҷ�
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int left = 0;//���±�
	int right = sz-1;//���±�
	while (left<=right)//��Ԫ�ز��ܽ��в���
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);//6������ͬʱ�������ӡ�����±꣩
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}