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
//unsigned 无符号的
//static 静态的
//typedef 类型定义
//union 联合体（共用体）
//void 无 - 空
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
//1.static 修饰局部变量
//2.修饰全局变量
//3.修饰函数 


void test()
{
	int a = 1;
	a++;
	printf("%d\n", a);


}


int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	
	}


	return 0;
}