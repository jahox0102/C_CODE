#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;//初始化
	//输入2个整数
	scanf("%d %d", &num1, &num2);//scanf是一个输入函数
	//求和
	int sum = num1 + num2;
	//输出
	printf("%d\n",sum);//printf是一个输出函数
	return 0;
}