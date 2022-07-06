#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100 //最大课程数量

int num = 0, n = 0;//num现有课程数量，n新增课程数量

void InsertClass();
void PrintClass();
void SaveClass();
void DelClass();
void ModClass();
void FindClass();


struct ClassSystem
{
	char Id[10];          //课程编号
	char name[20];    //课程名称
	char quality[20]; //课程性质
	int period;       //学时（授课学时、实验或上机学时）
	float credits;      //学分
	char semester[30];  //开课学期	
}CS[N];

void menu()
{
	printf("***********欢迎使用课程信息管理系统**********\n\n");
	printf("***1.课程基本信息录入   2.课程基本信息显示***\n\n");
	printf("***3.课程基本信息保存   4.课程基本信息删除***\n\n");
	printf("***5.课程基本信息修改   6.课程基本信息查询***\n\n");
	printf("***             -1.退出系统               ***\n\n");
	printf("*********************************************\n\n");
	printf("请输入您的操作选项：");
}

int main()
{

	int control = 0;
	int x = 0;
	while (control != -1)
	{
		menu();
		scanf("%d", &control);
		switch (control)
		{
		case 1:
			InsertClass();
			break;
		case 2:
			PrintClass();
			break;
		case 3:
			SaveClass();
			break;
		case 4:
			DelClass();
			break;
		case 5:
			ModClass();
			break;
		case 6:
			FindClass();
			break;
		default:
			printf("选择错误，请重新选择！");
			break;
		}
	}
	return 0;
}

void InsertClass() 
{
	int i = num;
	int	j, flag;
	printf("请输入待增加的课程数:");
	scanf("%d", &n);
	if (n > 0) 
	{
		do
		{
			flag = 1;
			while (flag)
			{
				flag = 0;
				printf("请输入第%d个课程的课程编号:", i + 1);
				scanf("%s", CS[i].Id);
				for (j = 0; j < i; j++) 
				{
					if (strcmp(CS[i].Id, CS[j].Id) == 0)
					{
						printf("该编号已存在，请重新输入！\n");
						flag = 1;
						break;
					}
				}
			}
			printf("请输入第%d 个课程的名称:", i + 1);
			scanf("%s", CS[i].name);
			printf("请输入第%d 个课程的性质:", i + 1);
			scanf("%s", CS[i].quality);
			printf("请输入第%d 个课程的学时:", i + 1);
			scanf(" %d", &CS[i].period);
			printf("请输入第%d 个课程的学分:", i + 1);
			scanf(" %f", &CS[i].credits);
			printf("请输入第%d 个课程的开课学期:", i + 1);
			scanf("%s", CS[i].semester);
			
			if (0 == flag) 
			{
				i++;
			}
		} while (i < num + n);
	}
	num += n;
	printf("课程信息增加完毕！！！\n");
	system("pause");
}

void PrintClass()
{
	int i = 0;
	printf("共有%d个课程：\n", num);
	if (num != 0)
	{
		printf("课程编号\t课程名称\t课程性质\t学时\t学分\t开课学期\n");
		for (i = 0; i < num; i++)
		{
			printf("%s\t\t%s\t%s  \t\t%d \t%.1f \t%s\n",
				CS[i].Id,CS[i].name, CS[i].quality,CS[i].period,CS[i].credits,CS[i].semester);

		}
	}
	system("pause");
}

void SaveClass()
{
	int i;
	FILE* fp = fopen("ClassSystem.txt", "w");
	for (i = 0; i < n; i++)
	{
		fprintf(fp, "%s%s%s%d%f%s\n", 
			CS[i].Id, CS[i].name, CS[i].quality, CS[i].period, CS[i].credits, CS[i].semester);
	}
	printf("保存成功\n");
	fclose(fp);
	system("pause");
}

void DelClass()
{
	int i, j, flag = 0;
	char arr[20];
	printf("请输入要删除课程的编号:\n");
	scanf("%s", arr);
	for (i = 0; i < num; i++) 
	{
		if (strcmp(CS[i].Id, arr) == 0)
		{
			flag = 1;
			for (j = i; j < num - 1; j++)
			{
				CS[j] = CS[j + 1];
			}
		}
	}
	if (0 == flag) 
	{
		printf("该编号不存在\n");
	}
	if (1 == flag)
	{
		printf("删除成功\n");		
		num--;
	}
	system("pause");
}

void ModClass()
{
	int i, j, choice;
	int newperiod;
	char a[20], newsemester[30], newname[20], newquality[20];
	float newcredits;
	printf("请输入要要修改的课程的编号:");
	scanf("%s", a);
	for (i = 0; i < num; i++) 
	{
		if (strcmp(CS[i].Id, a) == 0) 
		{
			j = i;
			printf("------------------\n");
			printf("1.修改课程名称\n");
			printf("2.修改课程性质\n");
			printf("3.修改学时\n");
			printf("4.修改学分\n");
			printf("5.修改开课学期\n");
			printf("0.退出本菜单\n");
			printf("------------------\n");
			while (1)
			{
				printf("请输入您的选择:");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("请输入新的课程名称:\n");
					scanf("%s", newname);
					strcpy(CS[j].name, newname);
					break;
				case 2:
					printf("请输入新的课程性质:\n");
					scanf("%s", newquality);
					strcpy(CS[j].quality, newquality);
					break;
				case 3:
					printf("请输入新的学时:\n");
					scanf("%d", &newperiod);
					CS[i].period = newperiod;
					break;
				case 4:
					printf("请输入新的学分:\n");
					scanf("%f", &newcredits);
					CS[j].credits = newcredits;
					break;
				case 5:
					printf("请输入新的开课学期:\n");
					scanf("%s", newsemester);
					strcpy(CS[j].semester, newsemester);
					break;
				case 0:	
					return;
				default:
					printf("选择错误，请重新选择。\n");
				}
			}
			printf("修改成功，请及时保存。\n");
		}
		else {
			printf("课程编号不存在。\n");
		}
	}
}

void FindClass() 
{
	int i, choice , flag;
	float score;
	printf("---------------------\n");
	printf("-----1.按学分查询-----\n");
	printf("-----0.退出本菜单-----\n");
	printf("----------------------\n");
	while (1)
	{
		printf("请选择对应的选项:");
		scanf("%d", &choice);
		flag = 0;
		switch (choice)
		{
		case 1:
			printf("请输入要查询的课程的学分:\n");
			scanf("%f", &score);
			for (i = 0; i < n; i++)
				if (CS[i].credits == score)
				{
					flag = 1;
					printf("课程编号\t课程名称\t课程性质\t学时\t学分\t开课学期\n");
					printf("--------------------------------------------------------------------\n");
					printf("%s\t\t%s\t%s  \t\t%d \t%.1f \t%s\n", 
						CS[i].Id,CS[i].name, CS[i].quality,CS[i].period,CS[i].credits,CS[i].semester);
				}
			if (0 == flag)
				printf("该学分对应的课程不存在！\n"); 
			break;		
		case 0:
			return;
		default:
			printf("选择错误，请重新选择。\n");
		}
	}
}

