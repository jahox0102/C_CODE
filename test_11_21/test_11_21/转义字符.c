#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("abcn");
	printf("\n");
	printf("abc\n");// \n�ǻ��е���˼
	printf("\n");
	printf("abc0def");
	printf("\n");
	printf("abc\0def");//\0���ַ��������ı�־
	printf("\n");
		//%d-��ӡ����
		//%c-��ӡ�ַ�
		//%s-��ӡ�ַ���
		//%f-��ӡfloat���͵�����
		//%lf-��ӡdouble���͵�����
	printf("%c\n",'\'');// \' �� ' ������ '' �е�һ��
	printf("%s\n", "\"");// \" �� " ������ " " �е�һ��
	printf("\n");

	printf("c:\test\test.c\n");//\t��ˮƽ�Ʊ������˼�����ӡ�ļ�·������
	printf("c:\\test\\test.c\n");// \\���ڱ�ʾһ����б�ܣ���ֹ������Ϊһ��ת�����з�
	printf("\a");// \a�����ַ����������Եķ���


	printf("%c\n",'\130');//\ddd��ddd��ʾ1-3���˽��Ƶ�����
	//����ľ��ǰ˽����µ�130תΪʮ���Ƶ�88�������ASCII��ֵΪX
	printf("%c\n", '\x63');//\xdd��dd��ʾ1-2��ʮ�����Ƶ�����
	//����ľ���ʮ�������µ�x63תΪʮ���Ƶ�99�������ASCII��ֵΪc

	return 0;
}
