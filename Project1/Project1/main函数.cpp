#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//������-С��
//����-���� 
//char �ַ��������ݣ�ABCD��   
//short ������
//int ����
//long ������
//long long ����������
//float �����ȸ�����
//double ˫���ȸ�����
//printf("%d/n",100)-��ӡһ������
//printf("%d/n",sizeof(char))          siezeof ��g����-������-�������ͻ������ռ�ռ�Ĵ�С






//int main()  // ��������main������-��� һ�����������ҽ���һ��main����
//{
//
//	printf("%d\n",  sizeof(char)); //sizeof�ĵ�λ-�ֽ�byte   1
//	printf("%d\n",  sizeof(short)); //2 
//	printf("%d\n",  sizeof(int));//4
//	printf("%d\n",  sizeof(long));//4   sizeof(long)>=sizeof(int)
//	printf("%d\n",  sizeof(long long));//8
//	printf("%d\n",  sizeof(float));//4
//	printf("%d\n",  sizeof(double));// 8
//	return 0;
//}


//int main()
//{
//	int age = 18;  // ��������    ����  ���� = 0���Ƽ���
//		                  // ��������    ����   ���� �����Ƽ���
//	float bodysize = 123;
//	age = age + 4;
//	double weight = 87.5;
//	weight = weight + 12.5;
//	printf("%d\n",  age );
//	printf("%lf\n", weight);
//	printf("%s\n", "Helloworld"); //�ַ���
//	printf("%f\n", bodysize);
//
//	return 0;
//}

// ������ �ֲ�������ȫ�ֱ��� ��ȫ�ֱ�����ֲ�������ͻʱ���ֲ���������
//���ݼ��� scanf����

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 30;
//	scanf("%d %d",  & a, & b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//���������������
//�ֲ������������򣺱������ڵķ�Χ{}
//ȫ�ֱ������������� �������һ�±��� example   extern int g_val = 2022
//��������
//�������������ڣ������Ĵ���������֮���ʱ���
//�ֲ���������������:{} ����ֲ���Χ-���ֲ���Χ
//ȫ�ֱ�������������:�������������



//����
//���泣��
//int main()
//{
//	3.14;
//	10;//���γ���
//
//	'a';
//	"abcdef";
//
//	return 0;
//
//}
//const���εĳ�����
//#define MAX 10000000
//int main()
//{
//	int n = MAX;
//
//	printf("%d\n", n);
//
//	return 0;
//}
//#define����ı�ʶ������ 
//ö�ٳ���--����һһ�оٵĳ���


//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s =  MALE;
//
//	return 0;
//}

//�ַ���
//int main()
//{
//	//�ַ�����--������һ����ͬ���͵�Ԫ�� 
//	//�ַ����ڽ�β��λ��������һ��\0���ַ�
//	//\0���ַ����Ľ�����־
//	char arr[] = "hello\0";
//
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "helloworld";
//	int len = strlen("helloworld");
//	printf("%d\n",strlen ("helloworld"));
//	return 0;
//}
////ת���ַ�---ת����������˼
////printf�ڴ�ӡ���ݵ�ʱ�򣬿���ָ����ӡ�ĸ�ʽ 
//int main()
//{
//	printf("C:\\test\\test.c");
//	printf("\a\a\a\a\a");
//	
//	return 0;
//}
//
//int main()
//{
//	printf("%c\n", '\130');//8���Ƶ�����ת����ʮ���Ƶ�����
//
//	return 0;
//}  


//if���
//int main()
//{
//	int input = 0;//�����ֵ
//	printf("����һ����");
//	printf("�����Ϊŷ���𣿣�1/0��\n");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("��\n");
//	else
//		printf("���ź�\n");
//
//	return 0;
//}

//ѭ����� while for do....while

//int main()
//{
//	printf("����һ���뵱ŷ�ʵ����𣿣�1/0��\n");
//	int coding = 0;
//	scanf("%d", & coding);
//	if (coding == 1)
//	{
//		while (coding < 300000)
//		{
//
//			printf("���뵱ŷ��!:%d\n", coding);
//			coding++;
//
//		}
//		if (coding == 300000)
//			printf("�ѷǳɹ�\n");
//	}
//	else
//		printf("���ź�\n");
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, & num2);
//	int sum = Add(num1,num2);
//	printf("%d\n", sum);
//
//	return 0;
//}
//����--һ����ͬ���͵�Ԫ�ؼ���
//������ͨ���±������ʵ� ��0-������������
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	char ch[5] = {'a','b','c'};//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
//
//
//
//	return 0;
//}
//������
//������������+ - * / %
//��λ��������>>  <<

//int main()
//{
//	double a = 9 / 2.0;
//	printf("%f\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 9 % 2;//-ȡģ���ࣩ
//	printf("%d\n", a);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = a << 1;   //���Ʋ����� ---�ƶ����Ƕ�����λ
//	printf("%d\n", b);
//	return 0;
//}

//λ������
//&��λ��
//  |��λ��
//^��λ���
//��ֵ������  += -= /= *= >>= <<=
//int main()
//{
//	int a = 5;
//	a /= 1;
//	printf("%d\n", a);
//	return 0;
//}
//��Ŀ��������ֻ��һ��������                   a+b +��2����������˫Ŀ������
// !      �߼�������                                     
// -      ��ֵ   
// +      ��ֵ 
// &      ȡ��ַ   
// sizeof �����������ͳ���
// ~      ��һ�����Ķ����ư�λȡ�� 
// --     ǰ�á����� --
// ++     ǰ�á����� ++
// *      ��ӷ��ʲ������������ò�������
// �����ͣ� ǿ������ת��
//int main()
//{
//	int a = 0;// 0��ʾ�٣���0��ʾ��
//	printf("%d\n", !a);
//
//	if (a)
//
//	{
//	  
//	
//	//���aΪ��
//	}
//
//
//
//	if (!a)
//
//	{
//	
//	
//	//���aΪ��
//	}
//
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//�������������ܴ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0]));//4
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}
int main()
{
	int a = 0;
	printf("%d\n", ~a); //����������λ��λȡ���������ж�����λ�����֣�1-0��0-1    00000000000000000000000000000000---11111111111111111111111111111111
	return 0;
}
//�������ڴ��д�����ǲ���
//һ�������Ķ����Ʊ�ʾ��3��
//ԭ�롢���롢����
//-1��10000000000000000000000000000001��ԭ�룩
//   11111111111111111111111111111110 (����λ���䣬����λ��λȡ��----����)
//   11111111111111111111111111111111�����룩------��Ը��� ����+1
//��������ԭ�롢���롢������ͬ