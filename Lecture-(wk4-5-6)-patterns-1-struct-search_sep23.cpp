#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//
//struct {
//	int month;
//	int day;
//	int year;
//}birth;
//
//int main() {
//	birth.month = 12;
//	birth.day = 28; 
//	birth.year = 1987;
//
//	printf("My birth date is %d/%d/%d\n", birth.month, birth.day, birth.year);
//}

//struct {
//	int month;
//	int day;
//	int year;
//}birth;
//
//int main() {
//	printf("Type current day(Day Month Year): ");
//	scanf("%d %d %d", &birth.month, &birth.day, &birth.year);
//	printf("My birth date is %d/%d/%d\n", birth.month, birth.day, birth.year);
//}


//struct Birth{
//	int month;
//	int day;
//	int year;
//}birth;
//
//int main() {
//	printf("Type current day(Day Month Year): ");
//	scanf("%d %d %d", &birth.month, &birth.day, &birth.year);
//	printf("My birth data is %d/%d/%d\n", birth.month, birth.day, birth.year);
//}

//
//struct Birth {
//	int month;
//	int day;
//	int year;
//};
//
//int main() {
//	struct Birth birth;
//	printf("Type current day(Day Month Year): ");
//	scanf("%d %d %d", &birth.month, &birth.day, &birth.year);
//	printf("My birth data is %d/%d/%d\n", birth.month, birth.day, birth.year);
//}



//struct Birth {
//	int month;
//	int day;
//	int year;
//}birth = { 10,20,2021 };
//
//int main() {
//	printf("My birth data is %d/%d/%d\n", birth.month, birth.day, birth.year);
//}
//
//struct Birth {
//	int month;
//	int day;
//	int year;
//};
//
//int main() {
//	struct Birth birth = { 10,20,2021 };
//	printf("My birth data is %d/%d/%d\n", birth.month, birth.day, birth.year);
//}
//
//#define NUM 5
//struct Stock {
//	char name[20];
//	float stock_earning;
//	float price_to_ratio;
//};
//
//void main() {
//	// variable
//	struct Stock sto[NUM];
//	// input
//	for (int i = 0; i < NUM; i++) {
//		printf("Type stock information (Name, earning, ratio):");
//		scanf("%s %f %f", &sto[i].name, &sto[i].stock_earning, &sto[i].price_to_ratio);
//	}
//
//	// print
//	for (int i = 0; i < NUM; i++) {
//		printf("Stock name:%s stock price:%f\n", sto[i].name, sto[i].stock_earning * sto[i].price_to_ratio);
//	}
//}

//#define NUM 5
//struct Stock {
//	char name[20];
//	float est_price_ratio;
//	int est_earnings;
//};
//
//void main() {
//	int i = 0;
//	char t_name[20];
//	struct Stock sto[NUM];
//	for (i = 0; i < NUM; i++) {
//		printf("Type %d-th stock information (Name, ratio, earnings):",i);
//		scanf("%s %f %d", &sto[i].name, &sto[i].est_price_ratio, &sto[i].est_earnings);
//	}
//	for (i = 0; i < NUM; i++) {
//		printf("%d-th: %s stock price: %f\n", i, sto[i].name, sto[i].est_price_ratio * (float)sto[i].est_earnings);
//	}
//}

//#define NUM 12
//struct MonthDays {
//	char name[10];
//	int days;
//};
//
//void main() {
//	// init
//	struct MonthDays convert[NUM+1];
//
//	// store
//	for (int i = 1; i <= NUM; i++) {
//		printf("Type the informaton of Month Days (Name, days):");
//		scanf("%s %d", &convert[i].name, &convert[i].days);
//	}
//	
//	// print
//	for (int i = 1; i <= NUM; i++) {
//		printf("%s days=%d\n", convert[i].name, convert[i].days);
//	}
//}

//
//#define NUM 12
//struct MONTH_DAYS{
//    char month_name[10];
//    int   days;
//};
//
//void init(struct MONTH_DAYS* arr, int size);
//void print(struct MONTH_DAYS* arr, int size);
//
//void main() {
//    struct MONTH_DAYS convert[NUM];
//    init(convert, NUM);
//    print(convert, NUM);
//}
//
//void init(struct MONTH_DAYS* arr, int size) {
//    for (int i = 1; i <= size; i++) {
//        printf("%d-th Month information (Name Days):",i);
//        scanf("%s %d", &arr[i].month_name, &arr[i].days);
//    }
//}
//
//void print(struct MONTH_DAYS* arr, int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d-th Month: %s %d\n", i, arr[i].month_name, arr[i].days);
//    }
//}

