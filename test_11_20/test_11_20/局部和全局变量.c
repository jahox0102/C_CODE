#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int b = 0;//全局变量
int main()
{
	//变量分为：
	//局部变量-{}内部定义的变量
	//全局变量-{}外部定义的变量
// 局部变量
			// 给变量起名一定要有意义
	short age = 20;//年龄
	int high = 180;//身高
	float weight = 88.5;//体重
	//全局变量和局部变量名字相同的情况下，局部优先
	//但是建议不要将全局和局部变量的名字写成一样的
	return 0;
}