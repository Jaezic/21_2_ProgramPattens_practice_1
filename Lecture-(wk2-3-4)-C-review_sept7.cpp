//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(){
//	char message[81] = "Program";
//	char names[10][20] = { "Hong Gil Dong", "Choi Kiho" };
//
//	puts(message);
//	puts(names[0]);
//	puts(names[1]);
//	return 0;
//}

//
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
//	for (i = 1; i <= MAXNUM; i = i + 1)
//		if (max < local_array[i])
//			max = local_array[i];
//	printf("%d\n", max);
//}


//
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

