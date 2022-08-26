#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int code = 0;
//	printf("你想成为欧皇吗？(1/0)\n");
//	scanf("%d", &code);
//	if (code == 1)
//	{
//
//		while (code < 3000001)
//		{
//			code++;
//			printf("我想成为欧皇！%d\n", code);
//
//			if (code == 3000001)
//				printf("脱非成功！\n");
//
//		}
//
//	}
//	else
//		printf("很遗憾\n");
//
//
//	return 0;
//}
//关键字
//1.c语言提供的，不能自己创
//2.变量名不能是关键字
//auto break case char const continue default do double else enum
//extern float for goto if int long register return short signed
//sizeof static struct switch typedef union unsigned void volatile while
//
//auto 自动变量，自动创建，自动销毁（局部变量），每个局部变量都是auto修饰的
//extern 是用来申明外部符号
//register 寄存器关键字
//int main()
//{
//	register int num = 1000;//建议num的值存放在寄存器中
//	return 0;
//}
//计算机中数据可以存储到哪里？
//寄存器 高速缓存 内存 硬盘 网盘
// 更小   几十MB
//速度越快，空间越小
//signed 有符号的 10 -20
//unsigned 无符号整型
//static 静态的
//typedef 类型定义
//union 联合体（共用体）-数组
//enum 枚举类型-数组
//void 无 - 空类型（数据类型）
//volatile 很难
//define 不是关键字，是预处理指令
//include 不是关键字，是预处理指令

//typedef unsigned int u_int;//类型重命名（定义）
//int main()
//{
//	unsigned int num1 = 100;
//	u_int num2 = 1000;
//
//	return 0;
//}

//static - 静态的
//1.static 修饰局部变量，改变了局部变量的生命周期（本质上改变了变量的存储类型）
//2.修饰全局变量,使得这个全局变量只能在自己所在的源文件（.c）内部可以使用，其他源文件不能使用！
// 全局变量，在其他源文件内部可以被使用，是因为全局变量具有外部链接属性，但是被static修饰之后，就变成了内部属性链接，其他源文件就不能链接到这个静态的全局变量
//3.修饰函数 ,使得函数只能在自己所在的源文件内部使用，不能在其他源文件内部使用
// 本质上：static是将函数的外部链接属性变成了内部链接属性！（和static修饰全局变量一样）
// 内存分为栈区、堆区、静态区
// 栈区 局部变量函数的参数
//堆区 动态内存分配
//静态区 全局变量 static修饰的静态变量


//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d\n", a);
//
//
//}//a已被销毁


//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	
//	}
//
//
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//
//}//a没有销毁
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}
//extern声明外部符号的
//extern int g_val;
//int main()
//{
//	printf("%d\n",g_val);
//	return 0;
//
//}
//声明函数
extern int add(int x, int y);
int main()
{

	int a = 10;
	int b = 20;
	int sum = add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}