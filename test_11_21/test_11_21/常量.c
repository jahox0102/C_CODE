#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//3.define定义的标识符常量
#define MAX 100
int main()
{
	printf("标识符常量=%d\n", MAX);
	//1.字面常量
	30;
	'w';
	"abc";//字符串
	//2.const修饰的常变量
	int a = 10;
	a = 20;
	printf("a=%d\n", a);
	const int b = 10;//const修饰的b，本质是变量，但是不能直接修改，有常量的属性。
	printf("b=%d\n", b);
	//4.枚举常量（现在不需要会用，认识一下）
	return 0;
}