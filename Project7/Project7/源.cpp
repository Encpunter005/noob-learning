#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//һά����
//���� -- һ����ͬ����Ԫ�صļ���
//������ʽ
//type_t arr_name [const_n];
//type_t ��ָ�����Ԫ������
//const_n��һ���������ʽ������ָ������Ĵ�С
//int main()
//{
//	char arr[20]="helloword";
//
//	printf("%s\n", arr);
//	return 0;
//}
//����ĳ�ʼ��
//int main()
//{
//	int a = 10;//��ʼ��
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};//��ȫ��ʼ��
//	int arr2[10] = { 1,2,3,4,5 };//����ȫ��ʼ��
//	int arr3[] = { 1,2,3,4,5 };
//	int arr4[5] = { 1,2,3,4,5 };
//	char ch[] = "helloworld";
//	printf("%s", ch);
//	return 0;
//}
//һά���� []�±����ò�����--������ʲ�����
//int main()
//{
//	int arr[10] = { 1 };
//	arr[4] = 5;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//һά�������ڴ��еĴ洢
int main()
{
	printf("%x\n", 0x12);
	printf("%p\n", 0x12);
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%p\n", &arr[i]);
	}
	return 0;
}