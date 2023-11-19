#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//各个数据类型所占内存的大小（byte）
	//%zu是sizeof标准输出类型，但是也可以用%d
	//计算机中的单位
	//8bit=1byte
	//后面的单位都是1大一点的单位==1024小一点的单位
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(short));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(long long));
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(double));
	return 0;
}