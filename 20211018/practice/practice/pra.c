//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a, b = 0;
//	printf("����������������\n");
//	scanf("%d %d",&a,&b);
//	if (a > b)
//		printf("%d\n", a);
//	else(a < b);
//		printf("%d\n",b);
//			
//	return 0;
//}
//
//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", sum(a));
//	}
//}

//#include <stdio.h>
//int main()
//{
////	int a;
////	scanf_s("%d", & a);
////	if (a % 2 == 0)
////		printf("a��������");
////	else
////		printf("a������");
////	return 0;
////}
//

//
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//}


//ѧ��ϵͳ��ţ�ͣ�
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    struct Stu
//    {
//        char name[10];
//        int age;
//        char gender[5];
//    };
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    struct Stu s = { "Jack",18,"man" };
//    printf("%s    ""%d     ""%s", s.name, s.age, s.gender);
//    return 0;
//}

//�����������������Ӵ�С����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	int max, mid, min;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		max = a > c ? a : c;
//		mid = b > c ? b : c;
//		min = b > c ? c : b;
//	}
//	else
//	{
//		max = b > c ? b : c;
//		mid = a > c ? a : c;
//		min = a > c ? c : a;
//	}
//	printf("%d %d %d",  max,mid, min);
//	return 0;
//}

//��ӡ100����3�ı���
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	while (a < 100)
//	{
//		printf("%d\n", a);
//		a = a + 3;
//	}
//	return 0;
//}


//�����������Լ��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int x, y;
//	printf("����������������");
//	scanf("%d %d", &x, &y);
//	if (x >= y)
//	{
//		int z = x % y;
//		while (z != 0)
//		{
//			x = y;
//			y = z;
//			z = x % y;
//		}
//		printf("%d", y);
//	}
//	else
//	{
//		int t = y % x;
//		while (t != 0)
//		{
//			y = x;
//			x = t;
//			t = y % x;
//		}
//		printf("%d", x);
//	}
//	return 0;
//}



//��ӡ1000��2000֮�������
//#include <stdio.h>
//int main()
//{
//	int year = 1000;
//	while (year <= 2000)
//	{
//		if (year % 100 == 0)
//		{
//			if (year % 400 == 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		else
//		{
//			if (year % 4 == 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		year++;
//	}
//	return 0;
//}


//��ӡ100-200֮�������
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	for (a = 100; a <=200 ; a++)
	{
		for (b = 2;  b < a; b++)
		{
			if (a % b == 0)
				break;
		}
		if (b == a)
			printf("%d ", a);
	}
	return 0;
}