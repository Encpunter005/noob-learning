#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int code = 0;
//	printf("�����Ϊŷ����(1/0)\n");
//	scanf("%d", &code);
//	if (code == 1)
//	{
//
//		while (code < 3000001)
//		{
//			code++;
//			printf("�����Ϊŷ�ʣ�%d\n", code);
//
//			if (code == 3000001)
//				printf("�ѷǳɹ���\n");
//
//		}
//
//	}
//	else
//		printf("���ź�\n");
//
//
//	return 0;
//}
//�ؼ���
//1.c�����ṩ�ģ������Լ���
//2.�����������ǹؼ���
//auto break case char const continue default do double else enum
//extern float for goto if int long register return short signed
//sizeof static struct switch typedef union unsigned void volatile while
//
//auto �Զ��������Զ��������Զ����٣��ֲ���������ÿ���ֲ���������auto���ε�
//extern �����������ⲿ����
//register �Ĵ����ؼ���
//int main()
//{
//	register int num = 1000;//����num��ֵ����ڼĴ�����
//	return 0;
//}
//����������ݿ��Դ洢�����
//�Ĵ��� ���ٻ��� �ڴ� Ӳ�� ����
// ��С   ��ʮMB
//�ٶ�Խ�죬�ռ�ԽС
//signed �з��ŵ� 10 -20
//unsigned �޷��ŵ�
//static ��̬��
//typedef ���Ͷ���
//union �����壨�����壩
//void �� - ��
//volatile ����
//define ���ǹؼ��֣���Ԥ����ָ��
//include ���ǹؼ��֣���Ԥ����ָ��

//typedef unsigned int u_int;//���������������壩
//int main()
//{
//	unsigned int num1 = 100;
//	u_int num2 = 1000;
//
//	return 0;
//}

//static - ��̬��
//1.static ���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ��� 


void test()
{
	int a = 1;
	a++;
	printf("%d\n", a);


}


int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	
	}


	return 0;
}