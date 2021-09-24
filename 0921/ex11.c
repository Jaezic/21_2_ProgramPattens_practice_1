#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NUM 6

struct EMPLOYEES
{
    int ID;
    char last_name[20];
    float pay_rate;
    float hours_worked;
};

void main()
{
    // init
    struct EMPLOYEES emp[NUM];

    // input value store
    for (int i = 0; i < NUM; i++)
    {
        printf("Type the informaton of employees (ID, Name, Payrate, Hours):");
        scanf("%d %s %f %f", &emp[i].ID, &emp[i].last_name, &emp[i].pay_rate, &emp[i].hours_worked);
    }

    // print
    float total = 0.0;
    for (int i = 0; i < NUM; i++)
    {
        printf("%d %s %f\n", emp[i].ID, emp[i].last_name, (emp[i].pay_rate * emp[i].hours_worked));
        total += (emp[i].pay_rate * emp[i].hours_worked);
    }
    printf("Total gross pay of all employees:%f\n", total);
}
