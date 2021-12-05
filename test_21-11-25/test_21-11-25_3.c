#define _CRT_SECURE_NO_WARNINGS 1
//if

//条件成立返回x,不成立返回y
//if (condition) {
//	return x;
//}
//return y;

//if (condition) {
//	return x;
//}
//else {
//	return y;
//}//效果更好

#include <stdio.h>
int main() {
	//=赋值 ==判断相等
	int num = 4;
	if (num == 5) {
		printf("hehe\n");//无输出
	}

	if (4 == num) {  //效果更好
		printf("haha\n");//haha
	}

	if (num = 5) {  //赋值
		printf("hehe\n");//hehe
	}
	return 0;
}