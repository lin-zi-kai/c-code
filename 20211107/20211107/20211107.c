#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int thousand, hundred, ten, single;
//	printf("������һ����λ����1000~9999��");
//	scanf("%d", &num);
//	thousand = num / 1000;
//	hundred = (num - 1000 * thousand) / 100;
//	ten = (num - 1000 * thousand - 100 * hundred) / 10;
//	single = num % 10;
//	printf("%d��ǧλ����%d", num, thousand);
//	printf("%d�İ�λ����%d", num, hundred);
//	printf("%d��ʮλ����%d", num, ten);
//	printf("%d�ĸ�λ����%d", num, single);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int date, month, year;
	int sum = 0;
	printf("����������(eg.2005 2 28)��");
	scanf("%d%d%d", &year, &month, &date);
	switch (month)
	{
	    case 1:
		    sum = 0;
		    break;
		case 2:
			sum = 31;
			break;
		case 3:
			sum = 59;
			break;
		case 4:
			sum = 90;
			break;
		case 5:
			sum = 120;
			break;
		case 6:
			sum = 151;
			break;
		case 7:
			sum = 181;
			break;
		case 8:
			sum = 212;
			break;
		case 9:
			sum = 243;
			break;
		case 10:
			sum = 273;
			break;
		case 11:
			sum = 304;
			break;
		case 12:
			sum = 334;
			break;
		default:
			printf("error\n");
			break;
	}
	sum = sum + date;
	if ((year % 4 == 0 && year % 100 != 00 || year % 400 == 0) && month > 2)
	{
		sum++;
	}
	printf("%d��%d��%d����%d��ĵ�%d��", year, month, date, year, sum);
}