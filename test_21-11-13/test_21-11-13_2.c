//����һ����stdio.h���ļ�
//std-��׼ standard input output

#include <stdio.h>
//char--�ַ�����
//int--����
//short int--������
//long int--������
//%d-��ӡ����
//%c-��ӡ�ַ�
//%f-��ӡ��������-С��
//%p-�Ե�ַ��ʽ��ӡ
//%x-��ӡ16�������� 
int main() {
	char ch = 'A';//�ڴ�
	printf("%c\n", ch);//%c--��ӡ��ʽ������
	int age = 20;
	printf("%d\n", age);//%d--��ӡ����ʮ��������
	short num1 = 5;
	long num2 = 100;
	printf("%d\n", num1);
	printf("%d\n", num2);
	float f = 5.0;//6λС��
	printf("%f\n", f);
	double d = 3.14;//6λС��
	printf("%lf\n", d);
	return 0;
}
