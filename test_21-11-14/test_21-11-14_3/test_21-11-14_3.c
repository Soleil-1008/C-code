#include <stdio.h>
//�ֲ��������������Ǳ������ڵľֲ���Χ
//ȫ�ֱ���������������������
// ���������������Ǳ����Ĵ���������������֮���һ��ʱ���
//�ֲ����������������ǣ������������������ڿ�ʼ�����������������ڽ���
//ȫ�ֱ��������������ǣ������������������
int global = 2021;
void test() 
{
	printf("test()--%d\n",global);
}
int main() {
	test();//���ú���test()
	printf("%d\n",global);
	//δ�����ı�ʶ��
	//����extern�ⲿ���ŵ�
	extern int a;
	printf("a = %d\n",a);
	//δ�����ı�ʶ��
	return 0;
}
/*
int main() 
{
	int num1 = 25;//num1�������ⲿ�ǲ�������
	{
		int num2 = 0;//num2���������ڲ�������
		printf("%d\n", num2);//ok
		printf("%d\n", num1);
	}
	printf("%d\n", num2);//error
	return 0;
}
*/