//#define NUM 6
//
//struct EMPLOYEES {
//	int ID;
//	char last_name[20];
//	float pay_rate;
//	float hours_worked;
//};
//
//void main() {
//	// init
//	struct EMPLOYEES emp[NUM];
//
//	// input value store
//	for (int i = 0; i < NUM; i++) {
//		printf("Type the informaton of employees (ID, Name, Payrate, Hours):");
//		scanf("%d %s %f %f", &emp[i].ID, &emp[i].last_name, &emp[i].pay_rate, &emp[i].hours_worked);
//	}
//
//	// print
//	float total = 0.0;
//	for (int i = 0; i < NUM; i++) {
//		printf("%d %s %f\n", emp[i].ID, emp[i].last_name,(emp[i].pay_rate * emp[i].hours_worked));
//		total += (emp[i].pay_rate * emp[i].hours_worked);
//	}
//	printf("Total gross pay of all employees:%f\n", total);
//}
//


//#define NUM 2
//struct EMPLOYEES {
//    char last_name[20];
//    int ID;
//    float pay_rate;
//    float hours_worked;
//};
//
//void main() {
//    struct EMPLOYEES emp[NUM];
//
//    for (int i = 0; i < NUM; i++) {
//        printf("%d-th employee information (ID, Name, Pay Rate, HoursWorked):", i);
//        scanf("%d %s %f %f", &emp[i].ID, &emp[i].last_name, &emp[i].pay_rate, &emp[i].hours_worked);
//    }
//
//    float tot_gross = 0.0;
//    for (int i = 0; i < NUM; i++) {
//        printf("%d-th employee information:", i);
//        printf("ID=%d Name=%s Pay_rate=%f Hours_worked=%f Gross_pay=%f\n", emp[i].ID, emp[i].last_name, emp[i].pay_rate, emp[i].hours_worked, (emp[i].pay_rate * emp[i].hours_worked));
//        tot_gross += (emp[i].pay_rate * emp[i].hours_worked);
//    }
//    printf("Total gross: %f\n", tot_gross);
//}

//
//#define NUM 2
//struct EMPLOYEES{
//	char last_name[20];
//	int ID;
//	float pay_rate;
//	float hours_worked;
//};
//
//void init(struct EMPLOYEES* emp, int size);
//void print(struct EMPLOYEES* emp, int size);
//
//void main() {
//	struct EMPLOYEES employees[NUM];
//	init(employees, NUM);
//    print(employees, NUM);
//}
//
//void init(struct EMPLOYEES* emp, int size){
//    for (int i = 0; i < size; i++) {
//        printf("%d-th employee information (ID, Name, Pay Rate, HoursWorked):", i);
//        scanf("%d %s %f %f", &emp[i].ID, &emp[i].last_name, &emp[i].pay_rate, &emp[i].hours_worked);
//    }
//}
//
//void print(struct EMPLOYEES* emp, int size) {
//    float tot_gross = 0.0;
//    for (int i = 0; i < size; i++) {
//        printf("%d-th employee information:", i);
//        printf("ID=%d Name=%s Pay_rate=%f Hours_worked=%f Gross_pay=%f\n", emp[i].ID, emp[i].last_name, emp[i].pay_rate, emp[i].hours_worked, (emp[i].pay_rate * emp[i].hours_worked));
//        tot_gross += (emp[i].pay_rate * emp[i].hours_worked);
//    }
//
//    printf("Total gross: %f\n", tot_gross);
//}

//
//#define NUM 5
//struct NODE{
//	int key;
//	NODE* next;
//};
//
//void main() {
//	struct NODE node[NUM];
//
//	// initialization
//	for (int i = 0; i < NUM; i++) {
//		node[i].key = i;
//		node[i].next = NULL;
//	}
//
//	// printing before linking stage
//	printf("Before linking\n");
//	for (int i = 0; i < NUM; i++) {
//		printf("i=%d key=%d next=%d Add=%d\n", i, node[i].key, node[i].next, &node[i]);
//	}
//
//	// linking stage
//	for (int i = 0; i < NUM - 1; i++) {
//		node[i].next = &node[i+1];
//	}
//
//	printf("\nAfter linking\n");
//	for (int i = 0; i < NUM; i++) {
//		printf("i=%d key=%d next=%d Add=%d\n", i, node[i].key, node[i].next, &node[i]);
//	}
//}


