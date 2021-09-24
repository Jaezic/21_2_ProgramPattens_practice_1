#include <stdio.h>
struct NODE
{
    int key;
    struct NODE *next;
};
int main()
{
    struct NODE node[3];
    for (int i = 0; i < 3; i++)
    {
        node[i].key = i;
        node[i].next = NULL;
    }
    printf("Before Linking\n");
    for (int i = 0; i < 3; i++)
    {
        printf("i=%d key=%d next=%d Add=%d\n", i, node[i].key, node[i].next, &node[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        node[i].next = &node[i + 1];
    }
    printf("\nAfter Linking\n");
    for (int i = 0; i < 3; i++)
    {
        printf("i=%d key=%d next=%d Add=%d\n", i, node[i].key, node[i].next, &node[i]);
    }
    return 0;
}