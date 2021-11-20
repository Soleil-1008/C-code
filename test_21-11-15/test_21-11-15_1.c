#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main() {
	/*int a = 19;

	scanf("%d", &a);
	printf("%d\n", a);*/
	char arr[10] = { 0 };
	strcpy(arr, "hello");
	printf("%s\n", arr);
	return 0;
}