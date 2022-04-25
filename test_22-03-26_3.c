#define _CRT_SECURE_NO_WARNINGS 1
//结构体传参的时候，要传结构体的地址
#include<stdio.h>
typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print1(Stu tmp)//形参-实参的临时拷贝-空间浪费、拷贝时间开支
{
	printf("name: %s\n", tmp.name);
	printf("age:  %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex:  %s\n", tmp.sex);
}
//只需创建4/8个字节的结构体变量
void Print2(Stu* ps)//如果没有重命名 struct Stu*
{
	printf("name: %s\n",ps->name);
	printf("age:  %d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex:  %s\n", ps->sex);
}
int main()
{
	Stu s = { "lisi",30,"15596668862","男" };
	//打印结构体数据
	Print1(s);
	Print2(&s);//传址4/8个字节  更好
	return 0;
}