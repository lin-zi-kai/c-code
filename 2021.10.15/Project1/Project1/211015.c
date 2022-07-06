////教材上的第二个程序 求圆面积
//#include <stdio.h>
//#define PI 3.1415926
//int main()
//{
//	float  r, area;
//	printf("请输入圆的半径：");
//	scanf_s("%f",&r);
//	area = PI * r * r;
//	printf("圆的面积为：%f", area);
//	return 0;
//}

//
//教材上的第三个程序  求某日为一年中第几天
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
	double basewages;/*基本工资*/
	int workingage;/*工龄*/
	double agewages, realwages, sumwages;/*工龄工资，实发工资，总工资*/
	printf("输入基本工资：");
	scanf("%lf", &basewages);
	printf("输入工龄：");
	scanf("%d", &workingage);
	agewages = basewages * 0.05 * workingage;
	sumwages = basewages + agewages;
	realwages = sumwages * (1 - 0.06) * (1 - 0.02);
	printf("实发工资为：%lf", realwages);
	return 0;
}