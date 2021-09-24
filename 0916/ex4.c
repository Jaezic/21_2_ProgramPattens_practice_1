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

void print(struct student s)
{ // Call by value
    printf("Name = %10s %d\n", s.name, &s.name);
    printf("Height = %10d %d\n", s.height, &s.height);
    printf("Weight = %10f %d\n", s.weight, &s.weight);
    printf("Schols = %10d %d\n", s.schols, &s.schols);
}
int main()
{
    struct student gildong;
    printf("Type student's info (Name, height, weight, schols):");
    scanf("%s %d %f %d", &gildong.name, &gildong.height, &gildong.weight, &gildong.schols);
    print(gildong);
    return 0;
}
