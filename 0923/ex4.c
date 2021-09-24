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

void func2(struct student *stu)
{
    if (stu->height < 180)
        stu->height = 180;
    if (stu->weight < 100)
        stu->weight = 100;
}
struct student func1(struct student stu)
{

    if (stu.height < 180)
        stu.height = 180;
    if (stu.weight < 100)
        stu.weight = 100;
    return stu;
}
int main()
{
    struct student stu[NUM];
    for (int i = 0; i < NUM; i++)
    {
        printf("Type %d-th stduent's info (Name, height, weight, schols):", i);
        scanf("%s %d %f %d", &stu[i].name, &stu[i].height, &stu[i].weight, &stu[i].schols);
    }
    for (int i = 0; i < NUM; i++)
    {
        printf("%s %d %f %d\n", stu[i].name, stu[i].height, stu[i].weight, stu[i].schols);
    }
    for (int i = 0; i < NUM; i++)
    {
        stu[i] = func1(stu[i]);
    }
    // for (int i = 0; i < NUM; i++)
    // {
    //     func2(&stu[i]);
    // }
    for (int i = 0; i < NUM; i++)
    {
        printf("%s %d %f %d\n", stu[i].name, stu[i].height, stu[i].weight, stu[i].schols);
    }
    return 0;
}