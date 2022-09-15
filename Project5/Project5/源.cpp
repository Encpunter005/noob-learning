#define  _CRT_SECURE_NO_WARNINGS 1




#include <string.h>
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
//int countsearch(int ar[],int k,int s)
//{
//	int left = 0;
//	int right = s - 1;
//	int mid = (left + right)/2;
//	while (left <= right)
//	{
//		if (ar[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (ar[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//
//			return  mid;
//		}
//	
//	}
//	return -1;
//	}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int key = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了就返回找到位置的下标
//	//找不到就返回-1
//	scanf("%d", &key);
//	int ret = countsearch(arr,key,sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}
//写一个函数，每调用一次num就会增加1
//传址
//void test(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	test(&num);
//	printf("%d\n", num);
//
//	test(&num);
//	printf("%d\n", num);
//
//	test(&num);
//	printf("%d\n", num);
//
//
//	return 0;
//}



//函数的嵌套调用,不能嵌套定义，函数里面不能定义另一个函数,但可以调用
//void test3()
//{
//	printf("hehe\n");
//}
//
//
//int test2()
//{
//
//	test3();
//	return 0;
//}
//void test1()
//{
//
//	test2();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//函数的链式访问,把一个函数的返回值作为另一个函数的参数
//int main()
//{
//	char arr[20] = { 0 };
//	char arr2[] = "helloworld";
//	int length = strlen("abc");//strlen函数
//	printf("%d\n", length);
//	printf("%d\n", strlen("abc"));
//	strcpy(arr, arr2);
//	printf("%s\n", arr);
//	printf("%s\n", strcpy(arr, arr2));
//	printf("%d", printf("%d", printf("%d",43)));//printf函数返回的是打印在屏幕上字符的个数---4321
//	return 0;
//}
//函数的声明和定义

//int main()
//{
//	int a = 20;
//	int b = 10;
//	//函数声明一下,至于存不存在不用管
//	int Add(int x, int y);
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//int Add(int x, int y)
//{
//
//	return x + y;
//}
#include "add.h"//函数的声明一般放在头文件
#include "sub.h"

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	int d = Sub(a, b);
//	printf("%d \n", c);
//	printf("%d \n", d);
//	return 0;
//}
//函数递归---把大事化小
// 必要条件
// 1.存在限制条件，当满足这个限制条件的时候，递归便不在继续
// 2.每次递归调用之后，越来越接近这个限制条件
//写递归代码的时候：
// 1.不能死递归，都有跳出条件，每次递归逼近跳出条件
// 2.递归层次不能太深
//int main()
//{
//	printf("helloworld\n");
//	main();//栈溢出：动态内存满了
//	return 0;
//}
//接受一个整型值（无符号），按照顺序打印它的每一位，例如：输入：1234，输出1 2 3 4 
//1234%10=4 
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4

//void print(unsigned int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//
//	}
//	printf("%d ", num % 10);
//
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);//打印参数
//	return 0;
//}
//内存
//栈区：局部变量 函数形参（都是临时变量），每一个函数调用，都要在栈区上分配一块空间 example main（栈帧空间）
//栈溢出：每次递归，函数都会占用一定的内存，多次递归，栈区被消耗完毕，而递归还在进行，此时就会栈溢出
//
//
//堆区：动态内存分配的 malloc/free/calloc/realloc
//
//
//
//静态区：全局变量 静态变量
//编写函数不允许创建临时变量，求字符串长度
//int my_strlen(char *str)//（传统）
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "helloworld";
//	//[h][e][l][l][o][w][o][r][l][d][\0] strlen不计算\0
//	printf("%d\n", my_strlen(arr));//(模拟strlen函数)数组在传参时是使用首元素的地址
//	return 0.;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return  1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "helloworld";
//	//[h][e][l][l][o][w][o][r][l][d][\0] strlen不计算\0
//	printf("%d\n", my_strlen(arr));//(模拟strlen函数)数组在传参时是使用首元素的地址
//	return 0.;
//}
//求n的阶乘
//int test(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//	return n*test(n-1)
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = test(n);
//	printf("%d", ret);
//	return 0;
//}
//求第n个斐波那契数列
//int  count = 0;
//int Fib(int n)
//{
//	//if (n == 3)//统计第三个斐波那契数
//	//{
//	//	count++;
//	//}
//	//if (n <= 2)//效率低
//	//{
//	//	return 1;
//	//}
//	//else
//	//	return Fib(n - 1) + Fib(n - 2);
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}
int test(int n)
{
	if (n <= 2 )
	{
	
		return 1;
	}
	else
	{
		return test(n - 1);
	}

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = test(n);
	printf("%d\n", ret);
	return 0;
}