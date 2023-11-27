#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{				//数组可以存放一组相同的数据
					//数组的下标从0开始
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
				  //0,1,2,3,4,5,6,7,8,9
	printf("%d\n", arr[8]);//打印数组里面下标为8的数据，得到的是 9
	int i = 0;
	while (i < 10)//依次打印数组里面的数据
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}