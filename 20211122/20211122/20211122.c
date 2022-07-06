#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void print(int m)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2) 
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

#include <stdio.h>

void swap(int x,int y)
{
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	printf("%d %d", x, y);
}

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	swap(m, n);
	return 0;
}