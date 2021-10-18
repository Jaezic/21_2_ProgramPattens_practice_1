#include <stdio.h>

#define NUM 5

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
void swap(struct XYZ *xyz1, struct XYZ *xyz2)
{
    struct XYZ temp;
    temp = *xyz2;
    *xyz2 = *xyz1;
    *xyz1 = temp;
}
void sort_by_height(struct XYZ *xyz)
{
    for (int j = 0; j < NUM - 1; j++)
    {
        for (int i = NUM - 1; j < i; i--)

        {
            if (xyz[i].height < xyz[i - 1].height)
            {
                swap(&xyz[i - 1], &xyz[i]);
            }
        }
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
    sort_by_height(xyz);
    print(xyz);
    return 0;
}