#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//���� 
//�⺯����
// io����������������� printf scanf getchar putchar
// �ַ����������� :strlen strcmp toupper(Сдת��д)
// �ڴ�������� :mcmcpy mcmcp memset
// ʱ��|���ں��� :time
// ��ѧ���� :sqrt pow
// �����⺯��
//�Զ��庯��
int main()
{
	/*char arr[20] = { 0 };*/
	char arr2[] = "hello world\0";
	memset(arr2, 'x', 5);//�滻�ַ�
	
	//strcpy(arr, arr2);
	printf("%s", arr2);

	return 0;
}