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

int main()
{
    struct student gildong[NUM];
    for (int i = 0; i < NUM; i++)
    {
        printf("Type student's info (Name, height, weight, schols):");
        scanf("%s %d %f %d", &gildong[i].name, &gildong[i].height, &gildong[i].weight, &gildong[i].schols);
    }
    for (int i = 0; i < NUM; i++)
    {
        printf("Name = %10s %d\n", gildong[i].name, &gildong[i].name);
        printf("Height = %10d %d\n", gildong[i].height, &gildong[i].height);
        printf("Weight = %10f %d\n", gildong[i].weight, &gildong[i].weight);
        printf("Schols = %10d %d\n", gildong[i].schols, &gildong[i].schols);
    }
    return 0;
}
