#define _CRT_SECURE_NO_WARNINGS 1
//�ṹ��
//����һ��ѧ��:һЩ����
//���֡����䡢�绰���Ա�

//struct-�ṹ��ؼ���  Stu-�ṹ���ǩ  struct Stu-�ṹ������
//����һ���ṹ������-��ʱ��ռ�ÿռ�
/*
struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1, s2, s3;//�ṹ������ һ�����  ;���ܶ�
//�������͵�ͬʱ������� s1, s2, s3������ȫ�ֵĽṹ�����
//������ʹ��ȫ�ֱ���
*/

typedef struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;//Stu������ �������� ��

int main()
{
	//�����ṹ�����-����ռ�
	struct Stu s1 = { "zhang",20,"18249287076","Ů" };//�����ֲ��ṹ���������ʼ��
	Stu s2={"li",30,"15596668862","��"};
	return 0;
}