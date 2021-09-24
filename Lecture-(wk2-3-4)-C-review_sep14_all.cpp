
//
//int main() {
//	char message[81] = "Program";
//	char names[10][20] = { "Hong Gil Dong", "Choi Kiho" };
//
//	puts(message);
//	puts(names[0]);
//	return 0;
//}


//#define MAXNUM 1000
//void findMax(int[MAXNUM]);
//void main()
//{
//	int numList[MAXNUM] = { 12, 375, 986, 746 };
//	findMax(numList);
//}
//void findMax(int  local_array[])
//{
//	int i, max = local_array[0];
//	for (i = 1; i < MAXNUM; i = i + 1)
//		if (max < local_array[i])
//			max = local_array[i];
//	printf("%d\n", max);
//}



//#define MAXNUM 1000
//void main()
//{
//	int findMax(int[MAXNUM]);
//	int numList[MAXNUM] = { 12, 375, 986, 746 };
//	int newmax = 0;
//	newmax = findMax(numList);
//	printf("%d\n", newmax);
//}
//int findMax(int  local_array[])
//{
//	int i, max = local_array[0];
//	for (i = 1; i < MAXNUM; i = i + 1)
//		if (max < local_array[i])
//			max = local_array[i];
//	return max;
//}

//
//void strcopy(char string1[], char string2[])
//{
//	int i = 0;
//	while (string2[i] != '\0'){
//		string1[i] = string2[i];
//		i = i + 1;
//	}
//	string1[i] = '\0';
//}
//
//void main()
//{
//	char str1[81];
//	char str2[81] = "Hong Gil Dong";
//	printf("%s\n", str1);
//	strcopy(str1, str2);
//	printf("%s\n", str1);
//}

//
//#define MAXNUM 5
//void mille2km(int[MAXNUM]);
//void main(){
//	int miles[MAXNUM] = { 1, 2, 3, 4, 5 };
//	/*  store into the miles array  */
//	mille2km(miles);
//}
//
//void mille2km(int local_array[]){
//	int i;
//	for (i = 0; i < MAXNUM; i = i + 1)
//		printf("%dmile-->%fkm\n", local_array[i], local_array[i] * 1.6093);
//}


//
//#define MAX 100
//int word_count(char[MAX]);
//void main() {
//	char  message[MAX];
//	int num_words = 0;
//	printf("Enter a string : ");
//	gets_s(message);
//	num_words = word_count(message);
//
//	printf("The number of words: %d\n", num_words);
//}
//
//int word_count(char string[]) {
//	int    i = 0, flag = 0, count = 0;
//	while (string[i] != '\0') {
//		if (string[i] == ' ')  flag = 1;
//		else {
//			if (flag == 1) {
//				count++;
//				flag = 0;
//			}
//		}
//		i = i + 1;
//	} 
//	return (count + 1);
//}


//
//#define MAX 100
//void enc(char[MAX]);
//void dec(char[MAX]);
//void main() {
//	char  message[MAX];
//	int num_words = 0;
//	printf("Enter a string : ");
//	gets_s(message);
//	enc(message);
//	printf("The number of words: %s\n", message);
//	dec(message);
//	printf("The number of words: %s\n", message);
//}
//
//void enc(char string[]) {
//	int i = 0;
//	while (string[i] != '\0') {
//		string[i] += 32;
//		i++;
//	}
//	string[i] = '\0';
//}
//
//void dec(char string[]) {
//	int i = 0;
//	while (string[i] != '\0') {
//		string[i] -= 32;
//		i++;
//	}
//	string[i] = '\0';
//}


//void main()
//{
//	//int  ival, newval, *ptr;
//	//ptr = &ival;
//	//*ptr = 300;
//	//newval = *ptr * 27;
//
//	//printf("ival_add:%8d newval_add:%8d ptr_add:%8d\n", &ival, &newval, &ptr);
//	//printf("ival_val:%8d newval_val:%8d ptr_val:%8d\n", ival, newval, ptr);
//	//printf("*ptr=%d\n", *ptr);
//
//
//	//char* p;
//	//char s[81] = "He drinks coke each day.";
//	//for (p = s + 10; *p != '\0'; p = p + 1)
//	//{
//	//    if (*p == 'c')
//	//        *p = 'C';
//	//    if (*p == 'd')
//	//        *p = 'D';
//	//    if (*p == 'e')
//	//        *p = 'E';
//	//    if (*p == ' ')
//	//        *p = '\n';
//	//}
//	//printf("%s\n", s);
//
//
//	//int arr[3] = { 0, 1, 2 };
//	//printf("배열의 이름 : %p\n", arr);
//	//printf("첫번째 요소 : %p\n", &arr[0]);
//	//printf("두번째 요소 : %p\n", &arr[1]);
//	//printf("세번째 요소 : %p\n", &arr[2]);
//
//
//	//char* p = NULL;
//	//char s[100] = { 0, };
//	//p = NULL;
//	//int i = 0;
//	//++p;
//	//p++;
//	//p = s;
//	//++s;
//	//s = p;
//
//
//	//int b[] = { 10, 20, 30,40 };
//	//int* bPtr = b;
//
//	//for (int i = 0; i < 4; i++)
//	//{
//	//    printf("b[%d]:\t\t%d\n", i, b[i]);
//	//    printf("*(b+%d):\t\t%d\n", i, *(b + i));
//	//    printf("bPtr[%d]:\t%d\n", i, bPtr[i]);
//	//    printf("*(bPtr+%d):\t%d\n\n", i, *(bPtr + i));
//	//}
//
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//void newVal(float*);  /* function prototype */
//void newVal(float);  /* function prototype */
//void main()
//{
//	float  testval;
//
//	printf("Enter a float number: ");
//	scanf("%f", &testval);
//
//	printf("Before testval:\t%f\n", testval);
//	newVal(&testval);      /* function call       */
//	newVal(testval);      /* function call       */
//	printf("After testval:\t%f\n", testval);  
//}
//
//void newVal(float num) /* function definition */
//{
//	num = num + 20.2;
//}

