#define _CRT_SECURE_NO_WARNINGS 1
// ��ι��Ұָ�� 
//1. ָ���ʼ��  int a = 10;int* p = &a;*p = 20;
//2. С��ָ��Խ�� 
//3. ָ��ָ��ռ��ͷż�ʹָ����NULL����ʹ��ʱ�ÿգ�
//4. ���ⷵ�ؾֲ������ĵ�ַ
//5. ָ��ʹ��֮ǰ�����Ч��

#include <stdio.h>
int main()
{
	int *p = NULL;//((void *)0) Ϊ��ʱ���ܷ���
	int a = 10;
	p = &a;
	if(p != NULL)
	{
		*p = 20;
	}
	return 0;
}