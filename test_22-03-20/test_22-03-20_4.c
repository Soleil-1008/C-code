#define _CRT_SECURE_NO_WARNINGS 1
//ָ����������ļ�ֵ

int main()
{
	int arr[10] = { 0 };
	int* p = arr;//������-��Ԫ�ص�ַ    ǰ40���ֽ�
	//char* p = arr;//����ʵ������0->1  ǰ10���ֽ�
	int i = 0;
	for (i = 0; i < 10; i++) 
	{
		*(p + i) = 1;//0->1
	}
	return 0;
}