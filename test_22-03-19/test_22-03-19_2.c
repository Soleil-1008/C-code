#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ������  ++  --   (����)ǿ��ת��
#include<stdio.h>
int main()
{
	int a = 10;
	//printf("%d\n", ++a);//11 ǰ��++  ��++ ��ʹ��
	printf("%d\n", a++);//10 ����++   ��ʹ��  ��++
	printf("%d\n", a);//11

	int b = (int)3.14;
	printf("%d\n", b);//3
	return 0;
}