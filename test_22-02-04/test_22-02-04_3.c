#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//¿âº¯Êý
int main()
{
	//memset-memory set-ÄÚ´æÉèÖÃ
	//void * memset ( void * ptr, int value, size_t num );
	char arr[] = "hello word!";
	char str[] = "almost every programmer should know memset!";
	memset(str, '-', 6);
	memset(arr, '*', 5);
	puts(str);//------ every programmer should know memset!
	printf("%s\n",arr);//***** word!
	return 0;
}