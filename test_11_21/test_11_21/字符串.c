#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	
	'w';//字符
	"abc";//字符串,字符串的结束标志是'\0 '
	char arr1[] = "abcdef";//有一个隐藏的\0
	char arr2[] = { 'a','b','c','d','e','f','\0'};//没有\0，必须自己手动加
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	int len =  strlen("abc");// strlen是一个求字符串长度的一个函数
							 // strlen的头文件是string.h
	printf("%d\n", len);
	return 0;
}