//#define NUM 3
//struct NODE{
//	int key;
//	NODE* next;
//};
//
//void init(NODE *node, int size);
//void link(NODE *node, int size);
//void main() {
//	struct NODE node[NUM];
//	init(node, NUM);
//	link(node, NUM);
//
//	//printf("key=%d\n", node[0].key);
//
//	//printf("key=%d\n", (*(node[0].next)).key); //node[1].key
//	//printf("key=%d\n", node[0].next->key);
//	//printf("key=%d\n", node[1].key); 
//
//
//	//printf("key=%d\n", (*(node[1].next)).key); //node[2].key
//	//printf("key=%d\n", node[1].next->key);
//	//printf("key=%d\n", node[2].key);
//	//printf("key=%d\n", node[0].next->next->key);
//
//
//	//printf("key=%d\n", node[0].key);
//	//printf("key=%d\n", node[0].next->key);
//	//printf("key=%d\n", node[0].next->next->key);
//}
//
//void init(NODE *node, int size) {
//	node[0].key = 100;
//	node[1].key = 250;
//	node[2].key = 467;
//	node[0].next = node[1].next = node[2].next = NULL;
//}
//
//void link(NODE *node, int size) {
//	node[0].next = &node[1];
//	node[1].next = &node[2];
//}

//
//#define NUM 5
//struct NODE {
//	int key;
//	NODE* next;
//};
//
//void init(NODE* node, int size);
//void main() {
//	struct NODE node[NUM];
//	init(node, NUM);
//
//	printf("key=%d\n", node[0].key);
//	printf("key=%d\n", node[0].next->key);
//	printf("key=%d\n", node[0].next->next->key);
//	printf("key=%d\n", node[0].next->next->next->key);
//	printf("key=%d\n", node[0].next->next->next->next->key);
//}
//
//void init(NODE* node, int size) {
//	for (int i = 0; i < size; i++) {
//		printf("Type the %d-th key:",i);
//		scanf("%d", &node[i].key);
//		if (i != (size - 1))
//			node[i].next = &node[i + 1];
//		else
//			node[i].next = NULL;
//	}
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define NAME_LEN 64
//#define NUM 3
//
//struct student {
//	char name[NAME_LEN];
//	int height;
//	float weight;
//	int schols;
//};
//
//struct student func1(struct student stu) {
//	struct student result;
//	result = stu;
//	if (result.height < 180) result.height = 180;
//	if (result.weight < 100) result.weight = 100;
//	return result;
//}
//
//void func2(struct student *stu) {
//	if (stu->height < 180) stu->height = 180;
//	if (stu->weight < 100) stu->weight = 100;
//}
//
//int main() {
//	struct student stu[NUM];
//	for (int i = 0; i < NUM; i++) {
//		printf("Type %d-th student's info (Name, height, weight, schols):",i);
//		scanf("%s %d %f %d", &stu[i].name, &stu[i].height, &stu[i].weight, &stu[i].schols);
//	}
//
//	// update function1 // call by value
//	// (1) if height is less than 180, update the height as 180
//	// (2) if weight is less than 100, update the height as 100
//	//for (int i = 0; i < NUM; i++) {
//	//	struct student tmp = func1(stu[i]);
//	//	stu[i] = tmp;
//	//}
//
//	// update function1 // call by reference
//	// (1) if height is less than 180, update the height as 180
//	// (2) if weight is less than 100, update the height as 100
//	for (int i = 0; i < NUM; i++) {
//		func2(&stu[i]);
//	}
//
//	for (int i = 0; i < NUM; i++) {
//		printf("Name   = %10s %d\n", stu[i].name, &stu[i].name);
//		printf("Height = %10d %d\n", stu[i].height, &stu[i].height);
//		printf("Weight = %10f %d\n", stu[i].weight, &stu[i].weight);
//		printf("Schols = %10d %d\n\n", stu[i].schols, &stu[i].schols);
//	}
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define NUM 3
//
//struct XYZ {
//	int width;
//	int height;
//	int depth;
//	int volume;
//};
//
//void init(struct XYZ *xyz) {
//	printf("Type info (width, height, depth):");
//	//scanf("%d %d %d", &((*xyz).width), &((*xyz).height), &((*xyz).depth));
//	//(*xyz).volume = (*xyz).width * (*xyz).height * (*xyz).depth;
//
//	scanf("%d %d %d", &xyz->width, &xyz->height, &xyz->depth);
//	xyz->volume = xyz->width * xyz->height * xyz->depth;
//}
//
////void print(struct XYZ xyz) {
////	printf("\nPrinting the result\n");
////	printf("width=%d height=%d depth=%d volume=%d\n", xyz.width, xyz.height, xyz.depth, xyz.volume);
////}
//
//void print(struct XYZ *xyz) {
//	printf("\nPrinting the result\n");
//	printf("width=%d height=%d depth=%d volume=%d\n", xyz->width, xyz->height, xyz->depth, xyz->volume);
//}
//
//
//int main() {
//	struct XYZ a, b;
//	init(&a);
//	init(&b);
////	print(a);
////	print(b);
//	print(&a);
//	print(&b);
//}
