#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//浮点数-小数
//整型-整数 
//char 字符类型数据（ABCD）   
//short 短整型
//int 整形
//long 长整型
//long long 更长的整形
//float 单精度浮点数
//double 双精度浮点数
//printf("%d/n",100)-打印一个整数
//printf("%d/n",sizeof(char))          siezeof 关g键字-操作符-计算类型或变量所占空间的大小






//int main()  // 主函数（main函数）-入口 一个工程中有且仅有一个main函数
//{
//
//	printf("%d\n",  sizeof(char)); //sizeof的单位-字节byte   1
//	printf("%d\n",  sizeof(short)); //2 
//	printf("%d\n",  sizeof(int));//4
//	printf("%d\n",  sizeof(long));//4   sizeof(long)>=sizeof(int)
//	printf("%d\n",  sizeof(long long));//8
//	printf("%d\n",  sizeof(float));//4
//	printf("%d\n",  sizeof(double));// 8
//	return 0;
//}


//int main()
//{
//	int age = 18;  // 创建变量    类型  名字 = 0（推荐）
//		                  // 创建变量    类型   名字 （不推荐）
//	float bodysize = 123;
//	age = age + 4;
//	double weight = 87.5;
//	weight = weight + 12.5;
//	printf("%d\n",  age );
//	printf("%lf\n", weight);
//	printf("%s\n", "Helloworld"); //字符串
//	printf("%f\n", bodysize);
//
//	return 0;
//}

// 变量： 局部变量，全局变量 当全局变量与局部变量冲突时，局部变量优先
//数据计算 scanf函数

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 30;
//	scanf("%d %d",  & a, & b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//作用域和生命周期
//局部变量的作用域：变量所在的范围{}
//全局变量：整个工程 最好声明一下变量 example   extern int g_val = 2022
//生命周期
//变量的生命周期：变量的创建与销毁之间的时间段
//局部变量的生命周期:{} 进入局部范围-出局部范围
//全局变量的生命周期:程序的生命周期



//常量
//字面常量
//int main()
//{
//	3.14;
//	10;//整形常量
//
//	'a';
//	"abcdef";
//
//	return 0;
//
//}
//const修饰的常变量
//#define MAX 10000000
//int main()
//{
//	int n = MAX;
//
//	printf("%d\n", n);
//
//	return 0;
//}
//#define定义的标识符常量 
//枚举常量--可以一一列举的常量


//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s =  MALE;
//
//	return 0;
//}

//字符串
//int main()
//{
//	//字符数组--数组是一组相同类型的元素 
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志
//	char arr[] = "hello\0";
//
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "helloworld";
//	int len = strlen("helloworld");
//	printf("%d\n",strlen ("helloworld"));
//	return 0;
//}
////转义字符---转变了它的意思
////printf在打印数据的时候，可以指定打印的格式 
//int main()
//{
//	printf("C:\\test\\test.c");
//	printf("\a\a\a\a\a");
//	
//	return 0;
//}
//
//int main()
//{
//	printf("%c\n", '\130');//8进制的数字转换成十进制的数字
//
//	return 0;
//}  


//if语句
//int main()
//{
//	int input = 0;//输入的值
//	printf("你是一个人");
//	printf("你想成为欧皇吗？（1/0）\n");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("是\n");
//	else
//		printf("很遗憾\n");
//
//	return 0;
//}

//循环语句 while for do....while

//int main()
//{
//	printf("你有一颗想当欧皇的心吗？（1/0）\n");
//	int coding = 0;
//	scanf("%d", & coding);
//	if (coding == 1)
//	{
//		while (coding < 300000)
//		{
//
//			printf("我想当欧皇!:%d\n", coding);
//			coding++;
//
//		}
//		if (coding == 300000)
//			printf("脱非成功\n");
//	}
//	else
//		printf("很遗憾\n");
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, & num2);
//	int sum = Add(num1,num2);
//	printf("%d\n", sum);
//
//	return 0;
//}
//数组--一组相同类型的元素集合
//数组是通过下标来访问的 （0-。。。。。）
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	char ch[5] = {'a','b','c'};//不完全初始化，剩余的默认为0
//
//
//
//	return 0;
//}
//操作符
//算术操作符：+ - * / %
//移位操作符：>>  <<

//int main()
//{
//	double a = 9 / 2.0;
//	printf("%f\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 9 % 2;//-取模（余）
//	printf("%d\n", a);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = a << 1;   //左移操作符 ---移动的是二进制位
//	printf("%d\n", b);
//	return 0;
//}

//位操作符
//&按位与
//  |按位或
//^按位异或
//赋值操作符  += -= /= *= >>= <<=
//int main()
//{
//	int a = 5;
//	a /= 1;
//	printf("%d\n", a);
//	return 0;
//}
//单目操作符：只有一个操作数                   a+b +有2个操作数，双目操作符
// !      逻辑反操作                                     
// -      负值   
// +      正值 
// &      取地址   
// sizeof 操作数的类型长度
// ~      对一个数的二进制按位取反 
// --     前置、后置 --
// ++     前置、后置 ++
// *      间接访问操作符（解引用操作符）
// （类型） 强制类型转换
//int main()
//{
//	int a = 0;// 0表示假，非0表示真
//	printf("%d\n", !a);
//
//	if (a)
//
//	{
//	  
//	
//	//如果a为真
//	}
//
//
//
//	if (!a)
//
//	{
//	
//	
//	//如果a为假
//	}
//
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));//4
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}
int main()
{
	int a = 0;
	printf("%d\n", ~a); //按（二进制位）位取反，把所有二进制位中数字，1-0，0-1    00000000000000000000000000000000---11111111111111111111111111111111
	return 0;
}
//整数在内存中储存的是补码
//一个整数的二进制表示有3种
//原码、补码、反码
//-1：10000000000000000000000000000001（原码）
//   11111111111111111111111111111110 (符号位不变，其他位按位取反----反码)
//   11111111111111111111111111111111（补码）------针对负数 反码+1
//正整数：原码、反码、补码相同