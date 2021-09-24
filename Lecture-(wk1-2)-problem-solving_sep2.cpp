#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main() {
//	int  num;
//	printf("Please type an integer: ");
//	scanf("%d", &num);
//
//	if (num % 2 == 1) 
//		printf("An odd integer\n");
//	else
//		printf("An even integer\n");
//
//	return 0;
//}


//void determin(int a);
//int main() {
//	int  num;
//	printf("Please type an integer: ");
//	scanf("%d", &num);
//	determin(num);
//
//	return 0;
//}
//void determin(int a) {
//	if ((a % 2) == 1)
//		printf("An odd integer\n");
//	else
//		printf("An even integer\n");
// }


//int main() {
//	int  num;
//	printf("Please type an integer: ");
//	scanf("%d", &num);
//
//	if (num % 2) // 0, 1
//		printf("An odd integer\n");
//	else
//		printf("An even integer\n");
//
//	return 0;
//}

//
//int main() {
//	int  num1 = 100, num2 = 250;
//	int  temp;
//
//	printf("num1=%d num2=%d\n", num1, num2);
//
//	temp = num1;
//	num1 = num2;
//	num2 = temp;
//	printf("num1=%d num2=%d\n", num1, num2);
//	return 0;
//}

//
//
//int main() {
//    int  i, num;
//    int  max = 0;
//
//    for (i = 1; i <= 100; i++)
//    {
//        printf("Please type an positive integer: ");
//        scanf("%d", &num);
//
//        if (num == -1) break;
//
//        if (i == 1)
//            max = num;
//        else if (num > max)
//            max = num;
//    }	
//
//    printf("max=%d\n", max);
//    return 0;
//}

//
//
//#define MAT_SIZE 10
//void init_mat(int mat[][MAT_SIZE], int size, int step);
//void mat_mul(int a[][MAT_SIZE], int  b[][MAT_SIZE], int c[][MAT_SIZE], int size);
//void print_mat1(int mat[][MAT_SIZE], int size);
//void print_mat3(int mat[][MAT_SIZE], int size);
//
//int main() {
//    // declar variables
//    int mat1[MAT_SIZE][MAT_SIZE] = { 0 };
//    int mat2[MAT_SIZE][MAT_SIZE] = { 0 };
//    int mat3[MAT_SIZE][MAT_SIZE] = { 0 };
// 
//    // filing stage
//    // fill matrix 1
//    init_mat(mat1, MAT_SIZE, 1);
//
//    // fill matrix 2
//    init_mat(mat2, MAT_SIZE, 2);
//
//    // fill matrix
//    mat_mul(mat1, mat2, mat3, MAT_SIZE);
//
//    // printing stage
//    // print matrix1
//    print_mat3(mat1, MAT_SIZE);
//
//    // print matrix2
//    print_mat3(mat2, MAT_SIZE);
//
//    // print matrix3
//    print_mat3(mat3, MAT_SIZE);
//
//    return 0;
//}
//
//void init_mat(int mat[][MAT_SIZE], int size, int step) {
//    int width = size;
//    int height = size;
//    int inc = 0;
//
//    for (int j = 0; j < height; j++) {
//        for (int i = 0; i < width; i++) {
//            inc = (i == 0 && j == 0) ? 0 : inc + step;
//            mat[j][i] = inc;
//        }
//    }
//}
//
//void mat_mul(int a[][MAT_SIZE], int b[][MAT_SIZE], int c[][MAT_SIZE], int size) {
//    int k, temp;
//    for (int j = 0; j < size; j++) {
//        for (int i = 0; i < size; i++) {
//            temp = 0;
//            for (k = 0; k < size; k++) {
//                temp += (a[j][k] * b[k][i]);
//            }
//            c[j][i] = temp;
//        }
//    }
//}
//
//void print_mat1(int mat[][MAT_SIZE], int size) {
//    int width = size;
//    int height = size;
//    for (int j = 0; j < height; j++) {
//        for (int i = 0; i < width; i++) {
//            printf("%5d", mat[j][i]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//}
//
//void print_mat3(int mat[][MAT_SIZE], int size) {
//    int width = size;
//    int height = size;
//    for (int j = 0; j < height; j++) {
//        for (int i = 0; i < width; i++) {
//            printf("%10d", mat[j][i]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//}

//
//int main() {
//	int i, count;
//	int maxage = -1, minage = 1000;
//	int maxscore = -1, minscore = 1000;
//	int maxagecnt = 0, minagecnt = 0, maxscorecnt = 0, minscorecnt = 0;
//	int age[100], maxagegrp[100], minagegrp[100];
//	int score[100], maxscoregrp[100], minscoregrp[100];
//
//	// init data
//	for (i = 0; i < 100; i++) {
//		int tmp_age, tmp_score;
//		printf("Put age and score pair (End:-1,-1): ");
//		scanf("%d %d", &tmp_age, &tmp_score);
//		if (tmp_age == -1 && tmp_score == -1)
//			break;
//		age[i] = tmp_age; score[i] = tmp_score;
//	}
//	count = i;
//
//	// find max age
//	for (i = 0; i < count; i++) {
//		if (age[i] > maxage) {
//			maxage = age[i];              /* new max age found  */
//			maxagecnt = 0;
//			maxagegrp[maxagecnt] = i;  /* save the age index  */
//		}
//		else if (age[i] == maxage) {
//			maxagecnt = maxagecnt + 1; /* tie max age found  */
//			maxagegrp[maxagecnt] = i;  /* save the age index  */
//		}
//	}
//
//	// find min ages
//	/*  */
//
//	// find max scores
//	/*  */
//
//	// find min scores
//	/*  */
//
//	// print max ages
//	for (i = 0; i <= maxagecnt; i = i + 1)
//		printf("Oldest age(%d) score as %d\n", maxage, score[maxagegrp[i]]);
//
//	// print min ages
//	/* */
//
//	// print max scores
//	/* */
//
//	// print min scores
//	/* */
//
//	return 0;
//}
