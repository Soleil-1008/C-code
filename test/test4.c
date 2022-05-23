#define _CRT_SECURE_NO_WARNINGS 1
//输入某年某月某日，判断这一天是这一年的第几天
//闰年，能被400整除或能被4整除不能被100整除
#include<stdio.h>
int main() 
{
	int year, month, day, sum;
	printf("Please enter the data\n");
	scanf("%d,%d,%d", &year, &month, &day);                              
	switch (month) {
		case 1:sum = 0; break;
		case 2:sum = 31; break;
		case 3:sum = 59; break;
		case 4:sum = 90; break;
		case 5:sum = 120; break;
		case 6:sum = 151; break;
		case 7:sum = 181; break;
		case 8:sum = 212; break;
		case 9:sum = 243; break;
		case 10:sum = 273; break;
		case 11:sum = 304; break;
		case 12:sum = 334; break;
		default:printf("Enter error!!"); break;
	}
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
	{
		if (month > 2)
			sum++;//闰年且月份大于2则天数加1天
	}
	sum += day;
	printf("%d\n", sum);
	return 0;
}