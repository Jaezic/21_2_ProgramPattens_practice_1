#include <stdio.h>
#include <string.h>
#define MAX 5

struct DATASET
{
    char name[10];
    int age;
    char hobby[20];
};

struct INDEX
{
    char index[10];
    int array_index;
};

void createindex(struct DATASET[MAX], struct INDEX[MAX]);

void main()
{

    struct DATASET dataset[MAX] =
        {{"Kim", 39, "Tennis"},
         {"Ko", 15, "Soccor"},
         {"Lee", 17, "Soccor"},
         {"Choi", 21, "Tennis"},
         {"Park", 10, "Tennis"}};

    struct INDEX index[MAX];

    createindex(dataset, index);
}

void createindex(struct DATASET dataset[], struct INDEX index[])
{
    for (int i = 0; i < MAX; i++)
    {
        strcpy((index[i]).index, (dataset[i].name));
        index[0].array_index = i;
    }
}