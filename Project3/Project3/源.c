//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int m = 0;
//	int n = 1;
//	scanf("%d", &m);
//	for (i = 1; i <= m; m--)
//	{
//		n = m * n;
//	}
//	printf("%d", n);
//	return 0;
//} 


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int flog(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return flog(n - 1) + flog(n - 2);
}
int  main()
{
	int n = 0;
	int ways = 0;
	printf("请输入台阶的数量：");
	scanf("%d", &n);
	ways = flog(n);
	printf("青蛙有%d种跳法", ways);
	return 0;
}