#define _CRT_SECURE_NO_WARNINGS 1
int g_val = 2022;
//2.	static int g_val = 2022;
//			static 修饰全局变量的时候
//			这个全局变量的外部连接属性
//			就变成了内部链接属性。
//			其他源文件（.c）就不能再使用这个
//			全局变量了


//3.
int Add(int x, int y)
//static int Add(int x, int y)
//			static 修饰函数的时候
//			这个函数的外部连接属性
//			就变成了内部链接属性。
//			其他源文件（.c）就不能再使用这个
//			函数了
{
	return x + y;
}