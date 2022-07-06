#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Hanoi(int n,char pillar1,char pillar2,char pillar3) //1为起始柱，2为辅助柱，3为目标柱
{
	if (1 == n)
	{
		printf("移动第%d个：%c→%c\n", n, pillar1, pillar3);
	}
	else if (n > 1)
	{
		Hanoi(n - 1, pillar1, pillar3, pillar2);
		printf("移动第%d个:%c→%c\n", n, pillar1, pillar3);
		Hanoi(n - 1, pillar2, pillar1, pillar3);
	}
	else
	{
		printf("输入错误,重新选择\n");
		main();
	}
}

int main()
{
	int n = 0;
	printf("要来多少个圆盘？\n");
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	return 0;
}