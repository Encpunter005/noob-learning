#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//函数 
//库函数：
// io函数（输入输出）： printf scanf getchar putchar
// 字符串操作函数 :strlen strcmp toupper(小写转大写)
// 内存操作函数 :mcmcpy mcmcp memset
// 时间|日期函数 :time
// 数学函数 :sqrt pow
// 其他库函数
//自定义函数
int main()
{
	/*char arr[20] = { 0 };*/
	char arr2[] = "hello world\0";
	memset(arr2, 'x', 5);//替换字符
	
	//strcpy(arr, arr2);
	printf("%s", arr2);

	return 0;
}