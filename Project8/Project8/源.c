#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = a % 10;
//	int c = a / 10 % 10;
//	int d = a / 100;
//	printf("%d %d %d", d, c, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	
//	scanf("%d", &a);
//	float s1 = a*a;
//    float pi = 3.14;
//	float s2 = pi *a*a/4;
//	printf("%f", s1-s2);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//	int tmp = 0;
//	int tmp1 = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (b > c && b>a) 
//	{
//		tmp = b;
//	}
//	else if (a > b && a>c)
//	{
//
//		tmp1 = a;
//
//	}
//	else
//		tmp = c;
//	if (tmp > tmp1)
//	{
//		max = tmp;
//	}
//	else
//	{
//		max = tmp1;
//	}
//	printf("%d", max);
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int score = 0;
	//int score1 = 0;
	//int score2 = 0;
	//int score3= 0;
	//int result = 0;	
	//if (0 <= n <= 10)
	//{
	//	score1 = n * 6;
	//	result = score1;
	//}
	//if (11 <= n <= 20)
	//{
	//	score2 = (n-10) * 2+(10*6);
	//	result = score2;
	//}
	//if (21 <= n <= 40)
	//{
	//	score3 = (n-20) * 1+(10*6)+(10*2);
	//	result = score3;
	//}
	//printf("%d\n", result);
//	if (n <= 10)//answer
//	{
//		score = n * 10;
//	}
//	else if (n <= 20)
//	{
//		score = (10 * 6) + ((n-10) * 2);
//	}
//	else
//		score = (10 * 6) + (2 * 10) + ((n-20) * 1);
//	printf("%d", score);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int cycle =( n / 3 )+ 27 + 23;
//	int walk = n / 1.2;
//	if (cycle < walk)
//	{
//		printf("骑车快\n");
//	}
//	else if (walk < cycle)
//	{
//		printf("走路快\n");
//	}
//	else
//		printf("一样快\n");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	double age = 0;
//	int tmp = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &tmp);
//		age += tmp;
//	}
//	
//	printf("%.2lf\n", age / n);
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int a = 0; 
//	scanf("%d%d", &n, &a);
//	int store = a;
//	int result = 0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		result += store;
//		store = store * 10 + a;
//	}
//	printf("%d\n",result);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m1 = 1;
//	int m2 = 1;
//	int m3 = 0;
//	scanf("%d", &n);
//	n -= 2;
//	while (n--)
//	{
//		m3 = m1 + m2;
//		m1 = m2;
//		m2 = m3;
//	
//	}
//	printf("%d\n", m3);
//	return 0;
//}
//int main()
//{
//	double m = 0;
//	int n = 0;
//	double height = 0;
//	double distance = 0;
//    scanf("%d %d", &m, &n);
//	while (n--)
//	{
//		m /= 2;
//		height = m;
//		distance += m * 3;
//		
//	
//	}
//	printf("高度%.2lf 距离%.2lf\n", height,distance);
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			int s = i * j;
//			printf("%d*%d=%d\n", i, j, s);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int max = 100;
//	int min = 0;
//	int count = 0;
//	int mid = 0;
//	while(1)
//	{
//		mid = (max + min) / 2;
//		count++;
//		if (mid > n)
//		{
//			printf("猜大了 %d\n",mid);
//			max= mid -1;
//		}
//		else if (mid < n)
//		{
//			printf("%猜小了  %d\n",mid);
//			min= mid +1;
//		}
//		else
//		{
//			printf("猜出来了 %d", mid);
//			break;
//		}
//		
//	} 
//	printf("最终猜测了%d次\n", count);
//	return 0;
//}
int ids[5] = { 10001,10002,10003,10004 };
char names[5][10] = { "张三", "李四", "王五", "赵六" };
char passwords[5][16] = { "aaaaa","bbbbb","ccccc","ddddd" };
int uNum = 4;
char input[17];
int uid = 0;
int count = 0;
char* selectUserById(int uid)
{
	for (int i = 0; i <= uNum; i++)
	{
		if (uid == ids[i])
		{
			return names[i];
		}
	}
	return NULL;
}
char* selectPassById(int uid)
{
	for (int j = 0; j <= uNum; j++)
	{
		if (uid == ids[j])
		{
			return passwords[j];
		}
	}
	return NULL;
}
int login(int uid, char* password)
{
	if (selectUserById(uid) == NULL)
	{
		return 1;
	}
	if (selectPassById(uid) == NULL)
	{
		return 2;
	}
	if (strcmp(passwords, input )==0)
	{
		return 3;
	}
	else
	{
		return 2;
	}
}
int showLoginPage()
{
	printf("please input your account and passwords\n");
	scanf("%d %s",&uid,input );
	while(getchar()!= '\n');
	selectUserById(uid);
	selectPassById(uid);
	login(uid, input);
	switch (login(uid, input))
	{
	case 1 :
		printf("账号不存在\n");
		count = 2;
		return count;
		break;
	case 2:
		printf("密码错误\n");
		count = 2;
		return count;
		break;
	case 3:
		printf("登录成功\n");
		count = 5;
		return count;
		break;
	}
}
int main()
{

	do {
		count++;
		showLoginPage();
	} while (count <= 3);

	return 0;
}
//int sum = 0;
//int func(int *pa,int *pb)
//{
//	sum = *pa + *pb;
//	return sum;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int* pa = a;
//	int* pb = b;
//	int arr[5];
//	for (int i = 0; i <= 4; i++)
//	{
//		func(&a, &b);
//		arr[i] = sum;
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}