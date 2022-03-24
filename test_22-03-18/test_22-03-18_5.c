#define _CRT_SECURE_NO_WARNINGS 1
//编写代码实现：求一个整数存储在内存中的二进制中1的个数。

#include <stdio.h>
int main()
{ 
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	//统计num的二进制的补码中有几个1
	
	//1.模2除2-不适用于负数
	/*
	while(num) 
	{ 
		if(num%2 == 1) 
			count++;
		num = num/2; 
	} 
	*/

	//2.按位与&
	//32bit
	// num & 1 如果最低位为1说明该数最低位为1  如果最低位为0说明该数最低位为0
	//00000000000000000000000000000011  3
	//00000000000000000000000000000001  1  &按位与
	//00000000000000000000000000000001  1
	/*
	int i = 0;
	//计数
	for(i=0; i<32; i++) 
	{ 
		if (1 == ((num >> i) & 1))
			count++;  
	}
	*/

	//3.优化
	int num2 = -1;
	int i = 0;
	//计数 
	while(num2) 
	{ 
		count++;
		num2 = num2 & (num2 - 1);
	}
	

	printf("二进制中1的个数 = %d\n", count);
	return 0;
}