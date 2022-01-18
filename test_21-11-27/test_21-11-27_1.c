#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////switch、case、break的应用
int main() {
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;//m=3,n=1 没有break 继续执行
	case 2:
		n++;//n=2,m=3
	case 3:
		switch (n)
		{  //switch允许嵌套使用
		case 1:
			n++;
		case 2:
			m++;//m=4
			n++;//n=3
			break;
		}
	case 4:
		m++;//m=5
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n",m,n);//m = 5, n = 3
	return 0;
}