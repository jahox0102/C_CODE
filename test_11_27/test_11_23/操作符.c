#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	//			算数操作符
	//			 +  - *  /  %
	int a = 7 / 2;//3...1
	printf("%d\n", a);//a = 3
	//  / 除号的两端都是整数的时候，执行的是整数除法，两端只要有一个浮点数，执行的就是浮点数除法
	float c  = 7.0 / 2;
	printf("%.2f\n", c);//%.()f:()里面的数字是几，就保留几位浮点数
	int b = 7 % 2;
	//  % 取模操作符的两个操作符只能是整数
	printf("%d\n", b);//b = 1

	//	和二进制有关
	//		移位操作符
	//		>>(右移操作符)  <<(左移操作符)
	//		位操作符
	//		 &  ^  |


	//		赋值操作符
	//		 =	+=	 -=		*=	/=	 &=	^=	|=	>>=			<<=
	int d = 0;//初始化
	a = 20;//赋值
	a = a + 3;//等价于 a += 3;
			  //a=23;



	//		单目操作符（只有一个操作数的操作符）
	//	！	逻辑反操作
	//	-	负值
	//	+	正值
	//	&	取地址

	//	sizeof		操作数的类型长度（以字节为单位）
	int e = 0;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(e));
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));// 40 计算整个数组的大小
	printf("%d\n", sizeof(arr[0]));//计算数组第一个元素的大小
	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//10 - 计算数组元素的个数

	//	~		对一个二进制按位取反
	//	--		前置，后置--
	//	++		前置，后置++

	//（类型）	强制类型转换
	int f = 3.14;
	//3.14字面浮点数，编译器默认理解为double类型
	int f1 = (int)3.14;// 3



	//		关系操作符
	//		>
	//		>=
	//		<
	//		<=
	//		!=		用于测试“不相等”
	//		==		用于测试“相等”	



	//		逻辑操作符
	//		&&		逻辑与 - 并且
	// 必须两个全为真才为真
	//		||		逻辑或 - 或者
	// 一个为真就为真
	int g = 0;
	int h = 10;
	if (g && h)
	{
		printf("hehe\n");
	}
	if (g || h)
	{
		printf("wuwu\n");
	}



	//		条件操作符(三目操作符)
	//		exp1	?	exp2	:	exp3
	//		真		√		×
	//		假		×		√
	int i = 10;
	int j = 20;
	int ij111 = (i > j ? i : j);
	int ij222 = (i < j ? i : j);
	printf("%d\n", ij111);
	printf("%d\n", ij222);



	//		逗号表达式就是用逗号隔开的一串表达式
	//		逗号表达式的特点：从左向右依次计算，整个表达式的结果是最后一个表达式的结果
	//int i = 10;
	//int j = 20;
	//int g = 0;
	//	 g = 8		i = 28    5
	int k = (g = i - 2, i = j + g, g - 3);
	printf("%d\n", k);//  5



	//		下标引用，函数调用和	结构成员
	//		[]			()			.  ->
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 3;
	arr1[n] = 20;//[]就是下标引用操作符 arr和3就是操作数
	int sum = Add(2, 3);//()就是函数调用操作符，Add,2,3都是（）的操作数
	//调用了上面的加法函数
	//int Add(int x, int y)
	//{
	//	return x + y;
	//}
	return 0;
}
