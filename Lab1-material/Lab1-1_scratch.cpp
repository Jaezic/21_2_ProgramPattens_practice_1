/* Lab1-1: scratch */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NUM 5

struct STUDENT {
	/* code here for structure */
};

void init(struct STUDENT* stu) {
	for (int i = 0; i < NUM; i++) {
		printf("Type %d-th info (name, korean, math, english):", i);
		/* code here for initilization */
	}
}

void print(struct STUDENT* stu) {
	printf("\nPrinting the result\n");
	for (int i = 0; i < NUM; i++) {
		/* code here for printing */
	}
}

int main() {
	struct STUDENT stu[NUM];
	init(stu);
	print(stu);
}