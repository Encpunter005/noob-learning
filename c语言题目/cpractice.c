#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ���
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
//					printf("%d��������%d\n", result, count);
//				}
//				else continue;
//				
//			}
//		}
//	
//	}
//	return 0;
//}

//2.��ҵ���ŵĽ�������������
// ������ڻ����10��Ԫʱ���������10%
// �������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��ֿ����7.5%
// 20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%
// 40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%
// 60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%
// ����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%���
// �Ӽ�������������I����Ӧ���ŵĽ�������
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


//3.ƽ����
//һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
//x+100=n^2
//x+100+168=m^2 
//
//�������Ϊ x��
//
//1����x + 100 = n2, x + 100 + 168 = m2
//
//2�������ʽ��m2 - n2 = (m + n)(m - n) = 168
//
//3�����ã� m + n = i��m - n = j��i * j = 168��i �� j ����һ����ż��
//
//4���ɵã� m = (i + j) / 2�� n = (i - j) / 2��i �� j Ҫô����ż����Ҫô����������
//
//5���� 3 �� 4 �Ƶ���֪����i �� j ���Ǵ��ڵ��� 2 ��ż����
//
//6������ i * j = 168�� j >= 2���� 1 < i < 168 / 2 + 1��
//
//7���������� i ����������ѭ�����㼴�ɡ�
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


//4.����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
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
//	printf("���������%d��\n", sum);
//
//	return 0;
//}

//5.������������x,y,z���������������С���������
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

//6.��*�������ĸC��ͼ����
//int main() {
//    printf("   ****\n");
//    printf(" **\n");
//    printf("*\n");
//    printf(" **\n");
//    printf("   ****\n");
//	return 0;
//}

//7.�������ͼ��������c���������У���һ����Very Beautiful!
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

//8.���9*9�ھ���
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			printf("%d * %d = %d\n", i, j, i * j);
//		}
//	}
//	return 0;
//}

//9.Ҫ����������������̡�
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

//10.��ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц����
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

//11.�ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣������ǰ40���¼��ɣ�
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

////12.�ж� 101 �� 200 ֮���������
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
//            // ��� j �ܱ� i ����������ѭ��
//            if (i % j == 0)
//                break;
//        }
//        // �ж�ѭ���Ƿ���ǰ��������� j<i ˵���� 2~j ֮��,i �п���������
//        if (j >= i)
//        {
//            count++;
//            printf("%d ", i);
//            // ���У��� count ������ÿ���������
//            if (count % 5 == 0)
//                printf("\n");
//        }
//    }
//    return 0;
//}

//13.��ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� �������磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���
//int main() {
//	int w = 0;
//	int e = 0;
//	int t = 0;
//	int result;
//	for (int i = 100; i < 1000; i++) {
//		w = i % 10;//��λ
//		e = i / 10 % 10;//ʮλ
//		t = i / 100;//��λ
//		result = (w * w * w) + (e * e * e) + (t * t * t);
//		if (i == result) printf("%d \n", result);
//	}
//	return 0;
//}

//14.��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��
 