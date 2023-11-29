#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ADD(x,y) ((x)+(y))//这是一个宏
//ADD 宏名  (x,y)红的参数，参数是无类型  ((x)+(y)) 宏体
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	int z = ADD(a, b);// == int z = ((a)+(b))
					  //	宏是替换作用，把x替换成a,把y替换成b。
	return 0;
}
