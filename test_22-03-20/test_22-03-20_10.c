#define _CRT_SECURE_NO_WARNINGS 1
//ָ������-ָ��Ĺ�ϵ����
//��׼�涨:����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
//���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�
#include<stdio.h>
int main()
{
	#define N_VALUES 5
	float values[N_VALUES];
	float* vp;//ָ��+-������ָ��Ĺ�ϵ����
	//1.����
	for (vp = &values[N_VALUES]; vp > &values[0];)
	{
		*--vp = 0;//5��Ԫ��ȫ��Ϊ0
		printf("%d ", *vp);
	}

	//2.����򻯣���������д����-������c�����﷨
	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
	{
		*vp = 0;//5��Ԫ��ȫ��Ϊ0
		printf("%d ", *vp);
	}
	return 0;
}