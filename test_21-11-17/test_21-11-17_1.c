#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����--һ����ͬ����Ԫ�صļ���
int main() {
	/*int a = 1;
	int b = 2;
	int c = 3;
	....*/
	char ch[20];//�ַ�����
	float arr2[5];//����������
	int i = 0;//�±�
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ����鲢��ֵ
	printf("%d\n", arr1[5]);//�±����ʽ����Ԫ�أ�arr1[�±�]���±�Ĭ�ϴ�0��ʼ
	while (i < 10) {
		printf("%d ",arr1[i]);
		i++;
	}
	return 0;
}