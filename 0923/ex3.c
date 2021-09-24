#include <stdio.h>
#define NUM 5
struct NODE
{
    int key;
    struct NODE *next;
};
void init(struct NODE *node, int size);
void link(struct NODE *node, int size);
int main()
{
    struct NODE node[NUM];
    init(node, NUM);
    link(node, NUM);
    printf("key=%d\n", node[0].key);
    printf("key=%d\n", node[0].next->key);
    printf("key=%d\n", node[0].next->next->key);
    printf("key=%d\n", node[0].next->next->next->key);
    printf("key=%d\n", node[0].next->next->next->next->key);
    return 0;
}
void init(struct NODE *node, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Type the %d-th key: ", i);
        scanf("%d", &node[i].key);
    }
}
void link(struct NODE *node, int size)
{
    for (int i = 0; i < NUM; i++)
    {
        if (i != (NUM - 1))
            node[i].next = &node[i + 1];
        else
            node[i].next = NULL;
    }
}