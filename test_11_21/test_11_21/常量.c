#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//3.define����ı�ʶ������
#define MAX 100
int main()
{
	printf("��ʶ������=%d\n", MAX);
	//1.���泣��
	30;
	'w';
	"abc";//�ַ���
	//2.const���εĳ�����
	int a = 10;
	a = 20;
	printf("a=%d\n", a);
	const int b = 10;//const���ε�b�������Ǳ��������ǲ���ֱ���޸ģ��г��������ԡ�
	printf("b=%d\n", b);
	//4.ö�ٳ��������ڲ���Ҫ���ã���ʶһ�£�
	return 0;
}