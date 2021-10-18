/* Lab1-2: scratch */
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

float average(struct STUDENT stu)
{ // 데이터의 평균을 반환하는 함수
	return (double)(stu.korean + stu.math + stu.english) / (double)3;
}

void print_first_rank(struct STUDENT *stu)
{
	printf("\nPrinting the first rank info\n");
	struct STUDENT tmp = stu[0]; // 초기 비교값은 0번째 인덱스
	/* code here to find the first rank */
	for (int i = 1; i < NUM; i++) // 두번째부터 마지막까지 평균값 비교
	{
		if (average(tmp) < average(stu[i]))
			tmp = stu[i];
	}
	printf("%s Korean=%d Math=%d English=%d Averag=%.2f\n", tmp.name, tmp.korean, tmp.math, tmp.english, (double)(tmp.korean + tmp.math + tmp.english) / (double)3);
	/* code here for printing */
}

int main()
{
	struct STUDENT stu[NUM];
	init(stu);
	print(stu);
	print_first_rank(stu);
}