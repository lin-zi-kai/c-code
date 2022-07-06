#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void find(int num[3],float score[3][3])
{
    int i, stu_num;
    printf("请输入学号：");
    scanf("%d", &stu_num);
    printf("您查找的学号为:%d\n", stu_num);
    for (i = 0; i < 3; i++)
    {
        if (stu_num == num[i])
        {
            printf("学号:%d 成绩排名:%d 各科分数分别为:%3.1f,%3.1f,%3.1f\n", num[i], i + 1, score[i][0], score[i][1], score[i][2]);
            return;
        }
    }
    printf("不存在该学号");
    return;
}

int main()
{
    float score[3][3] = { {90.5,60.5,85},{85.5,64,64},{88,78.5,80} };
    float sum[3] = { 0 }; //总
    float ave[3] = { 0 };   //平均
    int num[3] = { 1,2,3 }; //学号
    int i, j, t, stu_num; 
    printf("学生成绩(MT、EN、PH)\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i] += score[i][j];
            printf("%8.1f", score[i][j]);
        }
        ave[i] = sum[i] / 3.0;
        printf("\n");
    }
    printf("总分和平均分分别为\n");
    for (i = 0; i < 3; i++)
    {
        printf("%3.1f     %3.1f\n", sum[i], ave[i]);
    }
    float tmp = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2 - i; j++)
        {
            if (sum[j] < sum[j + 1])
            {

                tmp = sum[j];
                sum[j] = sum[j + 1];
                sum[j + 1] = tmp;

                tmp = ave[j];
                ave[j] = ave[j + 1];
                ave[j + 1] = tmp;

                t = num[j];
                num[j] = num[j + 1];
                num[j + 1] = t;

                for (int m = 0; m < 3; m++)
                {
                    tmp = score[j][m];
                    score[j][m] = score[j + 1][m];
                    score[j + 1][m] = tmp;
                }
            }
        }
    }
    printf("总分从高到低为\n");
    for (i = 0; i < 3; i++)
        printf("%3.1f\n", sum[i]);
    printf("\n");
 
    printf("排名表\n");
    for (i = 0; i < 3; i++)
    {
        printf("成绩排名:%d\n", i + 1);
        printf("学号：%-5d\n", num[i]);
        printf("各科成绩分别为：");
        for (j = 0; j < 3; j++)
            printf("%3.1f", score[i][j]);
        printf("\n");
        printf("总分为:%3.1f\n", sum[i]);
        printf("平均分为:%3.1f\n", ave[i]);
        printf("\n");
    }
    find(&num, &score);
}