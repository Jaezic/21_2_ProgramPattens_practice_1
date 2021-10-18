#include <stdio.h>
#include <string.h>

#define NUM 5
#define KEY_MAX 52
struct DATA
{
    int index;
    char name[20];
    int age;
    char hobby[20];
    int key;
} d_array[NUM];

struct DATA index_array[KEY_MAX * KEY_MAX * KEY_MAX];

int key_gen(char *data)
{
    return (KEY_MAX * KEY_MAX * (data[0] - 'A') + KEY_MAX * (data[1] - 'A') + (data[2] - 'A'));
}
void init(struct DATA *data, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Type %d-th info (index, name, age, hooby): ", i);
        scanf("%d %s %d %s", &data[i].index, &data[i].name, &data[i].age, &data[i].hobby);
        data[i].key = key_gen(data[i].name);
        index_array[data[i].key] = data[i];
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

    int key = key_gen(name);
    struct DATA result = index_array[key];

    printf("Info searched result: name = %s index = %d age = %d hobby = %s\n", result.name, result.index, result.age, result.hobby);
    return 0;
}
