#define  _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//��֧���
//if switch
//ѭ�����
// while for (do while)
//
//���֧���
//int main()
//{
//	int a = 0;
//	printf("���δ����������(1/2/3)\n");
//	scanf("%d", &a);
//	if (a == 1)
//	{
//		printf("�ɹ��õ���offer\n");
//	}
//	else if (a == 2)
//	{
//		printf("��ҵʧ�ܣ��̳�����Ҳ�\n");
//	}
//	else
//	{
//		printf("�ؼ�������\n");//ֻ�ܵ�һ�����(��������)
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
//		printf("����");
//	}
//	else if (age >= 18 && age < 26)//&&����
//	{
//		printf("����");
//	}
//
//	else if (age >= 40 && age < 70)
//	{
//		printf("׳��");
//	}
//		
//	else if (age >= 60 && age <= 400);
//	{
//		printf("����");
//	}
//	
//	return 0;
//}
//c������0��ʾ�٣���0��ʾ��
//����else
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
//}//else������������ifƥ��
//��������c++��
//"��˾��д��"
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
//1.�ж�һ�����Ƿ�Ϊ����
//2.���1-100֮�������
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (1 == a % 2)
//	{
//		printf("������\n");
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
//		printf("������\n");
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
//switch���
//switch (���ͱ��ʽ)
//{
//       ����case��
//}
//default�Ӿ�
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
//		printf("�������");
//		break;
//
//
//	}
//
//
//	return 0;
//}
//ѭ�����
//int main()
//{
//
//	int i = 10;
//	while (i <= 100)
//	{
//		if (i == 50)
//			continue;//��������ѭ��continue����Ĵ��룬ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
//			//break;//whileѭ���У�break�������õ���ֹѭ��
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
//	int ch = getchar();//��ȡһ���ַ�
//	printf("%c\n", ch);
//	putchar(ch);//���һ���ַ�
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	//ctrl+z - getchar��ȡ����
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
//	printf("����������\n");
//	scanf("%s", password);//������������������Ǹ���ַ 
//	printf("��ȷ������(Y/N)\n");
//	//��������
//	//gets
//	//getchar();//����'\n'
//	int tmp = 0;
//	while ((tmp = getchar() ) != '\n')//��=��������������Ƿ���ȣ��������Ϊ��(�����)
//	{
//	
//		;
//	}
//
//	int ch = getchar();//getchar scanf���뺯����ֻҪ���ֻ������ж������ͻ���������
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
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
//forѭ�������ʽ1�����ʽ2�����ʽ3��
//  ѭ�����
//ִ��˳�� 1.��ʼ�������ʽ1 2.�жϣ����ʽ2 3.ѭ����� 4.���������ʽ3 5.->2. 6.->3. 7->4.
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
//		printf("������");
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
//����ѭ�����ٴ�
/*int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;


	return 0;
}*///0Ϊ�٣�ѭ������Ϊ0
//do
//   ѭ����� ��
//while�����ʽ����
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
//��һ������������ҵ������ĳ������n���۰�����㷨��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;//Ҫ���ҵ�����
//	scanf("%d", &k);
//    //��arr�������������в���k��7����ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
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
//			printf("�ҵ���,�±�:%d\n", mid);
//			break;
//		
//		}
//	
//	}
//	if (left > right)
// 
//	{
//		printf("�Ҳ���\n");
//	}
//
//
//	return 0;
//}
//��д���룬��hi����ַ��������ƶ������м���
#include <string.h>//strlen strcmp
#include <Windows.h>
#include <WinBase.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;//�����±��0��ʼ
//	while (left <= right)
//	{
//
// 
//
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//Sleep(600);
//		//system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//
//	return 0;
//}
//��д����ʵ�֣�ģ���û���¼����������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳����򡣣�
//int main()
//{
//	int i = 0;
//
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//�����ַ����Ƚϣ�����ʹ��==,Ӧ��ʹ��strcmp:�Ƚ��ַ�������,�Ƚ��ַ�����ֵ
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("��������������룡\n");
//		}
//	
//
//	}
//	if (i == 3)
//	{
//		printf("�������Σ���¼ʧ�ܣ���\n");
//	
//	}
//
//	return 0;
//}
//��������Ϸʵ��
//1.�Զ�����һ��1-100֮��������
//2.������
//a.�¶��ˣ��͹�ϲ�㣬��Ϸ����
//b.��´��ˣ��������´��ˣ����ǲ�С�ˣ������£�֪���¶�
//3.��Ϸһֱ�棬�����˳���Ϸ
//void menu()
//{
//	printf("******************************\n");
//	printf("***********1.PLAY*************\n");
//	printf("***********0.EXIT*************\n");
//	printf("******************************\n");
//}
//��������Ϸ��ʵ��
//1.���������-rand���� - <stdlib.h>
//2.������
#include <stdlib.h>
#include <time.h>
//RAND_MAX rand����������һ��0-32767֮�������
//ʱ��-ʱ���
//void game()
//{
//	
//	int ret = rand()%100+1;//%100��������0-99��Ȼ��+1����Χ��1-100 
//	//printf("%d\n", ret);
//	int guess = 0;
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
//			break;
//		}
//	}
//
//}
//int main()
//
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//srand��Ҫһ��unsigned int ��ֵ
//	do
//	{
//		
//		menu();
//		printf("��ѡ��:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("������ѡ��\n");
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
//	printf("�����Ϊһ��ŷ����(1/2)\n");
//	scanf("%d", &choose);
//	switch (choose)
//	{
//	case 1:
//	{
//		while (choose < 30001)
//		{
//			choose++;
//			printf("���뵱ŷ�ʣ�%d\n", choose);
//
//
//		}
//		if (choose == 30001)
//		{
//			printf("�ѷǳɹ�\n");
//			break;
//		}
//	}
//	default:
//		printf("���ź�\n");
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
//		printf("������ں�:\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456789") == 0)
//		{
//			printf("�ں���ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�ںŴ��������ԣ�\n");
//		}
//			
//	
//	
//	}
//	if (i == 5)
//	{
//		printf("�ж�Զ����Զ\n");
//	}
//	return 0;
//}

//void search()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	printf("������Ҫ���ҵ�����\n");
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
//			printf("�ҵ���\n");
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//	
//		printf("�Ҳ�������\n");
//	
//	}
//
//
//
//
//}
//int main()
//{
//	printf("�����ֲ�����1-20��\n");
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
//		printf("�����ң���!\n");
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
//F10�����
//F11�����
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
//�������֣��Ӵ�С���
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//����
	scanf("%d %d %d", &a, &b, &c);
	//����
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
	//���
	printf("%d %d %d\n", a, b, c);






	return 0;
}


		

