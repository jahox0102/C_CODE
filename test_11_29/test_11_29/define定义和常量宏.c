#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ADD(x,y) ((x)+(y))//����һ����
//ADD ����  (x,y)��Ĳ�����������������  ((x)+(y)) ����
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	int z = ADD(a, b);// == int z = ((a)+(b))
					  //	�����滻���ã���x�滻��a,��y�滻��b��
	return 0;
}
