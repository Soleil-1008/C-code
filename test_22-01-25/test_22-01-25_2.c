#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏(电脑生成一个随机数)
#include <stdio.h>
#include <stdlib.h>//RAND_MAX头文件
#include <time.h>
void menu()
{
	printf("**********************************\n");
	printf("*********** 1.play     **********\n");
	printf("*********** 0.exit     **********\n");
	printf("**********************************\n");
}
//RAND_MAX--rand函数能返回随机数的最大值。
//RAND_MAX  0-32767
void game()
{ 
	int random_num = rand()%100+1;
	//生成随机数
	int input = 0; 
	while(1) { 
		printf("请输入猜的数字>:"); 
		scanf("%d", &input); 
		if(input > random_num) { 
			printf("猜大了\n");
		} else if(input < random_num) { 
			printf("猜小了\n"); 
		} else { 
			printf("恭喜你，猜对了\n");
			break;
		} 
	}
}
int main()
{
	int input = 0;
	do 
	{
		menu();
		printf("请选择>:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();//猜数字过程
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}

