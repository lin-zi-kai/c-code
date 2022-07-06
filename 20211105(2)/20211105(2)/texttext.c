//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);	
//	}		
//	printf("%d\n", x % 10);
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入一位整数：");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int fac(int num)          //非递归
//{
//	int i = num - 1;
//	while (i > 0)
//	{
//		num = num * i;
//		i--;
//	}
//	printf("%d", num);
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入整数：");
//	scanf("%d", &n);
//	fac(n);
//	return 0;
//}
 

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int fac(int num)     //递归
//{
//	if (num == 0)
//	{
//		return 1;
//	}
//	return fac(num - 1) * num;
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入整数：");
//	scanf("%d", &n);
//	printf("%d", fac(n));
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		*str++;
//		count++;
//	}
//	return count;
//}


//#define _crt_secure_no_warnings 1
//#include <stdio.h>
//int strlen(char* str)
//{
//	if ('\0' == *str)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + strlen(1 + str);
//	}
//}
//
//int main()
//{
//	int r = 0;
//	char ch[] = "\0";
//	scanf("%s", ch);
//	r = strlen(ch);
//	printf("%d", r);
//	return 0;
//}


//#include <stdio.h>
//void reverse_string(char* string)
//{
//	if (*string != '\0')
//	{
//		string++;
//		reverse_string(string);
//		printf("%c", *(string - 1));
//	}
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//DigitSum(n)
//{
//	int m = 0;
//	int sum = 0;
//	if (n != 0)
//	{
//		m = n % 10;
//		n = n / 10;
//		sum = m + DigitSum(n);
//	}
//	return sum;
//}
//
//int main()
//{
//	int i = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &i);
//	printf("%d",DigitSum(i));
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int power(int n,int k)
//{
//	k--;
//	if (k == 0)
//	{
//		return n;
//	}
//	else
//	{
//		return n * power(n, k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入整数n和次方k：");
//	scanf("%d%d", &n,&k);
//	printf("%d", power(n, k));
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int fib(int n)
//{
//	int num = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}

int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	if (n <= 2)
	{
		return 1; 
	}
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	printf("请输入整数：");
	scanf("%d", &n);
	printf("%d", fib(n));
	return 0;
}