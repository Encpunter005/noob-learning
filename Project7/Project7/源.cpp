#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
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
//	char ch1[] = "bit";// b i t \0
//	char ch2[] = { 'b','i','t' };// b i t 没有\0
//	printf("%s\n", ch);
//	printf("%d\n", strlen(ch1));
//	printf("%d\n", strlen(ch2));
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
//1.一维数组在内存中的是连续存放的
//2.随着数组下标的增长，地址是由低到高变化的
//int main()
//{
//	printf("%x\n", 0x12);
//	printf("%p\n", 0x12);
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i,&arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	                                                              
//	return 0;
//}
//二维数组
//int main()
//{
//	//创建
//	//int arr[3][4];//arr行 列
//	//char ch[1][4];
//	//初始化
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int arr2[3][4] = {1,2,3,4,5,6,7};//不完全初始化 --后面补0，字符补\0
//	int arr3[][4] = { {1,2},{3,4},{4,5} };//二维数组行可以省略，列不可以省略
//	return 0;
//}
//二维数组的使用
//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//	}printf("\n");
//	return 0;
//}
//二维数组在内存中的存储
//二位数组在内存中也是连续存放的，一行内部连续，跨行也是连续的
//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//			for (j = 0; j < 4; j++)
//			{
//				printf("&arr[%d][%d]=%p \n",i,j,&arr[i][j]);
//			}
//	}
//	return 0;
// }
//数组作为函数参数
//冒泡排序的思想：
//两两元素进行比较，并且可能的话需要交换
//void bubble_sort(int arr[],int sz)//形参arr本质是指针
//{
//	
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//	//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		
//		}
//	}
//	
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1.0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序为升序
//	bubble_sort(arr,sz);//数组传参的时候，传递的其实是数组首元素的地址
//	return 0;
//}
//数组名是什么？
//数组名是数组首元素的地址
//但是有2个例外
//1.sizeof（数组名）--数组名表示整个数组-计算的是整个数组的大小，单位是字节
//2.&数组名 ---数组名表示整个数组--取出的是整个数组的地址
int main()
{
	
	int arr[10] = { 0 };
	printf("%p\n", &arr);//&arr取出的是数组的地址
	int sz = sizeof(arr);//数组名表示整个数组
	printf("%p\n", &arr[0]);
	printf("%p\n", arr);//数组名是首元素的地址
	return 0;
}
