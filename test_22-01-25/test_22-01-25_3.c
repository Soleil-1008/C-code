#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏(电脑生成一个随机数)
//时间戳-当前计算机的时间减去计算机的起始时间(1970.1.1.0:0:0)=(xxx)秒
#include <stdio.h>
#include <stdlib.h>//RAND_MAX头文件
#include <time.h>//time()
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
	//1.生成一个随机数
	int ret = 0;
	//拿时间戳来设置随机数的生成起点
	//time_t-本质长整型 time(time_t*timer)
	//srand((unsigned int)time(NULL));//空指针，不产生效果
	//ret = rand();//生成随机数
	ret = rand()%100+1;//生成1-100随机数，不放在循环里面
	//2.猜数字
	int input = 0;//接收猜的数字
	while (1) {
		printf("请输入猜的数字>:");
		scanf("%d", &input);
		if (input > ret) {
			printf("猜大了\n");
		}
		else if (input < ret) {
			printf("猜小了\n");
		}
		else {
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//调用一次就行，不要频繁使用
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
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
