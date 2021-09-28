#include <stdio.h>

#define NUM 2

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

// swaping code

void swap(struct XYZ *xyz1, struct XYZ *xyz2)
{
    struct XYZ temp;
    temp = *xyz2;
    *xyz2 = *xyz1;
    *xyz1 = temp;
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
    swap(&xyz[0], &xyz[1]);
    print(xyz);
    return 0;
}