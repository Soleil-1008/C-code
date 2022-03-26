#define _CRT_SECURE_NO_WARNINGS 1
//操作符-下标引用、函数调用和结构成员

#include<stdio.h>
//创建学生结构体类型struct Stu
struct Stu {
	//成员变量
	char name[20];
	int age;
	char sex[5];
	double score;
};
void set_age1(struct Stu stu) 
{ 
	stu.age = 18; 
}
void set_age2(struct Stu* pStu) 
{
	pStu->age = 18;//结构成员访问
}

int get_max(int x, int y) //()定义函数的语法规则,不是函数调用
{
	return x > y ? x : y;
}
int main()
{
	//1.[] 下标引用操作符 
	//操作数：一个数组名 + 一个索引值
	int arr[10] = { 0 };//创建数组 
	arr[9] = 10;//实用下标引用操作符   [ ]的两个操作数是arr和9。

	//2. () 函数调用操作符 
	//接受一个或者多个操作数:第一个操作数是函数名,剩余的操作数就是传递给函数的参数
	int a = 10;
	int b = 20;
	int max = get_max(a, b);//实用（）作为函数调用操作符。 
	printf("max = %d\n",max);//20

	//3. 访问一个结构的成员
	//  .  结构体.成员名
	// ->  结构体指针->成员名

	//使用struct Stu类型创建一个学生对象stu并初始化
	struct Stu stu1 = { "张小花" , 20 , "0" , 92 };
	printf("%s\n", stu1.name);
	printf("%d\n", stu1.age);
	printf("%s\n", stu1.sex);
	printf("%lf\n", stu1.score);
	struct Stu* pStu = &stu1;//结构成员访问
	printf("%s\n", (*pStu).name);
	printf("%d\n", (*pStu).age);
	printf("%s\n", pStu->name);//简化
	printf("%d\n", pStu->age);
	stu1.age = 20;//结构成员访问 
	set_age1(stu1);
	pStu->age = 20;//结构成员访问 
	set_age2(pStu);
	return 0;
}