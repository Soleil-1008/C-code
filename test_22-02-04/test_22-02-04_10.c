#define _CRT_SECURE_NO_WARNINGS 1
//嵌套调用
//函数可以嵌套调用，但是不能嵌套定义。
#include <stdio.h>
void new_line(){
	printf("haha\n");
}
void three_line(){ 
	int i = 0; 
	for(i=0; i<3; i++)
	{
		new_line();
	}
}
int main(){
	three_line(); 
	return 0;
}