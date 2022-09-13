#define  _CRT_SECURE_NO_WARNINGS 1





#include <stdio.h>

//函数 
//库函数：
// io函数（输入输出）： printf scanf getchar putchar
// 字符串操作函数 :strlen strcmp toupper(小写转大写)
// 内存操作函数 :mcmcpy mcmcp memset
// 时间|日期函数 :time
// 数学函数 :sqrt pow
// 其他库函数
//自定义函数
//int main()
//{
//	/*char arr[20] = { 0 };*/
//	char arr2[] = "hello world\0";
//	memset(arr2, 'x', 5);//替换字符
//	
//	//strcpy(arr, arr2);
//	printf("%s", arr2);
//
//	return 0;
//}
//自定义函数
//函数组成
//ret_type fun_name(para1, *);
//{
//	statement;//语句项
//
//}函数体
//ret_type 返回类型
//fun_name 函数名
//para1  函数参数
//写一个函数，可以找出两个整数中的最大值
//int get_max(int x, int y)
//{
//	
//	int z = 0;
//	if (x > y)
//		z = x;
//	else if (x < y)
//		z = y;
//	else
//		z = x;
//	return z;//返回较大值
//}
//int main()
//{ 
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a,b);
//	printf("max = %d\n", max);
//	return 0;
//}
//void swap2(int x, int y)//该函数在被调用的时候,实参传给形参，其实形参是实参的一份来临时拷贝，改变形参，不能改变实参
//传值调用
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//
//}
//void swap1(int *pa, int *pb)//函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回，括号里的（形参）
//传地址调用
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	printf("a=%d,b=%d\n", a, b);
//	swap1(&a, &b);//交换两个整型变量的值 （实参）
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//函数的参数
//实际的参数，必须要确切的值                
//形式的参数，当函数调用完之后会自动销毁，因此形式函数参数只在函数中有效
#include <math.h>
//int is_prime(int n)
//{
//	//2->n-1
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (0 == n % j)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	//100~200之间的素数
//	for (i = 100; i <= 200; i++)
//	{
//	//判断i是否是素数
//		if (1 == is_prime(i))
//			printf("%d\n", i);
//	}
//	return 0;
//}
//写一个函数判断一年是不是闰年
//一个函数如果不写返回类型，默认返回int类型
//int is_leapyear(int n)
//{
//	if (0 == n%4 && 0 != n%100)
//	{
//		return 0;
//	}
//	else
//		return 1;
//
//
//} 
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		is_leapyear(y);
//		if (is_leapyear(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}
//写一个函数，实现二分查找
int bsearch(int arr[],int key,int sz)
{
	int left = 0;
	int right = sz - 1;
	int mid = (left + right)/2;
	while (left <= right)
	{
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{

			return  mid;
		}
	
	}
	return -1;
	}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int key = 15;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//找到了就返回找到位置的下标
	//找不到就返回-1
	//scanf("%d", &key);
	int ret = bsearch(arr,key,sz);
	if (-1 == ret)
	{
		printf("找不到\n");

	}
	else
	{
		printf("找到了，下标是%d\n", ret);
	}
	return 0;
}