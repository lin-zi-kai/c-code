//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int n = money; //��ˮ��
//	int blank = money; //��ƿ
//	while (blank > 1)
//	{
//		n = n + blank / 2;
//		blank = blank / 2 + blank % 2;
//	}
//	printf("%d", n);
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

int main()
{
    char a[1000] = { 0 };
    int i = 0;
    for (i = 0; i < 1000; i++)
    {
        a[i] = -1 - i;
    }
    printf("%d", strlen(a));
    return 0;
}