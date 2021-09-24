#include <stdio.h>
struct NODE
{
    int key;
    struct NODE *next;
};
void init(struct NODE *node, int size);
void link(struct NODE *node, int size);
int main()
{
    struct NODE node[3];
    init(node, 3);
    link(node, 3);
    printf("key=%d\n", node[0].key);
    printf("key=%d\n", node[1].key);
    printf("key=%d\n", node[2].key);

    printf("key=%d\n", (*(node[0].next)).key);
    printf("key=%d\n", node[0].next->key);
    printf("key=%d\n", node[1].key);

    printf("key=%d\n", (*(node[1].next)).key);
    printf("key=%d\n", node[1].next->key);
    printf("key=%d\n", node[2].key);
    printf("key=%d\n", node[0].next->next->key);
    return 0;
}
void init(struct NODE *node, int size)
{
    node[0].key = 100;
    node[1].key = 250;
    node[2].key = 467;
    node[0].next = node[1].next = node[2].next = NULL;
}
void link(struct NODE *node, int size)
{
    for (int i = 0; i < 3; i++)
    {
        if(i != (3-1))
        node[i].next = &node[i + 1];
        else node[i].next = NULL;
    }
}