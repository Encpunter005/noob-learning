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
//��һ������������ҵ������ĳ������n
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;//Ҫ���ҵ�����
	scanf("%d", &k);
    //��arr�������������в���k��7����ֵ
	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
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
			printf("�ҵ���,�±�:%d\n", mid);
			break;
		
		}
	
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}


	return 0;
}


















