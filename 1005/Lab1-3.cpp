/* Lab1-3: scratch */
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

void swap(struct STUDENT *a, struct STUDENT *b)
{
	/* code here for swapping */
	struct STUDENT temp;
	temp = *b;
	*b = *a;
	*a = temp;
}

float average(struct STUDENT stu)
{ // 데이터의 평균을 반환하는 함수
	return (double)(stu.korean + stu.math + stu.english) / (double)3;
}

void ranking(struct STUDENT *stu)
{
	/* code here for ranking */
	for (int i = 0; i < NUM - 1; i++) // 정렬
	{
		for (int j = 0; j < NUM - 1 - i; j++)
		{
			if (average(stu[j]) < average(stu[j + 1])) // 뒤에가 크다면
				swap(&stu[j], &stu[j + 1]);			   // sawp
		}
	}
}

int main()
{
	struct STUDENT stu[NUM];
	init(stu);
	ranking(stu);
	print(stu);
}