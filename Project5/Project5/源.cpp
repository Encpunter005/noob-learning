#define  _CRT_SECURE_NO_WARNINGS 1





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
void swap(int x, int y)//�����������͵ĵط�д����void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}
int main()
{
	int a = 20;
	int b = 30;
	printf("a=%d,b=%d\n", a, b);
	swap(a, b);//�����������ͱ�����ֵ
	printf("a=%d,b=%d\n", a, b);
	return 0;
}