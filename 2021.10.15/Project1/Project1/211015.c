////�̲��ϵĵڶ������� ��Բ���
//#include <stdio.h>
//#define PI 3.1415926
//int main()
//{
//	float  r, area;
//	printf("������Բ�İ뾶��");
//	scanf_s("%f",&r);
//	area = PI * r * r;
//	printf("Բ�����Ϊ��%f", area);
//	return 0;
//}

//
//�̲��ϵĵ���������  ��ĳ��Ϊһ���еڼ���
//#include <stdio.h>
//int mouthdays(int iyear)


//#include <stdio.h>
//int main()
//{
//	printf("***\n**\n*\n");
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double basewages;/*��������*/
	int workingage;/*����*/
	double agewages, realwages, sumwages;/*���乤�ʣ�ʵ�����ʣ��ܹ���*/
	printf("����������ʣ�");
	scanf("%lf", &basewages);
	printf("���빤�䣺");
	scanf("%d", &workingage);
	agewages = basewages * 0.05 * workingage;
	sumwages = basewages + agewages;
	realwages = sumwages * (1 - 0.06) * (1 - 0.02);
	printf("ʵ������Ϊ��%lf", realwages);
	return 0;
}