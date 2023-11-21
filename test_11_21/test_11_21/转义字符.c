#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("abcn");
	printf("\n");
	printf("abc\n");// \n是换行的意思
	printf("\n");
	printf("abc0def");
	printf("\n");
	printf("abc\0def");//\0是字符串结束的标志
	printf("\n");
		//%d-打印整形
		//%c-打印字符
		//%s-打印字符串
		//%f-打印float类型的数据
		//%lf-打印double类型的数据
	printf("%c\n",'\'');// \' 让 ' 不再是 '' 中的一个
	printf("%s\n", "\"");// \" 让 " 不再是 " " 中的一个
	printf("\n");

	printf("c:\test\test.c\n");//\t是水平制表符的意思，想打印文件路径必须
	printf("c:\\test\\test.c\n");// \\用于表示一个反斜杠，防止被解释为一个转义序列符
	printf("\a");// \a警告字符，触发电脑的蜂鸣


	printf("%c\n",'\130');//\ddd，ddd表示1-3个八进制的数字
	//输出的就是八进制下的130转为十进制的88所代表的ASCII码值为X
	printf("%c\n", '\x63');//\xdd，dd表示1-2个十六进制的数字
	//输出的就是十六进制下的x63转为十进制的99所代表的ASCII码值为c

	return 0;
}
