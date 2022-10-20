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
//int main() {
//	int year, month, day;
//	int sum, leap;
//	scanf("%d%d%d", &year, &month, &day);
//	switch (month) {
//	case 1:
//		sum = 0;
//		break;
//	case 2:
//		sum = 31;
//		break;
//	case 3:
//		sum = 59;
//		break;
//	case 4:
//		sum = 90;
//		break;
//	case 5:
//		sum = 120;
//		break;
//	case 6:
//		sum = 151;
//		break;
//	case 7:sum = 181; break;
//	case 8:sum = 212; break;
//	case 9:sum = 243; break;
//	case 10:sum = 273; break;
//	case 11:sum = 304; break;
//	case 12:sum = 334; break;
//	default:printf("data error\n"); break;
//	
//	}
//	sum = day + sum;
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) leap = 1;
//	else leap = 0;
//	if (leap == 1 && month > 2) sum++;
//	printf("这是这年第%d天\n", sum);
//
//	return 0;
//}

//5.输入三个整数x,y,z，请把这三个数由小到大输出。
//int main() {
//	int x, y, z;
//	scanf("%d%d%d", &x, &y, &z);
//	if (x > y) {
//		int temp = x;
//		x = y;
//		y = temp;
//	}
//	if (y > z) {
//		int temp2 = y;
//		y = z;
//		z = temp2;
//	}
//	if (x > z) {
//		int temp3 = x;
//		x = z;
//		z = temp3;
//	}
//	printf("%d %d %d \n", x, y, z);
//	return 0;
//}

//6.用*号输出字母C的图案。
//int main() {
//    printf("   ****\n");
//    printf(" **\n");
//    printf("*\n");
//    printf(" **\n");
//    printf("   ****\n");
//	return 0;
//}

//7.输出特殊图案，请在c环境中运行，看一看，Very Beautiful!
//int main()
//{
//    char a = 176, b = 219;
//    printf("%c%c%c%c%c\n", b, a, a, a, b);
//    printf("%c%c%c%c%c\n", a, b, a, b, a);
//    printf("%c%c%c%c%c\n", a, a, b, a, a);
//    printf("%c%c%c%c%c\n", a, b, a, b, a);
//    printf("%c%c%c%c%c\n", b, a, a, a, b);
//    return 0;
//}

//8.输出9*9口诀。
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			printf("%d * %d = %d\n", i, j, i * j);
//		}
//	}
//	return 0;
//}

//9.要求输出国际象棋棋盘。
//int main() {
//	for (int i = 0; i <= 8; i++) {
//		for (int j = 0; j <= 8; j++) {
//			if ((i + j) % 2 == 0) printf("%c%c", 219, 219);
//			else printf("  ");
//			printf("\n");
//		}
//	}
//	return 0;
//}

//10.打印楼梯，同时在楼梯上方打印两个笑脸。
//int main() {
//	printf("\1\1\n");
//    for (int i = 1; i < 11; i++)
//    {
//        for (int j = 1; j <= i; j++)
//            printf("%c%c", 219, 219);
//        printf("\n");
//    }
//	return 0;
//}

//11.古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
//int main() {
//	int time = 0;
//	int i = 2;
//	int j = 0;
//	while (time < 40)
//	{
//		printf("%d\n", i + j);
//		time += 3;
//		i += 2;
//		j += 2;
//	}
//	return 0;
//}

////12.判断 101 到 200 之间的素数。
//#include<math.h>
//int main() {
//	for (int i = 101; i <= 200; i++) {
//		if (i % 2 != 0 && i % (int)sqrt(i) != 0) printf("%d ", i);
//	}
//	return 0;
//}
//#include <stdio.h>
// 
//int main()
//{
//    int i, j;
//    int count = 0;
//
//    for (i = 101; i <= 200; i++)
//    {
//        for (j = 2; j < i; j++)
//        {
//            // 如果 j 能被 i 整除再跳出循环
//            if (i % j == 0)
//                break;
//        }
//        // 判断循环是否提前跳出，如果 j<i 说明在 2~j 之间,i 有可整除的数
//        if (j >= i)
//        {
//            count++;
//            printf("%d ", i);
//            // 换行，用 count 计数，每五个数换行
//            if (count % 5 == 0)
//                printf("\n");
//        }
//    }
//    return 0;
//}

//13.打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
//int main() {
//	int w = 0;
//	int e = 0;
//	int t = 0;
//	int result;
//	for (int i = 100; i < 1000; i++) {
//		w = i % 10;//个位
//		e = i / 10 % 10;//十位
//		t = i / 100;//百位
//		result = (w * w * w) + (e * e * e) + (t * t * t);
//		if (i == result) printf("%d \n", result);
//	}
//	return 0;
//}

//14.将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
 