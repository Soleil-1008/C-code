#define _CRT_SECURE_NO_WARNINGS 1
//结构体
//描述一个学生:一些数据
//名字、年龄、电话、性别

//struct-结构体关键字  Stu-结构体标签  struct Stu-结构体类型
//定义一个结构体类型-此时不占用空间
/*
struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1, s2, s3;//结构体声明 一条语句  ;不能丢
//声明类型的同时定义变量 s1, s2, s3是三个全局的结构体变量
//尽量少使用全局变量
*/

typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;//Stu是类型 重新起名 简化

int main()
{
	//创建结构体变量-申请空间
	struct Stu s1 = { "zhang",20,"18249287076","女" };//声明局部结构体变量并初始化
	Stu s2={"li",30,"15596668862","男"};
	return 0;
}