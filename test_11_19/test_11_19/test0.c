#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//��������������ռ�ڴ�Ĵ�С��byte��
	//%zu��sizeof��׼������ͣ�����Ҳ������%d
	//������еĵ�λ
	//8bit=1byte
	//����ĵ�λ����1��һ��ĵ�λ==1024Сһ��ĵ�λ
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(short));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(long long));
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(double));
	return 0;
}