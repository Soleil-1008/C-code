#define _CRT_SECURE_NO_WARNINGS 1
//��ŵ������
#include <stdio.h>
#include <string.h>
/*
 �㷨˼·��1�� n-1�������ȷŵ�B��λ��
          2.��A���ϵ�ʣ�µ�һ�����ƶ���C����
          3����n-1���̴�B���ƶ���C����
*/
//��������
void move(char x, char y);
void hannuo(int n, char one, char two, char three)
{
    if (n == 1)move(one, three); //�ݹ��ֹ����
    else
    {
        hannuo(n - 1, one, three, two);//�� n-1�������ȷŵ�B��λ��
        move(one, three);//��A���ϵ�ʣ�µ�һ�����ƶ���C����
        hannuo(n - 1, two, one, three);//��n-1���̴�B���ƶ���C����

    }
}
void move(char x, char y)
{
    printf("%c--->%c", x, y);
}

int main()
{
    int n;
    printf("input your number");
    scanf("%d", &n);
    hannuo(n, 'A', 'B', 'C');
    return 0;
}