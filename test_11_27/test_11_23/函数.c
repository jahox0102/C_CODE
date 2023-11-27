#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
				//add是函数名，int x, int y是函数参数
add(int x, int y)
{				//{}里面是函数体
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int n1 = 0;
	int n2 = 0;
	scanf("%d %d", &n1, &n2);
	int sum = add(n1, n2);
	printf("%d\n",sum);
	return 0;
}