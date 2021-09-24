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
    struct student gildong;
    printf("Type student's info (Name, height, weight, schols):");
    scanf("%s %d %f %d", &gildong.name, &gildong.height, &gildong.weight, &gildong.schols);

    printf("Name = %10s %d\n", gildong.name, &gildong.name);
    printf("Height = %10d %d\n", gildong.height, &gildong.height);
    printf("Weight = %10f %d\n", gildong.weight, &gildong.weight);
    printf("Schols = %10d %d\n", gildong.schols, &gildong.schols);
    return 0;
}
