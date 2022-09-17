#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//一维数组
//数组 -- 一组相同类型元素的集合
//创建方式
//type_t arr_name [const_n];
//type_t 是指数组的元素类型
//const_n是一个常量表达式，用来指定数组的大小
//int main()
//{
//	char arr[20]="helloword";
//
//	printf("%s\n", arr);
//	return 0;
//}
//数组的初始化
//int main()
//{
//	int a = 10;//初始化
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
//	int arr2[10] = { 1,2,3,4,5 };//不完全初始化
//	int arr3[] = { 1,2,3,4,5 };
//	int arr4[5] = { 1,2,3,4,5 };
//	char ch[] = "helloworld";
//	printf("%s", ch);
//	return 0;
//}
//一维数组 []下标引用操作符--数组访问操作符
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
//一维数组在内存中的存储
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