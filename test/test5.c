#define _CRT_SECURE_NO_WARNINGS 1
//��100��������ż��֮��
#include<stdio.h>
#define INTEGER_RANGE 100
int main() 
{
	int i = 0;
	int sum = 0;
	for (i = 1; i <= INTEGER_RANGE; i++) {
		if (i % 2 == 0)
			sum += i;
	}
	printf("%d���ڵ�����ż��֮��Ϊ %d\n", INTEGER_RANGE, sum);
	return 0;
}