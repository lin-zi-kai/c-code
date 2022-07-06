#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	printf(" %d\n", sizeof(long double));
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	double weight = 47.4;
//	age = age + 1;
//	weight = weight + 10;
//	printf("%d\n", age);
//	printf("%lf\n",weight);
//	return 0;
//}

//写一个代码求两个整数的和
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("请输入两个数");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}