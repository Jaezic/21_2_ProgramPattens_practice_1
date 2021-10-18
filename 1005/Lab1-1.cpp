/* Lab1-1: scratch */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NUM 5

struct STUDENT
{
	/* code here for structure */
	char name[20];
	int korean;
	int math;
	int english;
};

void init(struct STUDENT *stu)
{
	for (int i = 0; i < NUM; i++)
	{
		/* code here for initilization */
		printf("Type %d-th info (name, korean, math, english):", i);
		scanf("%s %d %d %d", stu[i].name, &stu[i].korean, &stu[i].math, &stu[i].english);
	}
}

void print(struct STUDENT *stu)
{
	printf("\nPrinting the result\n");
	for (int i = 0; i < NUM; i++)
	{
		/* code here for printing */
		printf("%s Korean=%d Math=%d English=%d Averag=%.2f\n", stu[i].name, stu[i].korean, stu[i].math, stu[i].english, (double)(stu[i].korean + stu[i].math + stu[i].english) / (double)3);
		}
}

int main()
{
	struct STUDENT stu[NUM];
	init(stu);
	print(stu);
}