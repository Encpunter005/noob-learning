#define  _CRT_SECURE_NO_WARNINGS 1




#include <string.h>
#include <stdio.h>

//���� 
//�⺯����
// io����������������� printf scanf getchar putchar
// �ַ����������� :strlen strcmp toupper(Сдת��д)
// �ڴ�������� :mcmcpy mcmcp memset
// ʱ��|���ں��� :time
// ��ѧ���� :sqrt pow
// �����⺯��
//�Զ��庯��
//int main()
//{
//	/*char arr[20] = { 0 };*/
//	char arr2[] = "hello world\0";
//	memset(arr2, 'x', 5);//�滻�ַ�
//	
//	//strcpy(arr, arr2);
//	printf("%s", arr2);
//
//	return 0;
//}
//�Զ��庯��
//�������
//ret_type fun_name(para1, *);
//{
//	statement;//�����
//
//}������
//ret_type ��������
//fun_name ������
//para1  ��������
//дһ�������������ҳ����������е����ֵ
//int get_max(int x, int y)
//{
//	
//	int z = 0;
//	if (x > y)
//		z = x;
//	else if (x < y)
//		z = y;
//	else
//		z = x;
//	return z;//���ؽϴ�ֵ
//}
//int main()
//{ 
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a,b);
//	printf("max = %d\n", max);
//	return 0;
//}
//void swap2(int x, int y)//�ú����ڱ����õ�ʱ��,ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ������ʱ�������ı��βΣ����ܸı�ʵ��
//��ֵ����
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//
//}
//void swap1(int *pa, int *pb)//�����������͵ĵط�д����void����ʾ��������������κ�ֵ��Ҳ����Ҫ���أ�������ģ��βΣ�
//����ַ����
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	printf("a=%d,b=%d\n", a, b);
//	swap1(&a, &b);//�����������ͱ�����ֵ ��ʵ�Σ�
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//�����Ĳ���
//ʵ�ʵĲ���������Ҫȷ�е�ֵ                
//��ʽ�Ĳ�����������������֮����Զ����٣������ʽ��������ֻ�ں�������Ч
#include <math.h>
//int is_prime(int n)
//{
//	//2->n-1
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (0 == n % j)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	//100~200֮�������
//	for (i = 100; i <= 200; i++)
//	{
//	//�ж�i�Ƿ�������
//		if (1 == is_prime(i))
//			printf("%d\n", i);
//	}
//	return 0;
//}
//дһ�������ж�һ���ǲ�������
//һ�����������д�������ͣ�Ĭ�Ϸ���int����
//int is_leapyear(int n)
//{
//	if (0 == n%4 && 0 != n%100)
//	{
//		return 0;
//	}
//	else
//		return 1;
//
//
//} 
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		is_leapyear(y);
//		if (is_leapyear(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}
//дһ��������ʵ�ֶ��ֲ���
//int countsearch(int ar[],int k,int s)
//{
//	int left = 0;
//	int right = s - 1;
//	int mid = (left + right)/2;
//	while (left <= right)
//	{
//		if (ar[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (ar[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//
//			return  mid;
//		}
//	
//	}
//	return -1;
//	}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int key = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˾ͷ����ҵ�λ�õ��±�
//	//�Ҳ����ͷ���-1
//	scanf("%d", &key);
//	int ret = countsearch(arr,key,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//	return 0;
//}
//дһ��������ÿ����һ��num�ͻ�����1
//��ַ
//void test(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	test(&num);
//	printf("%d\n", num);
//
//	test(&num);
//	printf("%d\n", num);
//
//	test(&num);
//	printf("%d\n", num);
//
//
//	return 0;
//}



//������Ƕ�׵���,����Ƕ�׶��壬�������治�ܶ�����һ������,�����Ե���
//void test3()
//{
//	printf("hehe\n");
//}
//
//
//int test2()
//{
//
//	test3();
//	return 0;
//}
//void test1()
//{
//
//	test2();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//��������ʽ����,��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//int main()
//{
//	char arr[20] = { 0 };
//	char arr2[] = "helloworld";
//	int length = strlen("abc");//strlen����
//	printf("%d\n", length);
//	printf("%d\n", strlen("abc"));
//	strcpy(arr, arr2);
//	printf("%s\n", arr);
//	printf("%s\n", strcpy(arr, arr2));
//	printf("%d", printf("%d", printf("%d",43)));//printf�������ص��Ǵ�ӡ����Ļ���ַ��ĸ���---4321
//	return 0;
//}
//�����������Ͷ���

//int main()
//{
//	int a = 20;
//	int b = 10;
//	//��������һ��,���ڴ治���ڲ��ù�
//	int Add(int x, int y);
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//int Add(int x, int y)
//{
//
//	return x + y;
//}
#include "add.h"//����������һ�����ͷ�ļ�
#include "sub.h"

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	int d = Sub(a, b);
//	printf("%d \n", c);
//	printf("%d \n", d);
//	return 0;
//}
//�����ݹ�---�Ѵ��»�С
// ��Ҫ����
// 1.���������������������������������ʱ�򣬵ݹ�㲻�ڼ���
// 2.ÿ�εݹ����֮��Խ��Խ�ӽ������������
//д�ݹ�����ʱ��
// 1.�������ݹ飬��������������ÿ�εݹ�ƽ���������
// 2.�ݹ��β���̫��
//int main()
//{
//	printf("helloworld\n");
//	main();//ջ�������̬�ڴ�����
//	return 0;
//}
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234�����1 2 3 4 
//1234%10=4 
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4

//void print(unsigned int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//
//	}
//	printf("%d ", num % 10);
//
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);//��ӡ����
//	return 0;
//}
//�ڴ�
//ջ�����ֲ����� �����βΣ�������ʱ��������ÿһ���������ã���Ҫ��ջ���Ϸ���һ��ռ� example main��ջ֡�ռ䣩
//ջ�����ÿ�εݹ飬��������ռ��һ�����ڴ棬��εݹ飬ջ����������ϣ����ݹ黹�ڽ��У���ʱ�ͻ�ջ���
//
//
//��������̬�ڴ����� malloc/free/calloc/realloc
//
//
//
//��̬����ȫ�ֱ��� ��̬����
//��д��������������ʱ���������ַ�������
//int my_strlen(char *str)//����ͳ��
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "helloworld";
//	//[h][e][l][l][o][w][o][r][l][d][\0] strlen������\0
//	printf("%d\n", my_strlen(arr));//(ģ��strlen����)�����ڴ���ʱ��ʹ����Ԫ�صĵ�ַ
//	return 0.;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return  1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "helloworld";
//	//[h][e][l][l][o][w][o][r][l][d][\0] strlen������\0
//	printf("%d\n", my_strlen(arr));//(ģ��strlen����)�����ڴ���ʱ��ʹ����Ԫ�صĵ�ַ
//	return 0.;
//}
//��n�Ľ׳�
//int test(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//	return n*test(n-1)
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = test(n);
//	printf("%d", ret);
//	return 0;
//}
//���n��쳲���������
//int  count = 0;
//int Fib(int n)
//{
//	//if (n == 3)//ͳ�Ƶ�����쳲�������
//	//{
//	//	count++;
//	//}
//	//if (n <= 2)//Ч�ʵ�
//	//{
//	//	return 1;
//	//}
//	//else
//	//	return Fib(n - 1) + Fib(n - 2);
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}
int test(int n)
{
	if (n <= 2 )
	{
	
		return 1;
	}
	else
	{
		return test(n - 1);
	}

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = test(n);
	printf("%d\n", ret);
	return 0;
}