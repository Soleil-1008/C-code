//包含一个叫stdio.h的文件
//std-标准 standard input output

#include <stdio.h>
//char--字符类型
//int--整型
//short int--短整型
//long int--长整型
//%d-打印整型
//%c-打印字符
//%f-打印浮点数字-小数
//%p-以地址形式打印
//%x-打印16进制数字 
int main() {
	char ch = 'A';//内存
	printf("%c\n", ch);//%c--打印格式的数据
	int age = 20;
	printf("%d\n", age);//%d--打印整型十进制数据
	short num1 = 5;
	long num2 = 100;
	printf("%d\n", num1);
	printf("%d\n", num2);
	float f = 5.0;//6位小数
	printf("%f\n", f);
	double d = 3.14;//6位小数
	printf("%lf\n", d);
	return 0;
}
