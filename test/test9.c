#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ͳ��100��99999�ڻ��ĵ����ָ����������ÿ�����5�����֣�

#define INTEGER_MAXIMUM 99999  //���ַ�Χ,���ֵ
#define INTEGER_MINIMUM 100 //��Сֵ
#define LINE_SIZE 10         //ÿ�д�ӡ�ĸ���

int if_palindrome_number(int num);

int main()
{
    int count = 0;
    int i = 0;
    for (i = INTEGER_MINIMUM; i <= INTEGER_MAXIMUM; i++)
    {
        /* ���iΪ������ */
        if (if_palindrome_number(i) == 1)
        {
            count++;
            printf("%d\t", i); /* '\t'Ϊ�Ʊ�� */
            if (count % LINE_SIZE == 0)
                printf("\n");
        }
    }
    printf("\n%d-%d֮��Ļ�������%d��\n", INTEGER_MINIMUM, \
        INTEGER_MAXIMUM, count);//1080
    return 0;
}

 //@brief �ж��Ƿ�Ϊ������
 //@return 1���ǻ�������0�����ǻ�����
 
int if_palindrome_number(int num)
{
    int old_val = num;  //���������
    int new_val = 0;    //�ߵ��������
    while (num)          //��ǰnum��λ������1��ֵ����9��
    {
        //��new_val����10��Ȼ�����num�ĸ�λ����
        //ʹ��λ����ԭ���ĺ��nλ���ǰ��nλ
        new_val = new_val * 10 + num % 10;
        num /= 10; //num����10������λ��ȥ��
    }
    if (new_val == old_val) //�����ת������ֺ�ԭ������ͬ
        return 1;
    else return 0;
}
