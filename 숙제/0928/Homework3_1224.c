#include <stdio.h>

#define NUM 5

struct car
{
    int id;
    int miles;
    int gallons;
};

int main()
{
    //===declare
    struct car cars[NUM];

    //===input (구조체 채우기)
    for (int i = 0; i < NUM; i++)
    {
        printf("Type the %d-th Car information (ID, Miles, Gallons):", i);
        scanf("%d %d %d", &cars[i].id, &cars[i].miles, &cars[i].gallons);
    }
    //===output
    //output -1 (struct 변수의 데이터 print)
    float ave_sum = 0;
    for (int i = 0; i < NUM; i++)
    {
        float ave = (float)cars[i].miles / (float)cars[i].gallons;
        // 소수점 나오게 나누기 위해서 자료형을 float으로 동결
        ave_sum += ave;
        printf("Type the %d-th Car information: ID=%d Miles=%d Gallons=%d Ave.Miles=%.2f(miles/gal)\n", i, cars[i].id, cars[i].miles, cars[i].gallons, ave);
    }

    //output -2 (모든 car의 평균 1gallon 당 miles print)
    printf("The average of miles per gallons for all the cars: %.2f", ave_sum / (float)NUM);
    return 0;
}