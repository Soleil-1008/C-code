#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//转义字符--转变原来的意思
//??+...--三字母词（老版本VC6.0） 例如 ??)--]
int main() {
	printf("abc");
	printf("abc\n");
	//\n--换行
	//printf("c:\test\32\test.c");//error 转义字符
	printf("c:\\test\\32\\test.c\n");
	//\t--水平制表符Tab
	//\\--表示一个反斜杠，防止被解释为一个转义序列符
	//printf("%c\n", ''');//error 缺少右单引号
	printf("%c\n",'\'');
	printf("%s\n", "abc");
	//printf("%s\n", """);//error 缺少右双引号
	printf("%s\n", "\"");
	printf("%d\n",strlen("c:\test\32\test.c"));//输出值为13
	//\ddd--ddd表示1-3个八进制数字 如\130 X
	//8进制--0-7  \328--两个字符\32  8
	//\32--32是2位8进制数字，\32  \t算一个字符
	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
	//32-->10进制26-->作为ASCII码值代表的字符
	printf("%c\n", '\32');
	printf("%c\n",'\132');//132 10进制 90 输出Z
	printf("%c\n",'\x61');//61 10进制 97 a
	//\xdd--dd表示2个十六进制数字 如\x30 0
	return 0;
}
//C++风格注释
/*C语言风格注释（缺陷：不能嵌套注释）*/
//ctrl+k+c注释 ctrl+k+u取消注释