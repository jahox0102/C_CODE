#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;//��ʼ��
	//����2������
	scanf("%d %d", &num1, &num2);//scanf��һ�����뺯��
	//���
	int sum = num1 + num2;
	//���
	printf("%d\n",sum);//printf��һ���������
	return 0;
}