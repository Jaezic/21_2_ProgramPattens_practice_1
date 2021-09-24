#include <stdio.h>

void main()
{
    void newVal(float *);
    float testval;

    printf("Enter a float number : ");
    scanf("%f", &testval);

    printf("Before testval: \t%f\n", testval);
    newVal(&testval);
    printf("After testval: \t%f\n", testval);
}

void newVal(float *num)
{
    *num = *num + 20.2;
}