#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//һά����
//���� -- һ����ͬ����Ԫ�صļ���
//������ʽ
//type_t arr_name [const_n];
//type_t ��ָ�����Ԫ������
//const_n��һ���������ʽ������ָ������Ĵ�С
//int main()
//{
//	char arr[20]="helloword";
//
//	printf("%s\n", arr);
//	return 0;
//}
//����ĳ�ʼ��
//int main()
//{
//	int a = 10;//��ʼ��
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};//��ȫ��ʼ��
//	int arr2[10] = { 1,2,3,4,5 };//����ȫ��ʼ��
//	int arr3[] = { 1,2,3,4,5 };
//	int arr4[5] = { 1,2,3,4,5 };
//	char ch[] = "helloworld";
//	char ch1[] = "bit";// b i t \0
//	char ch2[] = { 'b','i','t' };// b i t û��\0
//	printf("%s\n", ch);
//	printf("%d\n", strlen(ch1));
//	printf("%d\n", strlen(ch2));
//	return 0;
//}
//һά���� []�±����ò�����--������ʲ�����
//int main()
//{
//	int arr[10] = { 1 };
//	arr[4] = 5;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//һά�������ڴ��еĴ洢
//1.һά�������ڴ��е���������ŵ�
//2.���������±����������ַ���ɵ͵��߱仯��
//int main()
//{
//	printf("%x\n", 0x12);
//	printf("%p\n", 0x12);
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i,&arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	                                                              
//	return 0;
//}
//��ά����
//int main()
//{
//	//����
//	//int arr[3][4];//arr�� ��
//	//char ch[1][4];
//	//��ʼ��
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int arr2[3][4] = {1,2,3,4,5,6,7};//����ȫ��ʼ�� --���油0���ַ���\0
//	int arr3[][4] = { {1,2},{3,4},{4,5} };//��ά�����п���ʡ�ԣ��в�����ʡ��
//	return 0;
//}
//��ά�����ʹ��
//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//	}printf("\n");
//	return 0;
//}
//��ά�������ڴ��еĴ洢
//��λ�������ڴ���Ҳ��������ŵģ�һ���ڲ�����������Ҳ��������
//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//			for (j = 0; j < 4; j++)
//			{
//				printf("&arr[%d][%d]=%p \n",i,j,&arr[i][j]);
//			}
//	}
//	return 0;
// }
//������Ϊ��������
//ð�������˼�룺
//����Ԫ�ؽ��бȽϣ����ҿ��ܵĻ���Ҫ����
//void bubble_sort(int arr[],int sz)//�β�arr������ָ��
//{
//	
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//	//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		
//		}
//	}
//	
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1.0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����Ϊ����
//	bubble_sort(arr,sz);//���鴫�ε�ʱ�򣬴��ݵ���ʵ��������Ԫ�صĵ�ַ
//	return 0;
//}
//��������ʲô��
//��������������Ԫ�صĵ�ַ
//������2������
//1.sizeof����������--��������ʾ��������-���������������Ĵ�С����λ���ֽ�
//2.&������ ---��������ʾ��������--ȡ��������������ĵ�ַ
//int main()
//{
//	
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);//&arrȡ����������ĵ�ַ
//	int sz = sizeof(arr);//��������ʾ��������
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);//����������Ԫ�صĵ�ַ
//	return 0;
//}
//int swap(int* a, int* b)
//{
//	int t = 0;
//	t = *a;
//	*a = *b;
//	*b = t;
//	return *a, * b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("%d,%d\n", a, b);
//	return 0;
//}
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;//�±�
//	int tmp = arr[left];
//	while (left <right)
//	{
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		tmp = arr[left];
//		right--;
//	}
//
//}
//void init(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	for (int j =0;j<sz;j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//
//}
//int main()
//{
//	int arr[] = { 0 ,1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr,sz);
//	print(arr, sz);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int arr1[] = { 4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr1[i];
//		arr1[i] = tmp;
//		
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//ָ��
//int main()
//{
//	int a = 0;
//	int* p = &a;//ָ�����
//	printf("%d", a);
//	return 0;
//}
//ָ�����͵�����
//int main()
//{
//	int a = 0x1114534231;//һ��ʮ������λ��ʾ4��������λ
//	//������
//	char* pc = &a;
//	*pc = 0;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	printf("%p\n", *pa);
//	printf("%p\n", *pa+1);
//	printf("%p\n", *pa+2);
//	printf("%p\n", *pa+3);
//	return 0;
//}
//1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2.ָ�����;����ˣ�ָ����һ�������߶�Զ��������
//int main()
//{
//	int arrp[10] = { 0 };
//	int* pa = arrp;
//	for (int i = 0; i < 10; i++)
//	{
//		*(pa + i)=1;
//	}
//	return 0;
//}
//Ұָ��
//int main()
//{
//	int* p;//�ֲ�ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	*p = 20;// �Ƿ������ڴ���
//	return 0;
//}
// ָ��Խ��
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i <= 10; i++)
//	{
//		*p = i;//i=10ʱ��Խ����--�Ƿ������ڴ�
//		p++;
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}//a�ֲ�����������
//int main()
//{
//	int *p=test();
//	*p = 20;
//	return 0;
//}
//���Ұָ�롢
// 1.ָ���ʼ��
// 2.С��ָ��Խ��
// 3.ָ��ָ��ռ��ͷż�ʱ��NULL
// 4.ָ��ʹ��֮ǰ�����Ч��
//int main()
//{
//	int* p = NULL;//��ǰ��֪��pӦ�ó�ʼ��ʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	//��ȷ֪����ʼ����ֵ
//	int a = 10;
//	int* pa = &a;
//	//c���Ա����ǲ����������Խ����Ϊ
//	int* ptr = NULL;
//	if (*ptr != NULL)
//	{
//		*ptr = 10;
//	}
//	return 0;
//}
//ָ��+-����
#define VALUE 5
//int main()
//{
//	float values[VALUE];
//	float* vp;
//	for (vp = &values[0]; vp < &values[VALUE];)
//	{
//		*vp++ = 0;//ָ��+����---ָ��Ĺ�ϵ���㣡
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (*p <= *pend)
//	{
//		printf("%d\n",*p);
//		*p++;
//	}
//	return 0;
//}
// ָ��-ָ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//	//ָ��-ָ��֮��õ�����ָ��֮���Ԫ�ظ���
//}
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char ch[] = { "abc" };
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}
//ָ��Ĺ�ϵ����
//int main()
//{
//	float values[VALUE];
//	float* vp;
//	for (vp = &values[VALUE]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}
//ָ��������
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%p <===> %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//	//[] ��һ���������� 2��arr������������ 
//	//arr[2] == *(p + 2);
//	return 0;
//}
//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//	int* *ppa = &pa;//paҲ�Ǹ�������&paȡ��pa���ڴ��е���ʼ��ַ,����ָ�����
//	int*** pppa = &ppa;//����ָ��
//	return 0;
//}
//ָ������---�������Ǹ�����
//int main()
//{
//	int arr[10];//��������--������ε����������������
//	char ch[5];//�ַ�����--��ŵ����ַ�
//	//ָ������--���ָ�������
//	int* parr[5];//����ָ�������
//	char* pch[5];
//	return 0;
//}
//������
//int main()
//{
//	int a = 1234;
//	printf("%d", printf("%d", printf("%d", printf("%d", a))));//printf����ֵ���ַ����ĸ���
//	return 0;
//}
//�ṹ�����
//struct b
//{
//	char c;
//	double d;
//	short s;
//};
//struct Stu
//{
//	//��Ա����
//	struct b sb;
//	int height;
//	char name[20];//����
//	int age;
//} s1,s2;//������Ҳ�ǽṹ�������ȫ�֣�
//int main()
//{
//	struct Stu s = { {'w',1.00,20},175,"zhangsan",19 };//����
//	return 0;
//}
//�ṹ���Ա�ķ���
//. ->
//struct b
//{
//	char c;
//	double d;
//	short s;
//};
//struct Stu
//{
//	//��Ա����
//	struct b sb;
//	int height;
//	char name[20];//����
//	int age;
//} s1,s2;//������Ҳ�ǽṹ�������ȫ�֣�
//int main()
//{
//	struct Stu s = { {'w',1.00,20},175,"zhangsan",19 };//����
//	printf("%c\n", s.sb.c);
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	return 0;
//}
//�ṹ�崫��
//struct b
//{
//	char c;
//	double d;
//	short s;
//};
//struct Stu
//{
//	//��Ա����
//	struct b sb;
//	int height;
//	char name[20];//����
//	int age;
//} s1,s2;//������Ҳ�ǽṹ�������ȫ�֣�
//void print1(struct Stu t)
//{
//	printf("%d %c %d\n", t.sb.s, t.sb.c, t.height);
//}
//void print2(struct Stu* ps)
//{
//	printf("%c %lf %d", ps->sb.c, ps->sb.d, ps->sb.s);
//}
//int main()
//{
//	struct Stu s = { {'w',1.00,20},175,"zhangsan",19 };
//	//дһ��������ӡs������
//	print1(s);//��ֵ����--��Ҫ�����ڴ�ռ䣬ʱ���˷�
//	print2(&s);//��ַ����--Ч�ʸ��ߣ�����
//	return 0;
//}
//�������õĲ���ѹջ
//ջ����һ�����ݽṹ
//�Ƚ��ĺ����������ȳ�
//ѹջ����ջ
//  3
//  2
//  1
//����ջ֡�Ĵ���������
int add(int x, int y)//x,y����add���ٵ��ڴ�ռ���
{
	return x + y;
}
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	c = add(a, b);//������������--ѹջ����--��������a',b'�ռ�,a'->x,b'->y
	return 0;
}