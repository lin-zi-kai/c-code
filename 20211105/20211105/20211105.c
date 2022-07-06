//#include <stdio.h>
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if(i/10 ==9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;//分母
//	int n = 1;
//	float sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + n * (1.0 / i);
//		n = -n;
//	}
//	printf("%f", sum);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int arr[10];
//	printf("请输入十个整数：");
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, i * j);
//			if (i == j)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	scanf("%d", &i);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < i)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > i)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//} 


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("****   1. play    0.exit      ****\n");
//	printf("**********************************\n");
//}
// 
//void game()
//{
//	int guess = 0;
//	int r = rand() % 100 + 1;
//	while (1)
//	{
//		printf("猜数字：");
//		scanf("%d", &guess);
//		if (guess > r)
//		{
//			printf("猜大了……");
//		}
//		else if (guess < r)
//		{
//			printf("猜小了……");
//		}
//		else
//		{
//			printf("猜对了！！！");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("输入你的选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("非法选择");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int is_Prime(int x)
//{
//	int y = 0;
//	if (x == 1)
//	{
//		return 0;
//	}
//	for (y = 2; y <= sqrt(x); y++)
//	{
//		if (x % y == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		int ret = is_Prime(i);
//		if (ret == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int is_leap(n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}	
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入年份：");
//	scanf("%d", &n);
//	int ret = is_leap(n);
//	if (ret == 1)
//	{
//		printf("%d is a leap year", n);
//	}
//	else
//	{
//		printf("%d is not a leap year", n);
//	}
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int swap(int* x, int* y)
//{
//	int tmp;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入要交换的两个整数：");
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//}
//

//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void Table(int x)
//{	
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//			if (i == j)
//			{
//				printf("\n");
//			}
//	     }
//	}		
// }
//
//int main()
//{
//	int x = 0;
//	printf("请输入行数：");
//	scanf("%d", & x);
//	Table(x);
//	return 0;
//}

