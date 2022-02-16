#define _CRT_SECURE_NO_WARNINGS 1
//链式访问:把一个函数的返回值作为另外一个函数的参数
#include <stdio.h>
#include <string.h>
int main(){
	/*
	* 1.
	* int len=strlen("abc");
	* printf("%d\n",len);//3
	* 2.
	* printf("%d\n",strlen("abc"));//3
	*/

	char arr[20] = "hello";
	int ret = strlen(strcat(arr,"bit"));
	printf("%d\n", ret); //8
	return 0;
}
