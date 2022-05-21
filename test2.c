#define _CRT_SECURE_NO_WARNINGS 1
//100以内的素数
#include<stdio.h>
#include<math.h>

#define INTEGER_RANGE 100  //数字范围

int if_prime(int num);
int main()
{
    int sum = 0;
    //2是最小的素数，for循环范围为2-100
    for (int i = 2; i <= INTEGER_RANGE; i++)
    {
        if (if_prime(i)) {
            printf("%d ", i);
            sum++;
            if (sum % 5 == 0)
                printf("\n");//5个为1行打印
        }
    }
    printf("%d以内的素数个数为：%d\n", INTEGER_RANGE, sum);
    return 0;
}
//判断是否为素数，是则返回1，否返回0
 
int if_prime(int num)
{
    //非法数字的判断
    if (num < 2)
        return 0;//最小的素数为2
    int i = 0;
    //sqrt();开平方函数(一定要写小于等于)
    for (i = 2; i <= sqrt(num); i++)
    {
        //如果该数有存在1以外的其他正因数，则不是素数
        if (num % i == 0)
            return 0;
    }
    return 1;
}