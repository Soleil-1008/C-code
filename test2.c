#define _CRT_SECURE_NO_WARNINGS 1
//100���ڵ�����
#include<stdio.h>
#include<math.h>

#define INTEGER_RANGE 100  //���ַ�Χ

int if_prime(int num);
int main()
{
    int sum = 0;
    //2����С��������forѭ����ΧΪ2-100
    for (int i = 2; i <= INTEGER_RANGE; i++)
    {
        if (if_prime(i)) {
            printf("%d ", i);
            sum++;
            if (sum % 5 == 0)
                printf("\n");//5��Ϊ1�д�ӡ
        }
    }
    printf("%d���ڵ���������Ϊ��%d\n", INTEGER_RANGE, sum);
    return 0;
}
//�ж��Ƿ�Ϊ���������򷵻�1���񷵻�0
 
int if_prime(int num)
{
    //�Ƿ����ֵ��ж�
    if (num < 2)
        return 0;//��С������Ϊ2
    int i = 0;
    //sqrt();��ƽ������(һ��ҪдС�ڵ���)
    for (i = 2; i <= sqrt(num); i++)
    {
        //��������д���1�������������������������
        if (num % i == 0)
            return 0;
    }
    return 1;
}