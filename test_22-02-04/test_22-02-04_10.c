#define _CRT_SECURE_NO_WARNINGS 1
//Ƕ�׵���
//��������Ƕ�׵��ã����ǲ���Ƕ�׶��塣
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