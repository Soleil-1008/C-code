#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//д���ı���ʽ�������ͨ��������������ȷ��Ψһ�ļ���·�������������ʽ���Ǵ��������
int main()
{ 
	//(����)
	//��linux ����gcc��������VS2013�����¶�ִ�У������(��ͬ)
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	//��һ��+��ִ�е�ʱ�򣬵�����++�Ƿ�ִ�У�����ǲ�ȷ����
	//���������������ȼ��ͽ�������޷�������һ��+�͵�����ǰ��++���Ⱥ�˳��
	printf("%d\n", ret);//12
	printf("%d\n", i);//4
	return 0;
}