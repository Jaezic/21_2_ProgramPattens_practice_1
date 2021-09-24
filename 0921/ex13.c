#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NUM 2
struct EMPLOYEES
{
    char last_name[20];
    int ID;
    float pay_rate;
    float hours_worked;
};

void init(struct EMPLOYEES *emp, int size);
void print(struct EMPLOYEES *emp, int size);

void main()
{
    struct EMPLOYEES employees[NUM];
    init(employees, NUM);
    print(employees, NUM);
}

void init(struct EMPLOYEES *emp, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d-th employee information (ID, Name, Pay Rate, HoursWorked):", i);
        scanf("%d %s %f %f", &emp[i].ID, &emp[i].last_name, &emp[i].pay_rate, &emp[i].hours_worked);
    }
}

void print(struct EMPLOYEES *emp, int size)
{
    float tot_gross = 0.0;
    for (int i = 0; i < size; i++)
    {
        printf("%d-th employee information:", i);
        printf("ID=%d Name=%s Pay_rate=%f Hours_worked=%f Gross_pay=%f\n", emp[i].ID, emp[i].last_name, emp[i].pay_rate, emp[i].hours_worked, (emp[i].pay_rate * emp[i].hours_worked));
        tot_gross += (emp[i].pay_rate * emp[i].hours_worked);
    }

    printf("Total gross: %f\n", tot_gross);
}
