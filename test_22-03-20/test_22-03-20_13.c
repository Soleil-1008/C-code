#define _CRT_SECURE_NO_WARNINGS 1
//����ָ��
#include<stdio.h>
int main()
{
	int a = 10;//����
	int* pa = &a;//ָ�����-�Ǳ������е�ַ  pa��һ��ָ��
	int** ppa = &pa;//ppa���Ƕ���ָ��
	printf("%d\n", **ppa);//10  ppa->pa��ַ *ppa->pa **ppa->a
	**ppa = 20;
	printf("%d\n", **ppa);//20
	printf("%d\n", a);//20

	//*ppaͨ����ppa�еĵ�ַ���н����ã������ҵ�����pa��*ppa��ʵ���ʵľ���pa
	//**ppa��ͨ��*ppa�ҵ�pa,Ȼ���pa���н����ò�����*pa�����ҵ�����a
	return 0;
}