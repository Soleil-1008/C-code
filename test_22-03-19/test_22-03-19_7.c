#define _CRT_SECURE_NO_WARNINGS 1
//������-�±����á��������úͽṹ��Ա

#include<stdio.h>
//����ѧ���ṹ������struct Stu
struct Stu {
	//��Ա����
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
	pStu->age = 18;//�ṹ��Ա����
}

int get_max(int x, int y) //()���庯�����﷨����,���Ǻ�������
{
	return x > y ? x : y;
}
int main()
{
	//1.[] �±����ò����� 
	//��������һ�������� + һ������ֵ
	int arr[10] = { 0 };//�������� 
	arr[9] = 10;//ʵ���±����ò�����   [ ]��������������arr��9��

	//2. () �������ò����� 
	//����һ�����߶��������:��һ���������Ǻ�����,ʣ��Ĳ��������Ǵ��ݸ������Ĳ���
	int a = 10;
	int b = 20;
	int max = get_max(a, b);//ʵ�ã�����Ϊ�������ò������� 
	printf("max = %d\n",max);//20

	//3. ����һ���ṹ�ĳ�Ա
	//  .  �ṹ��.��Ա��
	// ->  �ṹ��ָ��->��Ա��

	//ʹ��struct Stu���ʹ���һ��ѧ������stu����ʼ��
	struct Stu stu1 = { "��С��" , 20 , "0" , 92 };
	printf("%s\n", stu1.name);
	printf("%d\n", stu1.age);
	printf("%s\n", stu1.sex);
	printf("%lf\n", stu1.score);
	struct Stu* pStu = &stu1;//�ṹ��Ա����
	printf("%s\n", (*pStu).name);
	printf("%d\n", (*pStu).age);
	printf("%s\n", pStu->name);//��
	printf("%d\n", pStu->age);
	stu1.age = 20;//�ṹ��Ա���� 
	set_age1(stu1);
	pStu->age = 20;//�ṹ��Ա���� 
	set_age2(pStu);
	return 0;
}