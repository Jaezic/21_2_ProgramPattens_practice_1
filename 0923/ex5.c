#include <stdio.h>
#include <string.h>

#define NUM 3

struct XYZ
{
    int width;
    int height;
    int depth;
    int volume;
};

void init(struct XYZ *xyz)
{
    printf("Type info (width ,height, depth):");
    //scanf("%d %d %d", &((*xyz).width), &((*xyz).height), &((*xyz).depth));
    scanf("%d %d %d", &(xyz->width), &(xyz->height), &(xyz->depth));
    (*xyz).volume = (*xyz).width * (*xyz).height * (*xyz).depth;
    xyz->volume = xyz->width * xyz->height * xyz->depth;
}
void print(struct XYZ *xyz)
{
    printf("\nPrinting the result\n");
    printf("width=%d height=%d depth=%d volume=%d\n", xyz->width, xyz->height, xyz->depth, xyz->volume);
}
int main()
{
    struct XYZ a, b;
    init(&a);
    init(&b);
    print(&a);
    print(&b);
    return 0;
}