#define _CRT_SECURE_NO_WARNINGS 1
int g_val = 2022;
//2.	static int g_val = 2022;
//			static ����ȫ�ֱ�����ʱ��
//			���ȫ�ֱ������ⲿ��������
//			�ͱ�����ڲ��������ԡ�
//			����Դ�ļ���.c���Ͳ�����ʹ�����
//			ȫ�ֱ�����


//3.
int Add(int x, int y)
//static int Add(int x, int y)
//			static ���κ�����ʱ��
//			����������ⲿ��������
//			�ͱ�����ڲ��������ԡ�
//			����Դ�ļ���.c���Ͳ�����ʹ�����
//			������
{
	return x + y;
}