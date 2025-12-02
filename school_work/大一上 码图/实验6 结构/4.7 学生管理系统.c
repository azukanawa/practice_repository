#include <stdio.h>
int main()
{
    int student_num = 0;
    int i = 0;
    scanf("%d", &student_num);
    typedef struct message
    {
        char name[21];
        int gender;
        int birthday;
        float height;
        int C_score;
        int math_score;
    } message;
    message information[100];
    int C_sum = 0;
    int math_sum = 0;
    int C_max = 0;
    int C_min = 0;
    int math_min = 0;
    int math_max = 0;
    int C_average = 0;
    int Calculus_average = 0;
    for (i = 0; i < student_num; i++)
    {
        scanf("%s %d %d %f %d %d", &information[i].name, &information[i].gender, &information[i].birthday, &information[i].height, &information[i].C_score, &information[i].math_score);
        C_sum += information[i].C_score;
        math_sum += information[i].math_score;
        if (information[i].C_score > C_max)
        {
            C_max = information[i].C_score;
        }
        if (i == 0)
        {
            C_min = information[i].C_score;
        }
        if (information[i].C_score < C_min)
        {
            C_min = information[i].C_score;
        }

        if (information[i].math_score > math_max)
        {
            math_max = information[i].math_score;
        }
        if (i == 0)
        {
            math_min = information[i].math_score;
        }
        if (information[i].math_score < math_min)
        {
            math_min = information[i].math_score;
        }
    }
    C_average = C_sum / student_num;
    Calculus_average = math_sum / student_num;
    printf("C_average:%d\n", C_average);
    printf("C_max:%d\n", C_max);
    for (i = 0; i < student_num; i++)
    {
        if (information[i].C_score == C_max)
        {
            printf("%s %d %d %.2f %d %d\n", information[i].name, information[i].gender, information[i].birthday, information[i].height, information[i].C_score, information[i].math_score);
        }
    }
    printf("C_min:%d\n", C_min);
    printf("Calculus_average:%d\n", Calculus_average);
    printf("Calculus_max:%d\n", math_max);
    for (i = 0; i < student_num; i++)
    {
        if (information[i].math_score == math_max)
        {
            printf("%s %d %d %.2f %d %d\n", information[i].name, information[i].gender, information[i].birthday, information[i].height, information[i].C_score, information[i].math_score);
        }
    }
    printf("Calculus_min:%d\n", math_min);

    return 0;
}