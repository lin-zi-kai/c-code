#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100 //���γ�����

int num = 0, n = 0;//num���пγ�������n�����γ�����

void InsertClass();
void PrintClass();
void SaveClass();
void DelClass();
void ModClass();
void FindClass();


struct ClassSystem
{
	char Id[10];          //�γ̱��
	char name[20];    //�γ�����
	char quality[20]; //�γ�����
	int period;       //ѧʱ���ڿ�ѧʱ��ʵ����ϻ�ѧʱ��
	float credits;      //ѧ��
	char semester[30];  //����ѧ��	
}CS[N];

void menu()
{
	printf("***********��ӭʹ�ÿγ���Ϣ����ϵͳ**********\n\n");
	printf("***1.�γ̻�����Ϣ¼��   2.�γ̻�����Ϣ��ʾ***\n\n");
	printf("***3.�γ̻�����Ϣ����   4.�γ̻�����Ϣɾ��***\n\n");
	printf("***5.�γ̻�����Ϣ�޸�   6.�γ̻�����Ϣ��ѯ***\n\n");
	printf("***             -1.�˳�ϵͳ               ***\n\n");
	printf("*********************************************\n\n");
	printf("���������Ĳ���ѡ�");
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
			printf("ѡ�����������ѡ��");
			break;
		}
	}
	return 0;
}

void InsertClass() 
{
	int i = num;
	int	j, flag;
	printf("����������ӵĿγ���:");
	scanf("%d", &n);
	if (n > 0) 
	{
		do
		{
			flag = 1;
			while (flag)
			{
				flag = 0;
				printf("�������%d���γ̵Ŀγ̱��:", i + 1);
				scanf("%s", CS[i].Id);
				for (j = 0; j < i; j++) 
				{
					if (strcmp(CS[i].Id, CS[j].Id) == 0)
					{
						printf("�ñ���Ѵ��ڣ����������룡\n");
						flag = 1;
						break;
					}
				}
			}
			printf("�������%d ���γ̵�����:", i + 1);
			scanf("%s", CS[i].name);
			printf("�������%d ���γ̵�����:", i + 1);
			scanf("%s", CS[i].quality);
			printf("�������%d ���γ̵�ѧʱ:", i + 1);
			scanf(" %d", &CS[i].period);
			printf("�������%d ���γ̵�ѧ��:", i + 1);
			scanf(" %f", &CS[i].credits);
			printf("�������%d ���γ̵Ŀ���ѧ��:", i + 1);
			scanf("%s", CS[i].semester);
			
			if (0 == flag) 
			{
				i++;
			}
		} while (i < num + n);
	}
	num += n;
	printf("�γ���Ϣ������ϣ�����\n");
	system("pause");
}

void PrintClass()
{
	int i = 0;
	printf("����%d���γ̣�\n", num);
	if (num != 0)
	{
		printf("�γ̱��\t�γ�����\t�γ�����\tѧʱ\tѧ��\t����ѧ��\n");
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
	printf("����ɹ�\n");
	fclose(fp);
	system("pause");
}

void DelClass()
{
	int i, j, flag = 0;
	char arr[20];
	printf("������Ҫɾ���γ̵ı��:\n");
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
		printf("�ñ�Ų�����\n");
	}
	if (1 == flag)
	{
		printf("ɾ���ɹ�\n");		
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
	printf("������ҪҪ�޸ĵĿγ̵ı��:");
	scanf("%s", a);
	for (i = 0; i < num; i++) 
	{
		if (strcmp(CS[i].Id, a) == 0) 
		{
			j = i;
			printf("------------------\n");
			printf("1.�޸Ŀγ�����\n");
			printf("2.�޸Ŀγ�����\n");
			printf("3.�޸�ѧʱ\n");
			printf("4.�޸�ѧ��\n");
			printf("5.�޸Ŀ���ѧ��\n");
			printf("0.�˳����˵�\n");
			printf("------------------\n");
			while (1)
			{
				printf("����������ѡ��:");
				scanf("%d", &choice);
				switch (choice)
				{
				case 1:
					printf("�������µĿγ�����:\n");
					scanf("%s", newname);
					strcpy(CS[j].name, newname);
					break;
				case 2:
					printf("�������µĿγ�����:\n");
					scanf("%s", newquality);
					strcpy(CS[j].quality, newquality);
					break;
				case 3:
					printf("�������µ�ѧʱ:\n");
					scanf("%d", &newperiod);
					CS[i].period = newperiod;
					break;
				case 4:
					printf("�������µ�ѧ��:\n");
					scanf("%f", &newcredits);
					CS[j].credits = newcredits;
					break;
				case 5:
					printf("�������µĿ���ѧ��:\n");
					scanf("%s", newsemester);
					strcpy(CS[j].semester, newsemester);
					break;
				case 0:	
					return;
				default:
					printf("ѡ�����������ѡ��\n");
				}
			}
			printf("�޸ĳɹ����뼰ʱ���档\n");
		}
		else {
			printf("�γ̱�Ų����ڡ�\n");
		}
	}
}

void FindClass() 
{
	int i, choice , flag;
	float score;
	printf("---------------------\n");
	printf("-----1.��ѧ�ֲ�ѯ-----\n");
	printf("-----0.�˳����˵�-----\n");
	printf("----------------------\n");
	while (1)
	{
		printf("��ѡ���Ӧ��ѡ��:");
		scanf("%d", &choice);
		flag = 0;
		switch (choice)
		{
		case 1:
			printf("������Ҫ��ѯ�Ŀγ̵�ѧ��:\n");
			scanf("%f", &score);
			for (i = 0; i < n; i++)
				if (CS[i].credits == score)
				{
					flag = 1;
					printf("�γ̱��\t�γ�����\t�γ�����\tѧʱ\tѧ��\t����ѧ��\n");
					printf("--------------------------------------------------------------------\n");
					printf("%s\t\t%s\t%s  \t\t%d \t%.1f \t%s\n", 
						CS[i].Id,CS[i].name, CS[i].quality,CS[i].period,CS[i].credits,CS[i].semester);
				}
			if (0 == flag)
				printf("��ѧ�ֶ�Ӧ�Ŀγ̲����ڣ�\n"); 
			break;		
		case 0:
			return;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	}
}

