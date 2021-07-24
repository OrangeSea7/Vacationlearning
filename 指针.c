//变量都有地址，取出变量地址如下：
#include<stdio.h>
int main()
{	
	int num = 10;
	&num;//取出num的地址
	//注：这里的num 的4个字节，每个字节都有地址，取出的第一个字节的地址（较小的地址）
	printf("%p\n",&num); //打印地址，%p是以地址的形式打印
	return 0;

}
//地址如何定义指针变量
int num = 10;
int* p;//p为一个整型指针变量
p = &num;

// 指针的使用示例：
#include<stdio.h>
int main()
{	
	int num = 10;
	int *p = &num; //*是表示该变量是指针变量
	*p = 20;
	return 0;
}
//指针变量的大小

#include <stdio.h>
int main()
{ 
	printf("%d\n", sizeof(char *));  //sizeof是测量类型或变量长的运算符
	printf("%d\n", sizeof(short *)); 
	printf("%d\n", sizeof(int *)); 
	printf("%d\n", sizeof(double *)); 
	return 0;
}