#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数


extern g_val;//2.使用static（修饰全局变量，函数）.c里面的全局变量


extern int Add(int x, int y);//3.使用static（修饰全局变量,函数）.c里面的函数
void test()
{																		//		内存当时的情况
//1.修饰局部变量																	局部变量	——|
	//	static修饰局部变量的时候，局部变量出了作用域，不销毁的。			栈区	……			|
	// 本质上，static修饰局部变量的时候，改变了变量的存储位置的。									|
	// 影响了变量的生命周期，生命周奇奇变成，和程序的生命周期一样。			堆区					|
	//																								|
	//																		静态区	静态变量	<——
	// 
	//int a = 1; - 程序运行结果为十个 2
	static int a = 1;//程序运行结果为2~11
	a++;
	printf("%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 0)
	{
		test();
		i++;
	}


	printf("%d\n", g_val);//2.声明外部变量后，正常打印；  被static修饰过后，不能打印

//3.
	int a = 10;
	int b = 20;
	int z = Add(a, b);//3.声明外部函数后，正常打印；  被static修饰过后，不能打印
	printf("%d\n",z);



	//寄存器变量
	register int num = 3;//建议：3放在寄存器中（可以使这个变量访问速度更快，但只是建议，不能决定）
	return 0;
}