#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Hanoi(int n,char pillar1,char pillar2,char pillar3) //1Ϊ��ʼ����2Ϊ��������3ΪĿ����
{
	if (1 == n)
	{
		printf("�ƶ���%d����%c��%c\n", n, pillar1, pillar3);
	}
	else if (n > 1)
	{
		Hanoi(n - 1, pillar1, pillar3, pillar2);
		printf("�ƶ���%d��:%c��%c\n", n, pillar1, pillar3);
		Hanoi(n - 1, pillar2, pillar1, pillar3);
	}
	else
	{
		printf("�������,����ѡ��\n");
		main();
	}
}

int main()
{
	int n = 0;
	printf("Ҫ�����ٸ�Բ�̣�\n");
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	return 0;
}