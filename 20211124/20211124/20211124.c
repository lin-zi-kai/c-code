//#include <stdio.h>
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int* p = arr;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//void reverse(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char str[] = { 0 };
//    while (gets(str))
//    {
//        reverse(str);
//        printf("%s\n", str);
//    }
//    memset(str, 0, sizeof(str) / sizeof(str[0]));
//    return 0;
//}

////求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
////例如：2 + 22 + 222 + 2222 + 22222
#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int num = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		num = num * 10 + a;
//		sum = sum + num;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("      *\n");
//	printf("     ***\n");
//	printf("    *****\n");
//	printf("   *******\n");
//	printf("  *********\n");
//	printf(" ***********\n");
//	printf("*************\n");
//	printf(" ***********\n");
//	printf("  *********\n");
//	printf("   *******\n");
//	printf("    *****\n");
//	printf("     ***\n");
//	printf("      *\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}\

#include <stdio.h>
#include <math.h>
int main()
{
	int n = 0;
	for (n = 0; n <= 100000; n++)
	{
		int count = 1;
		int tmp = n;
		int sum = 0;
		while (tmp / 10)
		{
			tmp = tmp / 10;
			count++;
		}
		tmp = n;
		while (tmp)
		{
			sum = pow(tmp % 10, count) + sum;
			tmp = tmp / 10;
		}
		if (sum == n)
			printf("%d\n", sum);
	}
	return 0;
}