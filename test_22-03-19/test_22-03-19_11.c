#define _CRT_SECURE_NO_WARNINGS 1
//隐式类型转换-算术转换
// long double 
//double 
//float 
//unsigned long int 
//long int 
//unsigned int 
//int

//以上任意两个类型运算时  要将小类型先转换为大类型后再运算
int main()
{
	float f = 3.14;
	int num = f;//隐式转换，会有精度丢失
}