#include <stdio.h>
#include <string.h>

#define NAME_LEN 64
#define NUM 3

struct student
{
    char name[NAME_LEN];
    int height;
    float weight;
    int schols;
};

struct meet_stu
{
    int index;
    char place[100];
    struct student info;
};
int main()
{
    struct meet_stu stu[NUM];
    for (int i = 0; i < NUM; i++)
    {
        printf("Type %d-th student's info (index, Place, Name, height, weight, schols):", i);
        scanf("%d %s %s %d %f %d", &stu[i].index, &stu[i].index, &stu[i].info.name, &stu[i].info.height, &stu[i].info.weight, &stu[i].info.schols);
    }
    for (int i = 0; i < NUM; i++)
    {
        printf("Name = %10s %d\n", stu[i].index, &stu[i].index);
        printf("Height = %10d %d\n", stu[i].index, &stu[i].index);
        printf("Name = %10s %d\n", stu[i].info.name, &stu[i].info.name);
        printf("Height = %10d %d\n", stu[i].info.height, &stu[i].info.height);
        printf("Weight = %10f %d\n", stu[i].info.weight, &stu[i].info.weight);
        printf("Schols = %10d %d\n", stu[i].info.schols, &stu[i].info.schols);
    }
    return 0;
}
