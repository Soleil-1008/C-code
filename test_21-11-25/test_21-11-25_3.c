#define _CRT_SECURE_NO_WARNINGS 1
//if

//������������x,����������y
//if (condition) {
//	return x;
//}
//return y;

//if (condition) {
//	return x;
//}
//else {
//	return y;
//}//Ч������

#include <stdio.h>
int main() {
	//=��ֵ ==�ж����
	int num = 4;
	if (num == 5) {
		printf("hehe\n");//�����
	}

	if (4 == num) {  //Ч������
		printf("haha\n");//haha
	}

	if (num = 5) {  //��ֵ
		printf("hehe\n");//hehe
	}
	return 0;
}