#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);	
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
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
//}

//#include <stdio.h>
//int main()
//{
//	int yh[10][10] = { 1 };
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		yh[i][0] = 1;
//		for (j = 1; j < i + 1; j++)
//		{
//			yh[i][j] = yh[i-1][j-1] + yh[i-1][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i + 1; j++)
//		{
//			printf("%d ", yh[i][j]);
//		}
//		putchar('\n');
//	}
//}


//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//
//B˵����C��
//
//C˵����D��
//
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���

//#include <stdio.h>
//int main()
//{
//	int killer;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("killer is %c", killer);
//	}
//	return 0;
//}

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//#include <stdio.h>
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1 && (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1)
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d", a, b, c, d, e);
//							}
//						}
//						
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



#include<stdio.h>
int main() {
    int a[20] = { 89,111,117,32,99,97,110,32,100,111,32,103,101,32,106,105,32,101,114,33 };
    for (int i = 0; i < 20; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}
