#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define�����ʶ�������ͺ�-������
// #define�����ʶ������
//#define MAX 100
//#define�����-������
//������ʵ��
Max(int x, int y) {
	if (x>y) {
		return x;
	}
	else {
		return y;
	}
}
//��Ķ���
#define MAX(X,Y) (X>Y?X:Y)
int main() 
{
	//int a = MAX;//MAX�������������еı�����Ϊ100
	int a = 10;
	int b = 20;
	//������ʽ
	int max = Max(a,b);
	printf("max = %d\n",max);//20
	//��ķ�ʽ
	max = MAX(a, b);
	//�滻��max = (a>b?a:b);
	printf("max = %d\n",max);//20
	return 0;
}
/*#define ADD(x,y) ((x)+(y))
#include <stdio.h>
int main()
{
	int sum = ADD(2,3);
	printf("sum = %d\n",sum);//5
	sum = 10 * ADD(2, 3);
	printf("sum = %d\n",sum);//10
	return 0;
}
*/