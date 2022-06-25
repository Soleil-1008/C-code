#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//统计100到99999内回文的数字个数并输出（每行输出5个数字）

#define INTEGER_MAXIMUM 99999  //数字范围,最大值
#define INTEGER_MINIMUM 100 //最小值
#define LINE_SIZE 10         //每行打印的个数

int if_palindrome_number(int num);

int main()
{
    int count = 0;
    int i = 0;
    for (i = INTEGER_MINIMUM; i <= INTEGER_MAXIMUM; i++)
    {
        /* 如果i为回文数 */
        if (if_palindrome_number(i) == 1)
        {
            count++;
            printf("%d\t", i); /* '\t'为制表符 */
            if (count % LINE_SIZE == 0)
                printf("\n");
        }
    }
    printf("\n%d-%d之间的回文数有%d个\n", INTEGER_MINIMUM, \
        INTEGER_MAXIMUM, count);//1080
    return 0;
}

 //@brief 判断是否为回文数
 //@return 1：是回文数；0：不是回文数
 
int if_palindrome_number(int num)
{
    int old_val = num;  //传入的数字
    int new_val = 0;    //颠倒后的数字
    while (num)          //当前num的位数大于1（值大于9）
    {
        //将new_val乘以10，然后加上num的个位数，
        //使个位数从原来的后第n位变成前第n位
        new_val = new_val * 10 + num % 10;
        num /= 10; //num除以10，将个位数去掉
    }
    if (new_val == old_val) //如果反转后的数字和原数字相同
        return 1;
    else return 0;
}
