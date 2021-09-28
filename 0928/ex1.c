#include <stdio.h>

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
    for (int i = 0; i < NUM; i++)
    {
        printf("Type %d-th info (width, height, depth):", i);
        scanf("%d %d %d", &xyz[i].width, &xyz[i].height, &xyz[i].depth);
        xyz[i].volume = xyz[i].width * xyz[i].height * xyz[i].depth;
    }
}

void print(struct XYZ *xyz)
{
    printf("\nPrinting the result\n");
    for (int i = 0; i < NUM; i++)
    {
        printf("width=%d height=%d depth=%d volume=%d\n", xyz[i].width, xyz[i].height, xyz[i].depth, xyz[i].volume);
    }
}

int main()
{
    struct XYZ xyz[NUM];
    init(xyz);
    print(xyz);
    return 0;
}