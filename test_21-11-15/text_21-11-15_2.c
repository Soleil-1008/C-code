#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����
//#define����ı�ʶ������
#define MAX 10
//ö�ٳ���
//�Ա��� Ů ����
//��ԭɫ�������
//���ڣ�1,2,3,4,5,6,7
//ö�ٹؼ���--enum
enum Color {
	RED,
	YELLOW,
	BLUE
};
enum Sex
{
	MALE,
	FEMALE,
	SECRET//ö�ٳ���
};
int main() {
	int arr[MAX] = { 0 };
	printf("%d\n",MAX);//��ӡ���Ϊ10
	//enum Sex s = MALE;
	enum Color color = BLUE;
	color = YELLOW;//ͨ��ö�����ʹ������ı������Ը�
	//BLUE = 6;//error�����Ŷ����ö�ٳ������ܸ�
	printf("%d\n",MALE);//0
	printf("%d\n",FEMALE);//1
	printf("%d\n",SECRET);//2
	//���泣��
	3;
	100;
	3.14;
	//const����
	//const���εĳ����������ɸı�
	const int num1 = 1;
	printf("%d\n", num1);
	//num1 = 8;//error
	printf("%d\n", num1);
	int num2 = 4;
	printf("%d\n",num2);
	num2 = 8;
	printf("%d\n",num2);
	const int n = 10;//n�Ǳ������������г����ԣ�nΪ������
	//int arr[n] = { 0 };//error
	//n = 20;//error�����ɸı�
	return 0;
}