#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{				//������Դ��һ����ͬ������
					//������±��0��ʼ
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
				  //0,1,2,3,4,5,6,7,8,9
	printf("%d\n", arr[8]);//��ӡ���������±�Ϊ8�����ݣ��õ����� 9
	int i = 0;
	while (i < 10)//���δ�ӡ�������������
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}