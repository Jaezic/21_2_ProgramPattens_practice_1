#include <stdio.h>
double cal_power(float val, int pow)
{
    if (pow == 0)
        return 1;
    return val * cal_power(val, pow - 1);
}

int main()
{
    float value = 0.0;
    int power = 0;

    printf("Type number(value. power):");
    scanf("%f %d", &value, &power);
    printf("Result : pow(%.1f, %d) = %.1lf\n", value, power, cal_power(value, power));
    return 0;
}