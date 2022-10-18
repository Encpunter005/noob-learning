#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少
//int main() {
//	int a, b, c;
//	int count = 0;
//	int result;
//	for (a = 1; a < 5; a++)
//	{
//		for (b = 1; b < 5; b++)
//		{
//			for (c = 1; c < 5; c++)
//			{
//				if (a != b && b != c && a != c)
//				{
//					result = a * 100 + b * 10 + c;
//					count++;
//					printf("%d，次数是%d\n", result, count);
//				}
//				else continue;
//				
//			}
//		}
//	
//	}
//	return 0;
//}

//2.企业发放的奖金根据利润提成
// 利润低于或等于10万元时，奖金可提10%
// 利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分可提成7.5%
// 20万到40万之间时，高于20万元的部分，可提成5%
// 40万到60万之间时高于40万元的部分，可提成3%
// 60万到100万之间时，高于60万元的部分，可提成1.5%
// 高于100万元时，超过100万元的部分按1%提成
// 从键盘输入月利润I，求应发放的奖金总数
//
//int main() {
//	long a = 0;
//	long result = 0;
//	scanf("%d", &a);
//	if (a <= 10) printf("%ld\n", a * 10000 / 10);
//	else if (a > 10 && a < 20) { 
//		result = 10000 + (a - 10) * 10000 / 75;
//		printf("%ld\n", result);
//	}
//	else if (a > 20 && a < 40) printf("%ld\n", (a - 20) * 10000 / 500 + 10000 + (a - 10) * 10000 / 75);
//	else if (a > 40 && a < 60) printf("%ld\n", (a - 40) * 10000 / 300 + (a - 20) * 10000 / 500 + 10000 + (a - 10) * 10000 / 75);
//	else if (a > 60 && a < 100) printf("%ld\n", (a - 60) * 10000 / 15 + (a - 40) * 10000 / 300 + (a - 20) * 10000 / 500 + 10000 + (a - 10) * 10000 / 75);
//	else if (a > 100) printf("%ld\n", (a - 100) * 10000 / 100 + (a - 60) * 10000 / 15 + (a - 40) * 10000 / 300 + (a - 20) * 10000 / 500 + 10000 + (a - 10) * 10000 / 75);
//	return 0;
//}


//3.平方数
//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//x+100=n^2
//x+100+168=m^2 
//
//假设该数为 x。
//
//1、则：x + 100 = n2, x + 100 + 168 = m2
//
//2、计算等式：m2 - n2 = (m + n)(m - n) = 168
//
//3、设置： m + n = i，m - n = j，i * j = 168，i 和 j 至少一个是偶数
//
//4、可得： m = (i + j) / 2， n = (i - j) / 2，i 和 j 要么都是偶数，要么都是奇数。
//
//5、从 3 和 4 推导可知道，i 与 j 均是大于等于 2 的偶数。
//
//6、由于 i * j = 168， j >= 2，则 1 < i < 168 / 2 + 1。
//
//7、接下来将 i 的所有数字循环计算即可。
//int main() {
//    int  i, j, m, n, x;
//    for (i = 1; i < 168 / 2 + 1; i++)
//    {
//        if (168 % i == 0)
//        {
//            j = 168 / i;
//            if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
//            {
//                m = (i + j) / 2;
//                n = (i - j) / 2;
//                x = n * n - 100;
//                printf("%d + 100 = %d * %d\n", x, n, n);
//                printf("%d + 268 = %d * %d\n", x, m, m);
//            }
//        }
//    }
//	return 0;	
//}


//4.输入某年某月某日，判断这一天是这一年的第几天？
int main() {
	int year, month, day;
	int sum, leap;
	scanf("%d%d%d", &year, &month, &day);
	switch (month) {
	case 1:
		sum = 0;
		break;
	case 2:
		sum = 31;
		break;
	case 3:
		sum = 59;
		break;
	case 4:
		sum = 90;
		break;
	case 5:
		sum = 120;
		break;
	case 6:
		sum = 151;
		break;
	case 7:sum = 181; break;
	case 8:sum = 212; break;
	case 9:sum = 243; break;
	case 10:sum = 273; break;
	case 11:sum = 304; break;
	case 12:sum = 334; break;
	default:printf("data error\n"); break;
	
	}
	sum = day + sum;
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) leap = 1;
	else leap = 0;
	if (leap == 1 && month > 2) sum++;
	printf("这是这年第%d天\n", sum);

	return 0;
}
