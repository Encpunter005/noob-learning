#define  _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//分支语句
//if switch
//循环语句
// while for (do while)
//
//多分支语句
//int main()
//{
//	int a = 0;
//	printf("你的未来是怎样？(1/2/3)\n");
//	scanf("%d", &a);
//	if (a == 1)
//	{
//		printf("成功拿到好offer\n");
//	}
//	else if (a == 2)
//	{
//		printf("创业失败，继承亿万家产\n");
//	}
//	else
//	{
//		printf("回家卖红薯\n");//只管第一条语句(不带括号)
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int age = 60;
//	if (age < 18);
//	{
//		printf("青年");
//	}
//	else if (age >= 18 && age < 26)//&&并且
//	{
//		printf("青年");
//	}
//
//	else if (age >= 40 && age < 70)
//	{
//		printf("壮年");
//	}
//		
//	else if (age >= 60 && age <= 400);
//	{
//		printf("老年");
//	}
//	
//	return 0;
//}
//c语言中0表示假，非0表示真
//悬空else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//		return 0;
//}//else跟它离的最近的if匹配
//《高质量c++》
//"老司机写法"
//int main()
//{
//	int num = 3;
//	if (5 == num)
//		printf("hehe\n");
//	return 0;
//
//
//}
//test
//1.判断一个数是否为奇数
//2.输出1-100之间的奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (1 == a % 2)
//	{
//		printf("是奇数\n");
//	}
//	int i = 0;
//	for ( i = 1;i < 100; i+=2)
//	{
//	
//		
//		
//		
//		printf("%d\n", i);
//	}
//	
//	
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (1 == a % 2)
//	{
//		printf("是奇数\n");
//	}
//	int i = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//	
//		printf("%d\n", i);
//	}
//
//
//
//	return 0;
//}
//switch语句
//switch (整型表达式)
//{
//       语句项（case）
//}
//default子句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("Monday\n");
//		break;
//	case 2:
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 7:
//		printf("Sunday\n");
//		break;
//	default:
//		printf("输入错误");
//		break;
//
//
//	}
//
//
//	return 0;
//}
//循环语句
//int main()
//{
//
//	int i = 10;
//	while (i <= 100)
//	{
//		if (i == 50)
//			continue;//跳过本次循环continue后面的代码，直接去判断部分，看是否进行下一次循环
//			//break;//while循环中，break用于永久的终止循环
//		
//		printf("%d\n", i);
//		i++;
//	}
//
//
//
//
//
//
//	return 0;
//}
//int main()
//{
//
//
//
//	int ch = getchar();//获取一个字符
//	printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	//ctrl+z - getchar读取结束
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;

//}
//int main()
//{
//	char password[20] = { 0 };
//	
//	printf("请输入密码\n");
//	scanf("%s", password);//数组的数组名本来就是个地址 
//	printf("请确认密码(Y/N)\n");
//	//清理缓冲区
//	//gets
//	//getchar();//处理'\n'
//	int tmp = 0;
//	while ((tmp = getchar() ) != '\n')//！=检查两个操作数是否相等，不相等则为真(运算符)
//	{
//	
//		;
//	}
//
//	int ch = getchar();//getchar scanf输入函数。只要发现缓冲区有东西，就会立马拿走
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF = -1
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	
//	}
//	return 0;
//}
//for循环（表达式1；表达式2；表达式3）
//  循环语句
//执行顺序 1.初始化：表达式1 2.判断：表达式2 3.循环语句 4.调整：表达式3 5.->2. 6.->3. 7->4.
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//	
//	
//	
//		printf("%d", i);
//	
//	}
//
//
//
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (1 == a % 2)
//	{
//		printf("是奇数");
//
//	}
//	int i = 0;
//	for (i = 1; i <= 100; i+=2)
//	{
//		printf("%d\n",i);
//	}
//	return 0;
//
//}
//请问循环多少次
/*int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;


	return 0;
}*///0为假，循环次数为0
//do
//   循环语句 ；
//while（表达式）；
//int main()
//{
//
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//
//		i++;
//		
//	
//	} while (i <= 10);
//
//
//	return 0;
//}
//在一个有序的数组找到具体的某个数字n
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;//要查找的数字
	scanf("%d", &k);
    //在arr这个有序的数组中查找k（7）的值
	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
	int left = 0;
	int right = sz - 1;
	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;

		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了,下标:%d\n", mid);
			break;
		
		}
	
	}
	if (left > right)
	{
		printf("找不到\n");
	}


	return 0;
}


















