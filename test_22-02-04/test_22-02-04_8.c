#define _CRT_SECURE_NO_WARNINGS 1
//��ϰ�� дһ��������ʵ��һ��������������Ķ��ֲ���
#include<stdio.h>
//�β�����ʵ����������ͬ

//����������arr��һ��ָ��
int binary_search(int arr[],int k,int sz)
{
	//�㷨�ľ���ʵ��
	//���鴫��ʱ,��������Ԫ�صĵ�ַ,�����ô˷�����Ԫ�ظ���
	//int sz = sizeof(arr) / sizeof(arr[0]);//�������
	//    1    ָ���С4/8       4
	int left = 0;
	int right = sz - 1;
	while (left <= right) // <=  ��Ԫ�ؿ��Ա�����
	{
		int mid = (left + right) / 2;//�м�Ԫ���±�
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main() 
{
	//���ֲ���
	//��һ�����������в��Ҿ����ĳ����
	//����ҵ������±꣬�Ҳ�������-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//���ݹ�ȥ������Ԫ�صĵ�ַ
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);//6
	}
	return 0;
}