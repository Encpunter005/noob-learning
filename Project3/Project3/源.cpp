#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//define���峣���ͺ�
//define��һ��Ԥ����ָ��
//1.define�������
#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}
//define�����,��Ĳ������滻

#define ADD(X,Y) ((X)+(Y))

//int main()
//{
//
//	printf("%d\n",4* ADD(2, 3));
//
//
//	return 0;
//}
//ָ�룺1.�ڴ�����ô��ŵģ�
//     2.һ���������ڴ浥Ԫ�Ƕ��ռ䣿
//     3.ָ�� ���� ��ַ
//32λ - 32����ַ�� - ������ - ͨ�� - 1/0
//64λ -
//���ź�ת����������Ϣ��1��0��ɵĶ���������
//���գ�һ���ڴ浥Ԫ��һ���ֽڣ�Ȼ������ַ


//ָ�����
//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ��- 4���ֽ�
//	printf("%p\n", &a);//%p ר��������ӡ��ӡ��ַ��
//	int * pa = &a;//pa��������ŵ�ַ�ģ���c������pa��ָ�������
//	//*˵��pa��ָ�����
//	//int˵��paִ�еĶ�����int���͵�
//	char ch = 'w';
//	char * pc = & ch;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//*�����ò�����*pa����ͨ��pa����ĵ�ַ���ҵ�a
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 400;
//	int* pc = &a;
//	*pc = 10000;
//	printf("%d\n", a);
//
//	return 0;
//}

//ָ������Ĵ�С 32λ 32bit-4byte 64λ 64bit-8byte
//int main()
//{
//	printf("%d\n",  sizeof(char*));//8
//	printf("%d\n",  sizeof(short*));//8
//	printf("%d\n",  sizeof(int*));//8
//	printf("%d\n",  sizeof(long*));//8
//	printf("%d\n",  sizeof(long long*));//8
//	printf("%d\n",  sizeof(float*));//8
//	printf("%d\n",  sizeof(double*));//8
//
//	return 0;
//}

//�ṹ�壬������c���Դ����µ����ͳ���
//����һ��ѧ��
//struct stu
//{
//	char name[20];//��Ա����
//	int age;
//	double score;
//	
//
//
//};
////����һ���������
//struct Book
//{
//
//	char name[20];
//	float price;
//	char id[30];
//
//
//
//
//};
//int main()
//{
//	struct stu s = { "����", 20 ,85.5 };//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1:%s %d %lf\n",s.name,s.age,s.score);//�ṹ�����.��Ա����
//	struct stu* ps = &s;
//	printf("2: %s %d %lf\n",( * ps).name ,(*ps).age,(*ps).score );
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա��
//	return 0;
//}















