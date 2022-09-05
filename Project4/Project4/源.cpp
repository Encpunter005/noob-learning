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
//在一个有序的数组找到具体的某个数字n（折半查找算法）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;//要查找的数字
//	scanf("%d", &k);
//    //在arr这个有序的数组中查找k（7）的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标:%d\n", mid);
//			break;
//		
//		}
//	
//	}
//	if (left > right)
// 
//	{
//		printf("找不到\n");
//	}
//
//
//	return 0;
//}
//编写代码，眼hi多个字符从两端移动，向中间汇聚
#include <string.h>//strlen strcmp
#include <Windows.h>
#include <WinBase.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;//数组下标从0开始
//	while (left <= right)
//	{
//
// 
//
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//Sleep(600);
//		//system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//
//	return 0;
//}
//编写代码实现，模拟用户登录场景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序。）
//int main()
//{
//	int i = 0;
//
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//两个字符串比较，不能使用==,应该使用strcmp:比较字符串函数,比较字符串的值
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入！\n");
//		}
//	
//
//	}
//	if (i == 3)
//	{
//		printf("错误三次，登录失败，鬼！\n");
//	
//	}
//
//	return 0;
//}
//猜数字游戏实现
//1.自动产生一个1-100之间的随机数
//2.猜数字
//a.猜对了，就恭喜你，游戏结束
//b.你猜错了，会告诉你猜大了，还是猜小了，继续猜，知道猜对
//3.游戏一直玩，除非退出游戏
//void menu()
//{
//	printf("******************************\n");
//	printf("***********1.PLAY*************\n");
//	printf("***********0.EXIT*************\n");
//	printf("******************************\n");
//}
//猜数字游戏的实现
//1.生成随机数-rand函数 - <stdlib.h>
//2.猜数字
#include <stdlib.h>
#include <time.h>
//RAND_MAX rand函数返回了一个0-32767之间的数字
//时间-时间戳
//void game()
//{
//	
//	int ret = rand()%100+1;//%100的余数是0-99，然后+1，范围是1-100 
//	//printf("%d\n", ret);
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//
//}
//int main()
//
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//srand需要一个unsigned int 的值
//	do
//	{
//		
//		menu();
//		printf("请选择:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新选择\n");
//			break;
//		
//		
//		
//		
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int choose = 0;
//	printf("你想成为一个欧皇吗？(1/2)\n");
//	scanf("%d", &choose);
//	switch (choose)
//	{
//	case 1:
//	{
//		while (choose < 30001)
//		{
//			choose++;
//			printf("我想当欧皇！%d\n", choose);
//
//
//		}
//		if (choose == 30001)
//		{
//			printf("脱非成功\n");
//			break;
//		}
//	}
//	default:
//		printf("很遗憾\n");
//		break;
//
//	}
//	return 0;
//}
//	
//int main()
//{
//	char password[100] = { 0 };
//	
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("请输入口号:\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456789") == 0)
//		{
//			printf("口号正确\n");
//			break;
//		}
//		else
//		{
//			printf("口号错误，请重试！\n");
//		}
//			
//	
//	
//	}
//	if (i == 5)
//	{
//		printf("有多远滚多远\n");
//	}
//	return 0;
//}

//void search()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	printf("请输入要查找的数字\n");
//	int m = 0;
//	scanf("%d", &m);
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < m)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > m)
//		{
//			right = mid - 1;
//		}
//		else
//		{    
//			printf("找到了\n");
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//	
//		printf("找不到，鬼！\n");
//	
//	}
//
//
//
//
//}
//int main()
//{
//	printf("找数字不？（1-20）\n");
//	int idea = 0;
//	scanf("%d", &idea);
//	switch (idea)
//	{
//	case 1:
//	{
//		while (idea)
//			search();
//		break;
//	}
//	
//	case 0:
//	{
//	
//		printf("不想找，鬼!\n");
//		break;
//		
//	}
//	
//	}
//	return 0;
//}
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//
//	}
//
//	return b;
//
//}
//int main()
//{
//
//	printf("%d", func(1));
//
//	return 0;
//}
//F10逐过程
//F11逐语句
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default:printf("hello");
//		}
//	case 2:
//		printf("third");
//	
//	}
//
//	return 0;
//}
//输入数字，从大到小输出
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//输入
	scanf("%d %d %d", &a, &b, &c);
	//调整
	if (a > b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;

	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	
	}
	//输出
	printf("%d %d %d\n", a, b, c);






	return 0;
}


		

