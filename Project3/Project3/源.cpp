#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//define定义常量和宏
//define是一个预处理指令
//1.define定义符号
#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}
//define定义宏,宏的参数是替换

#define ADD(X,Y) ((X)+(Y))

//int main()
//{
//
//	printf("%d\n",4* ADD(2, 3));
//
//
//	return 0;
//}
//指针：1.内存是怎么编号的？
//     2.一个这样的内存单元是多大空间？
//     3.指针 就是 地址
//32位 - 32根地址线 - 物理线 - 通电 - 1/0
//64位 -
//电信号转换成数字信息：1、0组成的二进制序列
//最终：一个内存单元是一个字节，然后分配地址


//指针变量
//int main()
//{
//	int a = 10;//a在内存中要分配空间的- 4个字节
//	printf("%p\n", &a);//%p 专门用来打印打印地址的
//	int * pa = &a;//pa是用来存放地址的，在c语言中pa叫指针变量，
//	//*说明pa是指针变量
//	//int说明pa执行的对象是int类型的
//	char ch = 'w';
//	char * pc = & ch;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//*解引用操作，*pa就是通过pa里面的地址，找到a
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 400;
//	int* pc = &a;
//	*pc = 10000;
//	printf("%d\n", a);
//
//	return 0;
//}

//指针变量的大小 32位 32bit-4byte 64位 64bit-8byte
//int main()
//{
//	printf("%d\n",  sizeof(char*));//8
//	printf("%d\n",  sizeof(short*));//8
//	printf("%d\n",  sizeof(int*));//8
//	printf("%d\n",  sizeof(long*));//8
//	printf("%d\n",  sizeof(long long*));//8
//	printf("%d\n",  sizeof(float*));//8
//	printf("%d\n",  sizeof(double*));//8
//
//	return 0;
//}

//结构体，可以让c语言创建新的类型出来
//创建一个学生
//struct stu
//{
//	char name[20];//成员变量
//	int age;
//	double score;
//	
//
//
//};
////创建一个书的类型
//struct Book
//{
//
//	char name[20];
//	float price;
//	char id[30];
//
//
//
//
//};
//int main()
//{
//	struct stu s = { "张三", 20 ,85.5 };//结构体的创建和初始化
//	printf("1:%s %d %lf\n",s.name,s.age,s.score);//结构体变量.成员变量
//	struct stu* ps = &s;
//	printf("2: %s %d %lf\n",( * ps).name ,(*ps).age,(*ps).score );
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);//结构体指针->成员名
//	return 0;
//}















