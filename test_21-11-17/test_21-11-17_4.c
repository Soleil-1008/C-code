#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//һ���ǿ��������飬�����и�Ԫ��ֻ����һ�����⣬����Ԫ�ؾ��������Σ��ҳ�ֻ����һ�ε���
//a^a=0  0^a=a
int main() {
	int arr[] = {1,2,3,4,5,1,2,3,4};
	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
	int i = 0;
	/*
	for (i = 0; i < sz;i++) {  //����
		//ͳ��arr[i]�������г��ֵĴ���
		int count = 0;//������
		int j = 0;
		for (j = 0; j < sz;j++) {  //����
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("%d\n",arr[i]);//5
			break;//����ѭ��
		}
	}
	*/
	//�Ż��㷨��ִ�д������٣����Ч��
	int ret = 0;
	for (i = 0; i < sz;i++) {
		ret = 0 ^ ret ^ arr[i];
	}
	printf("%d\n",ret);
	return 0;
}