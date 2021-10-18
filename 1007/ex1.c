#include <stdio.h>
#include <string.h>

#define NUM 5
struct DATA
{
    int index;
    char name[20];
    int age;
    char hobby[20];
    int key;
} d_array[NUM];
void init(struct DATA *data, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Type %d-th info (index, name, age, hooby): ", i);
        scanf("%d %s %d %s", &data[i].index, &data[i].name, &data[i].age, &data[i].hobby);
    }
}

struct DATA find(struct DATA *data, int size, char *name)
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(data[i].name, name) == 0)
            return data[i];
    }
}

int main()
{
    init(d_array, NUM);
    char name[20] = {
        0,
    };
    printf("\nType searching name:");
    scanf("%s", name);
    struct DATA result = find(d_array, NUM, name);

    printf("Info searched result: name = %s index = %d age = %d hobby = %s\n", result.name, result.index, result.age, result.hobby);
    return 0;
}
