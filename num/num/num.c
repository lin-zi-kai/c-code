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
		while (tmp/10)
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

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int a, b, c = 0;
//	printf("水仙花数为:\n");
//	for (n = 100; n <= 999; n++)
//	{
//		a = n / 100;
//		b = n / 10 % 10;
//		c = n % 100 % 10;
//		if (n == a * a * a + b * b * b + c * c * c)
//			printf("%d\n", n);
//	}
//	return 0;
//}
