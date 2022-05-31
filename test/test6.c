#define _CRT_SECURE_NO_WARNINGS 1
//�����ַ��������ַ������ֵĴ���
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH     256

int get_sum_child_string(char* str, char* child_str);

int main()
{
    char string[MAX_LENGTH];
    char child_string[MAX_LENGTH];
    printf("��ֱ������ַ��������ַ��������ַ��������ո�\n");
    scanf("%s%s", string, child_string);
    printf("���ַ������ִ���Ϊ %d\n", \
        get_sum_child_string(string, child_string));
    return 0;
}

/**
 * @brief  ��str�в���child_str
 * @return ƥ����Ӵ�����
 */
int get_sum_child_string(char* str, char* child_str)
{
    int sum = 0;
    int i = 0;
    int str_len = strlen(str);
    int child_str_len = strlen(child_str);

    /* �ж������Ƿ���� */
    if (str == NULL || child_str == NULL || str_len < child_str_len)
    {
        return 0;
    }

    while (strlen(str) >= child_str_len) /* ѭ��ƥ�� */
    {
        /* ���ַ�ƥ�� */
        for (i = 0; i < child_str_len; i++)
        {
            if (str[i] != child_str[i])
                break;
        }
        /* ƥ�䵽���ַ��� */
        if (i == child_str_len)
        {
            sum++;
            str += child_str_len;
        }
        else str++;
    }
    return sum;
}