#define _CRT_SECURE_NO_WARNINGS 1
#include<"stdio.h">
//全局变量
//作用域：整个工程
//生命周期：整个工程的生命周期
int a = 0;//这个在全局都能够使用
int main()
{
	{
	//局部变量
	//作用域：变量所在的局部范围
	//生命周期：静茹作用域生命周期开始，出作用域生命周期结束
		//这个a就只能在这个{}里面使用
		int a = 10;
		printf("a=%d\n", a)
	}
		printf("a=%d\n", a);
	return 0;
}