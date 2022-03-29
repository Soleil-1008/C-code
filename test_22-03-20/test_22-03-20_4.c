#define _CRT_SECURE_NO_WARNINGS 1
//指针类型意义的价值

int main()
{
	int arr[10] = { 0 };
	int* p = arr;//数组名-首元素地址    前40个字节
	//char* p = arr;//不能实现所有0->1  前10个字节
	int i = 0;
	for (i = 0; i < 10; i++) 
	{
		*(p + i) = 1;//0->1
	}
	return 0;
}