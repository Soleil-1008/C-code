#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int fun() {
	static int count = 1;//ִ��һ�κ� ���������� 
	return ++count;//ÿ�η��ؽ������ͬ
}
int main() {
	int answer;
	answer = fun() - fun() * fun();//����д ������ ����
	//ֻ��ͨ�������������ȼ���֪������˷����������
	//�����ĵ����Ⱥ�˳���޷�ͨ�������������ȼ�ȷ��
	printf("%d\n", answer);//-10��������ܲ�ͬ �����ͬ��
	return 0;
}