#define _CRT_SECURE_NO_WARNINGS 1
//�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ
#include<stdio.h>
typedef struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print1(Stu tmp)//�β�-ʵ�ε���ʱ����-�ռ��˷ѡ�����ʱ�俪֧
{
	printf("name: %s\n", tmp.name);
	printf("age:  %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex:  %s\n", tmp.sex);
}
//ֻ�贴��4/8���ֽڵĽṹ�����
void Print2(Stu* ps)//���û�������� struct Stu*
{
	printf("name: %s\n",ps->name);
	printf("age:  %d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex:  %s\n", ps->sex);
}
int main()
{
	Stu s = { "lisi",30,"15596668862","��" };
	//��ӡ�ṹ������
	Print1(s);
	Print2(&s);//��ַ4/8���ֽ�  ����
	return 0;
}