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
//int main()
//{
//	
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);//&arr取出的是数组的地址
//	int sz = sizeof(arr);//数组名表示整个数组
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);//数组名是首元素的地址
//	return 0;
//}
//int swap(int* a, int* b)
//{
//	int t = 0;
//	t = *a;
//	*a = *b;
//	*b = t;
//	return *a, * b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("%d,%d\n", a, b);
//	return 0;
//}
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;//下标
//	int tmp = arr[left];
//	while (left <right)
//	{
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		tmp = arr[left];
//		right--;
//	}
//
//}
//void init(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	for (int j =0;j<sz;j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//
//}
//int main()
//{
//	int arr[] = { 0 ,1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr,sz);
//	print(arr, sz);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int arr1[] = { 4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr1[i];
//		arr1[i] = tmp;
//		
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//指针
//int main()
//{
//	int a = 0;
//	int* p = &a;//指针变量
//	printf("%d", a);
//	return 0;
//}
//指针类型的意义
//int main()
//{
//	int a = 0x1114534231;//一个十六进制位表示4个二进制位
//	//解引用
//	char* pc = &a;
//	*pc = 0;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	printf("%p\n", *pa);
//	printf("%p\n", *pa+1);
//	printf("%p\n", *pa+2);
//	printf("%p\n", *pa+3);
//	return 0;
//}
//1.指针类型决定了：指针解引用的权限有多大
//2.指针类型决定了：指针走一步，能走多远（步长）
//int main()
//{
//	int arrp[10] = { 0 };
//	int* pa = arrp;
//	for (int i = 0; i < 10; i++)
//	{
//		*(pa + i)=1;
//	}
//	return 0;
//}
//野指针
//int main()
//{
//	int* p;//局部指针变量，局部变量不初始化的话，默认是随机值
//	*p = 20;// 非法访问内存了
//	return 0;
//}
// 指针越界
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i <= 10; i++)
//	{
//		*p = i;//i=10时，越界了--非法访问内存
//		p++;
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}//a局部变量被销毁
//int main()
//{
//	int *p=test();
//	*p = 20;
//	return 0;
//}
//规避野指针、
// 1.指针初始化
// 2.小心指针越界
// 3.指针指向空间释放及时置NULL
// 4.指针使用之前检查有效性
//int main()
//{
//	int* p = NULL;//当前不知道p应该初始化什么地址的时候，直接初始化为NULL
//	//明确知道初始化的值
//	int a = 10;
//	int* pa = &a;
//	//c语言本身是不会检查数组的越界行为
//	int* ptr = NULL;
//	if (*ptr != NULL)
//	{
//		*ptr = 10;
//	}
//	return 0;
//}
//指针+-整数
#define VALUE 5
//int main()
//{
//	float values[VALUE];
//	float* vp;
//	for (vp = &values[0]; vp < &values[VALUE];)
//	{
//		*vp++ = 0;//指针+整数---指针的关系运算！
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (*p <= *pend)
//	{
//		printf("%d\n",*p);
//		*p++;
//	}
//	return 0;
//}
// 指针-指针
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//	//指针-指针之间得到两个指针之间的元素个数
//}
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char ch[] = { "abc" };
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}
//指针的关系运算
//int main()
//{
//	float values[VALUE];
//	float* vp;
//	for (vp = &values[VALUE]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}
//指针与数组
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%p <===> %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//	//[] 是一个操作符， 2和arr是两个操作数 
//	//arr[2] == *(p + 2);
//	return 0;
//}
//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//	int* *ppa = &pa;//pa也是个变量，&pa取出pa在内存中的起始地址,二级指针变量
//	int*** pppa = &ppa;//三级指针
//	return 0;
//}
//指针数组---本质上是个数组
//int main()
//{
//	int arr[10];//整型数组--存放整形的数组就是整型数组
//	char ch[5];//字符数组--存放的是字符
//	//指针数组--存放指针的数组
//	int* parr[5];//整形指针的数组
//	char* pch[5];
//	return 0;
//}
//操作符
//int main()
//{
//	int a = 1234;
//	printf("%d", printf("%d", printf("%d", printf("%d", a))));//printf返回值是字符串的个数
//	return 0;
//}
//结构体初阶
//struct b
//{
//	char c;
//	double d;
//	short s;
//};
//struct Stu
//{
//	//成员变量
//	struct b sb;
//	int height;
//	char name[20];//名字
//	int age;
//} s1,s2;//这两个也是结构体变量（全局）
//int main()
//{
//	struct Stu s = { {'w',1.00,20},175,"zhangsan",19 };//对象
//	return 0;
//}
//结构体成员的访问
//. ->
//struct b
//{
//	char c;
//	double d;
//	short s;
//};
//struct Stu
//{
//	//成员变量
//	struct b sb;
//	int height;
//	char name[20];//名字
//	int age;
//} s1,s2;//这两个也是结构体变量（全局）
//int main()
//{
//	struct Stu s = { {'w',1.00,20},175,"zhangsan",19 };//对象
//	printf("%c\n", s.sb.c);
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	return 0;
//}
//结构体传参
//struct b
//{
//	char c;
//	double d;
//	short s;
//};
//struct Stu
//{
//	//成员变量
//	struct b sb;
//	int height;
//	char name[20];//名字
//	int age;
//} s1,s2;//这两个也是结构体变量（全局）
//void print1(struct Stu t)
//{
//	printf("%d %c %d\n", t.sb.s, t.sb.c, t.height);
//}
//void print2(struct Stu* ps)
//{
//	printf("%c %lf %d", ps->sb.c, ps->sb.d, ps->sb.s);
//}
//int main()
//{
//	struct Stu s = { {'w',1.00,20},175,"zhangsan",19 };
//	//写一个函数打印s的内容
//	print1(s);//传值调用--需要开辟内存空间，时间浪费
//	print2(&s);//传址调用--效率更高，建议
//	return 0;
//}
//函数调用的参数压栈
//栈，是一种数据结构
//先进的后出，后进的先出
//压栈，出栈
//  3
//  2
//  1
//函数栈帧的创建与销毁
int add(int x, int y)//x,y不在add开辟的内存空间中
{
	return x + y;
}
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	c = add(a, b);//参数从右向左传--压栈操作--单独开辟a',b'空间,a'->x,b'->y
	return 0;
}