#define _CRT_SECURE_NO_WARNINGS 1
//计算字符串中子字符串出现的次数
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH     256

int get_sum_child_string(char* str, char* child_str);

int main()
{
    char string[MAX_LENGTH];
    char child_string[MAX_LENGTH];
    printf("请分别输入字符串和子字符串——字符串不含空格\n");
    scanf("%s%s", string, child_string);
    printf("子字符串出现次数为 %d\n", \
        get_sum_child_string(string, child_string));
    return 0;
}

/**
 * @brief  从str中查找child_str
 * @return 匹配的子串个数
 */
int get_sum_child_string(char* str, char* child_str)
{
    int sum = 0;
    int i = 0;
    int str_len = strlen(str);
    int child_str_len = strlen(child_str);

    /* 判断数据是否合理 */
    if (str == NULL || child_str == NULL || str_len < child_str_len)
    {
        return 0;
    }

    while (strlen(str) >= child_str_len) /* 循环匹配 */
    {
        /* 单字符匹配 */
        for (i = 0; i < child_str_len; i++)
        {
            if (str[i] != child_str[i])
                break;
        }
        /* 匹配到子字符串 */
        if (i == child_str_len)
        {
            sum++;
            str += child_str_len;
        }
        else str++;
    }
    return sum;
}