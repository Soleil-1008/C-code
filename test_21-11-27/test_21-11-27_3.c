#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//getchar()  putchar()Ӧ��
int main() {
	/*
	int ch = getchar();//��ȡ�ַ�-���ܼ�������һ���ַ�
	putchar(ch);//���
	printf("%c\n",ch);
	*/

	/*
	int ch = 0;
	while ((ch = getchar()) != EOF)
	//Ctrl+z--getchar()��ȡEOF,ֹͣ EOF--end of file�ļ�������־ ֵ-1
	{
		putchar(ch);
	}*/

	//ֻ��ӡ�ַ�'0'-'9',�������ַ�����ӡ������Ctrl+zֹͣ
	/*
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;//��������ѭ������Ĵ��룬������һ��ѭ��������ж�
		putchar(ch);
	}
	*/

	/*
	//error
	int ret = 0;
	char password[20] = { 0 };
	printf("���������룺>");//�������
	scanf("%s",password);//���뺯��,��������123456�������password������ 123456\n scanf��ȡ123456
	printf("��ȷ��(Y/N)��>");
	ret = getchar();//���뺯��,��ȡ\n ASCII = 10
	if ('Y' == ret)
	{
		printf("ȷ�ϳɹ���\n");
	}
	else
	{
		printf("ȷ��ʧ�ܡ�\n");//ȷ��ʧ��
	}
	*/

	//123456
	/*
	int ret = 0;
	char password[20] = { 0 };
	printf("���������룺>");//�������
	scanf("%s",password);//���뺯��,��������123456�������password������ 123456\n scanf��ȡ123456
	//��������ʣ��һ��'\n'
	//��ȡһ��'\n'
	getchar();//��'\n'���ߣ����ô��
	printf("��ȷ��(Y/N)��>");
	ret = getchar();//���뺯��
	if ('Y' == ret)
	{
		printf("ȷ�ϳɹ���\n");
	}
	else
	{
		printf("ȷ��ʧ�ܡ�\n");
	}*/

	/*
	//error
	int ret = 0;
	char password[20] = { 0 };
	printf("���������룺>");//�������
	scanf("%s", password);//���뺯��,��������123456\n�������password������ scanf��ȡ123456
	//������������123 abc\nʱ��scanf��ȡ123
	//��������ʣ��һ��' abc\n'
	getchar();//��' '���ߣ����ô��
	printf("��ȷ��(Y/N)��>");
	ret = getchar();//���뺯�� ��ȡa
	if ('Y' == ret)
	{
		printf("ȷ�ϳɹ���\n");
	}
	else
	{
		printf("ȷ��ʧ�ܡ�\n");//ȷ��ʧ��
	}
	*/

	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("���������룺>");//�������123 abc\n
	scanf("%s", password);
	while ((ch = getchar()) != '\n')//��getchar()��ȡ��'\n'ʱ�˳�ѭ��������һֱ��ȡһֱ�ж�
	{
		;//�����
	}
	printf("��ȷ��(Y/N)��>");
	ret = getchar();//���뺯��
	if ('Y' == ret)
	{
		printf("ȷ�ϳɹ���\n");
	}
	else
	{
		printf("ȷ��ʧ�ܡ�\n");
	}
	return 0;
}