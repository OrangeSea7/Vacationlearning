//�������е�ַ��ȡ��������ַ���£�
#include<stdio.h>
int main()
{	
	int num = 10;
	&num;//ȡ��num�ĵ�ַ
	//ע�������num ��4���ֽڣ�ÿ���ֽڶ��е�ַ��ȡ���ĵ�һ���ֽڵĵ�ַ����С�ĵ�ַ��
	printf("%p\n",&num); //��ӡ��ַ��%p���Ե�ַ����ʽ��ӡ
	return 0;

}
//��ַ��ζ���ָ�����
int num = 10;
int* p;//pΪһ������ָ�����
p = &num;

// ָ���ʹ��ʾ����
#include<stdio.h>
int main()
{	
	int num = 10;
	int *p = &num; //*�Ǳ�ʾ�ñ�����ָ�����
	*p = 20;
	return 0;
}
//ָ������Ĵ�С

#include <stdio.h>
int main()
{ 
	printf("%d\n", sizeof(char *));  //sizeof�ǲ������ͻ�������������
	printf("%d\n", sizeof(short *)); 
	printf("%d\n", sizeof(int *)); 
	printf("%d\n", sizeof(double *)); 
	return 0;
}