//void newVal(float* num) /* function definition */
//{
//	*num = *num + 20.2;
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void exchange();
//int n1, n2;
//void main() 
//{
//	printf("n1 n2 : ");
//	scanf("%d %d", &n1, &n2);
//	printf("[Before]\tn1 : %d , n2 : %d\n", n1, n2);
//	exchange();
//	printf("[After]\t\tn1 : %d , n2 : %d\n", n1, n2);
//}
//void exchange() 
//{
//	int temp;
//	temp = n1;
//	n1 = n2;
//	n2 = temp;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void exchange(int n1, int n2);
//void main()
//{
//	int n1, n2;
//	printf("n1 n2 : ");
//	scanf("%d %d", &n1, &n2);
//	printf("[Before]\tn1 : %d , n2 : %d\n", n1, n2);
//	exchange(n1, n2);
//	printf("[After]\t\tn1 : %d , n2 : %d\n", n1, n2);
//}
//void exchange(int n1, int n2)
//{
//	int temp;
//	temp = n1;
//	n1 = n2;
//	n2 = temp;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void exchange(int* ptr1, int* ptr2);
//void main() 
//{
//	int n1, n2;
//	printf("n1 n2 : ");
//	scanf("%d %d", &n1, &n2);
//	printf("[Before]\tn1 : %d , n2 : %d\n", n1, n2);
//	exchange(&n1, &n2);
//	printf("[After]\t\tn1 : %d , n2 : %d\n", n1, n2);
//}
//void exchange(int* p, int* q) {
//	int temp;
//	temp = *p;
//	*p = *q;
//	*q = temp;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//    void newVal(int, int, float*, int*);
//    int n1 = 0, n2 = 0, f2 = 0;
//    float f1 = 0;
//    printf("n1 n2 : ");
//    scanf("%d %d", &n1, &n2);
//    printf("[before]\tn1:%d, n2:%d, f1:%8.5f , f2:%d\n", n1, n2, f1, f2);
//    newVal(n1, n2, &f1, &f2);
//    printf("[after]\t\tn1:%d, n2:%d, f1:%8.5f , f2:%d\n", n1, n2, f1, f2);
//}
//
//void newVal(int val1, int val2, float* sum, int* remain)
//{
//    *sum = val1+val2;
//    *remain = val1%val2;
//}
// 

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main()
//{
//    void minmax(int, int, int*, int*);
//    int n1 = 0, n2 = 0;
//    int min = 0, max = 0;
//    printf("n1 n2 : ");
//    scanf("%d %d", &n1, &n2);
//    printf("[before]\tn1:%d, n2:%d, min:%d, max:%d\n", n1, n2, min, max);
//    minmax(n1, n2, &min, &max);
//    printf("[after]\t\tn1:%d, n2:%d, min:%d, max:%d\n", n1, n2, min, max);
//}

//void minmax(int num1, int num2, int* min, int* max)
//{
//    if (num1 <= num2) {
//        *min = num1;
//        *max = num2;
//    }
//    else {
//        *min = num2;
//        *max = num1;
//    }
//}

//void minmax(int num1, int num2, int* min, int* max)
//{
//    *min = (num1 < num2)? num1: num2;
//    *max = (num1 > num2)? num1: num2;
//}

//
//#define MIN(a, b) (((a) < (b)) ? (a) : (b))
//#define MAX(a, b) (((a) > (b)) ? (a) : (b))
//
//void minmax(int num1, int num2, int* min, int* max)
//{
//    *min = MIN(num1, num2); // --> (((num1) < (num2)) ? (num1) : (num2));
//    *max = MAX(num1, num2); // --> (((num1) > (num2)) ? (num1) : (num2));
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main()
//{
//    void calc(int*, int*, int*, int*, int*, int*);
//    int n1 = 0, n2 = 0;
//    int mul = 0, div = 0, mod = 0, add = 0;
//    printf("n1 n2 : ");
//    scanf("%d %d", &n1, &n2);
//    printf("[before]\tmul:%5d div:%5d mod:%5d add:%5d\n",mul, div, mod, add);
//    calc(&n1, &n2, &mul, &div, &mod, &add);
//    printf("[after]\t\tmul:%5d div:%5d mod:%5d add:%5d\n", mul, div, mod, add);
//}
//
//void calc(int *n1, int *n2, int *mul, int*div, int *mod, int *add)
//{
//    *mul = *n1 * *n2;
//    *div = *n1 / *n2;
//    *mod = *n1 % *n2;
//    *add = *n1 + *n2;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define SIZE 4
//void totpay(float[SIZE], float[SIZE], float[SIZE]);
//
//void main() {
//    /*  declarations   */
//    float base[SIZE], overtime[SIZE], total[SIZE];
//    int n;
//
//    for (n = 0; n < SIZE; n++) {
//        printf("Please type base salary for worker%d:", n);
//        scanf("%f", &base[n]);
//        printf("Please type overtime payment for worker%d:", n);
//        scanf("%f", &overtime[n]);
//        printf("\n");
//    }
//
//    /*  read and store values in array pay */
//    totpay(base, overtime, total);
//    /*  print total    */
//    for (n = 0; n < SIZE; n++)
//        printf("total pay for worker%d = %f\n", n, total[n]);
//}
//void totpay(float* b, float* o, float* t) {
//    int k;
//    /* compute and store total for each person  */
//    for (k = 0; k < SIZE; k++)
//        t[k] = b[k] + o[k];
//}