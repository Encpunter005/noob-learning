#include <stdio.h>
//数据的存储
//局部变量存放在栈区上
//栈内存
//高地址
//低地址
//栈区的使用习惯：先使用高地址再使用低地址
//数组随着下标的增长，地址是由低到高变化
// int main()
// {
//     int i = 0;
//     int arr[12] = {1,2,3,4,5,6,7,8,9};
//     for(i = 0; i <= 12;i++){
//         arr[i] = 0;
//         printf("hehe\n");
//     }
//     return 0; 
// }
//整型家族
//浮点型家族
//构造类型--自定义类型
//  数组
//  enum枚举类型
//  union联合体
//  struct结构体类型
//指针类型
//空类型
// void
// 函数返回类型，void test();
// 函数参数 void test(void);
// 指针 void *p;
// int main(){
//     int arr[10];
//     int a = 10;//数据在内存中以2进制的形式存储
//     //对于整数来说：
//     //整数在内存中存储的二进制有三种表示形式：原码 反码 补码
//     //正整数的原码、反码、补码相同
//     //负整数：需要计算
//     //按照数据的数值直接写出二进制序列就是原码
//     //原码的符号位不变，其他按位取反，得到的就是反码
//     //反码+1=补码
//     //1000000001010 原码
//     //1111111110101 反码
//     //1111111110110 补码 = 反码+1
    
//     return 0;
// }
// int main(){
//     //大端字节序，小端字节序
//     int a = 0x1144552;
//     return 0; 
// }
//大端字节序：把数据的低位字节序的内容存放在高地址处，把数据的高位字节序的内容存放在低地址处
//小端字节序：把数据的高位字节序的内容存放在高地址处，把数据的低位字节序的内容存放在低地址处
// int check_sys(){
//     int a = 1;
//     char *p = (char *)&a;//强制类型转换 原本int*
//     return *p;
// }
// int main(){
//     check_sys();
//     if(check_sys == 1) printf("大端\n");
//     else printf("小端\n");
//     return 0;
// }
// int main(){
//     unsigned char c = -1;
//     int b = -128;
//     printf("%d\n",c);
//     printf("%u\n",b);
//     return 0; 
// }
//补充：
//1. char到底是signed char 还是unsigned char
//c语言标准没有规定，取决于编译器
//2.int是signed int
// short是signed short
//指针
//字符指针
// int main(){
//     char ch = 'q';
//     char *pc = &ch;
//     //本质上是把 "hello wolrd"这个字符串的首字符的地址存放在了ps中
//     char *ps = "hello world";
//     char arr[] = {"hello world"};
//     printf("%s\n",arr);
//     return 0;
// }
// int main(){//来源《剑指offer》p49
//     char str1[] = {"hello world."};
//     char str2[] = {"hello world."};
//     const char* str3[] = {"hello world."};//常量字符串
//     const char* str4[] = {"hello world."};//常量字符串，只有一份
//     if(str1 == str2) printf("str1 and str2 are the same\n");
//     else printf("str1 and str2 are not same\n");
//     if(str3 == str4) printf("str3 and str4 are the same\n");
//     else printf("str3 and str4 are not same\n");
//     int a = 4321;
//     printf("%d",printf("%d",printf("%d",printf("%d",printf("%d",a)))));
//     return 0;//str1 str2一样 str4 str3一样
// }
//一级指针传参
void print(int *p,int sz){
     for(int i = 0;i < sz;i++) printf("%d\n",*(p+i));
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *p =arr;
    int sz = sizeof(arr) / sizeof(arr[0]);
    //p是一级指针
    print(p,sz);
    return 0;
}
