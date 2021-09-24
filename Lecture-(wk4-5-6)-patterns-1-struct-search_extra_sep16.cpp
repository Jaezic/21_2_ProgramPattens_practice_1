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
//
//int main() {
//	struct student gildong = { "Gildong", 173, 86.2 };
//
//	printf("Name   = %10s %d\n", gildong.name, &gildong.name);
//	printf("Height = %10d %d\n", gildong.height, &gildong.height);
//	printf("Weight = %10f %d\n", gildong.weight, &gildong.weight);
//	printf("Schols = %10d %d\n", gildong.schols, &gildong.schols);
//}

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
//int main() {
//	struct student gildong;
//	printf("Type student's info (Name, height, weight, schols):");
//	scanf("%s %d %f %d", &gildong.name, &gildong.height, &gildong.weight, &gildong.schols);
//
//	printf("Name   = %10s %d\n", gildong.name, &gildong.name);
//	printf("Height = %10d %d\n", gildong.height, &gildong.height);
//	printf("Weight = %10f %d\n", gildong.weight, &gildong.weight);
//	printf("Schols = %10d %d\n", gildong.schols, &gildong.schols);
//}

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
//int main() {
//	struct student stu[NUM];
//	for (int i = 0; i < NUM; i++) {
//		printf("Type %d-th student's info (Name, height, weight, schols):",i);
//		scanf("%s %d %f %d", &stu[i].name, &stu[i].height, &stu[i].weight, &stu[i].schols);
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
//struct meet_stu {
//	int index;
//	char place[100];
//	struct student info;
//};
//
//int main() {
//	struct meet_stu stu[NUM];
//	for (int i = 0; i < NUM; i++) {
//		printf("Type %d-th student's info (index, place, Name, height, weight, schols):",i);
//		scanf("%d %s %s %d %f %d", &stu[i].index, &stu[i].place, &stu[i].info.name, &stu[i].info.height, &stu[i].info.weight, &stu[i].info.schols);
//	}
//
//	for (int i = 0; i < NUM; i++) {
//		printf("Index  = %10d %d\n", stu[i].index, &stu[i].index);
//		printf("Place  = %10s %d\n", stu[i].place, &stu[i].place);
//		printf("Name   = %10s %d\n", stu[i].info.name, &stu[i].info.name);
//		printf("Height = %10d %d\n", stu[i].info.height, &stu[i].info.height);
//		printf("Weight = %10f %d\n", stu[i].info.weight, &stu[i].info.weight);
//		printf("Schols = %10d %d\n\n", stu[i].info.schols, &stu[i].info.schols);
//	}
//}

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
//void print(struct student s) {
//	printf("Name   = %10s %d\n", s.name, &s.name);
//	printf("Height = %10d %d\n", s.height, &s.height);
//	printf("Weight = %10f %d\n", s.weight, &s.weight);
//	printf("Schols = %10d %d\n", s.schols, &s.schols);
//}
//
//int main() {
//	struct student gildong;
//
//	printf("Type student's info (Name, height, weight, schols):");
//	scanf("%s %d %f %d", &gildong.name, &gildong.height, &gildong.weight, &gildong.schols);
//	print(gildong);
//}


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
//struct student get_info() { 
//	struct student tmp;
//	printf("Type student's info (Name, height, weight, schols):");
//	scanf("%s %d %f %d", &tmp.name, &tmp.height, &tmp.weight, &tmp.schols);
//	return tmp;
//}
//void print(struct student s) {
//	printf("Name   = %10s %d\n", s.name, &s.name);
//	printf("Height = %10d %d\n", s.height, &s.height);
//	printf("Weight = %10f %d\n", s.weight, &s.weight);
//	printf("Schols = %10d %d\n", s.schols, &s.schols);
//}
//
//int main() {
//	struct student gildong;
//	gildong = get_info();
//	print(gildong);
//}


//
//struct student {
//	char name[NAME_LEN];
//	int height;
//	float weight;
//	int schols;
//};
//
//struct student get_info() {
//	struct student tmp;
//	printf("Type student's info (Name, height, weight, schols):");
//	scanf("%s %d %f %d", &tmp.name, &tmp.height, &tmp.weight, &tmp.schols);
//	return tmp;
//}
//
//void update(struct student s) {
//	s.height = 200;
//	s.weight = 300;
//}
//void print(struct student s) {
//	printf("Name   = %10s %d\n", s.name, &s.name);
//	printf("Height = %10d %d\n", s.height, &s.height);
//	printf("Weight = %10f %d\n", s.weight, &s.weight);
//	printf("Schols = %10d %d\n", s.schols, &s.schols);
//}
//
//int main() {
//	struct student gildong;
//	gildong = get_info();
//	update(gildong);
//	print(gildong);
//}
//

//
//struct student {
//	char name[NAME_LEN];
//	int height;
//	float weight;
//	int schols;
//};
//
//struct student get_info() {
//	struct student tmp;
//	printf("Type student's info (Name, height, weight, schols):");
//	scanf("%s %d %f %d", &tmp.name, &tmp.height, &tmp.weight, &tmp.schols);
//	return tmp;
//}
//
//void update(struct student *s) {
//	s->height = 200;
//	s->weight = 300;
//}
//void print(struct student s) {
//	printf("Name   = %10s %d\n", s.name, &s.name);
//	printf("Height = %10d %d\n", s.height, &s.height);
//	printf("Weight = %10f %d\n", s.weight, &s.weight);
//	printf("Schols = %10d %d\n", s.schols, &s.schols);
//}
//
//int main() {
//	struct student gildong;
//	gildong = get_info();
//	update(&gildong);
//	print(gildong);
//}