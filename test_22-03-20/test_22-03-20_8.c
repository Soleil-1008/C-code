#define _CRT_SECURE_NO_WARNINGS 1
//ָ������--ָ��+-����

/*
#define N_VALUES 5
float values[N_VALUES];
float *vp;//ָ��+-������ָ��Ĺ�ϵ����
for (vp = &values[0]; vp < &values[N_VALUES];)
{
	*vp++ = 0;
}
*/

#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
	int* p = &arr;//��Ԫ�ص�ַ
	int* pa = &arr[9];
	/*
	for (i = 0; i < sz; i++) 
	{
		printf("%d ", *p);//1 2 3 4 5 6 7 8 9 10
		p = p + 1;//4���ֽ�
		//p++;
	}
	*/

	/*
	for (i = 0; i < 5; i++) 
	{
		printf("%d ", *p);//1 3 5 7 9
		//p = p + 2;//4���ֽ�
		p += 2;
	}
	*/

	for (i = 0; i < 5; i++)
	{
		printf("%d ", *pa);//10 8 6 4 2
		//p = p + 2;//4���ֽ�
		pa -= 2;
	}
	return 0;

}