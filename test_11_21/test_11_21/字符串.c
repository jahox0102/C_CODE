#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	
	'w';//�ַ�
	"abc";//�ַ���,�ַ����Ľ�����־��'\0 '
	char arr1[] = "abcdef";//��һ�����ص�\0
	char arr2[] = { 'a','b','c','d','e','f','\0'};//û��\0�������Լ��ֶ���
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	int len =  strlen("abc");// strlen��һ�����ַ������ȵ�һ������
							 // strlen��ͷ�ļ���string.h
	printf("%d\n", len);
	return 0;
}