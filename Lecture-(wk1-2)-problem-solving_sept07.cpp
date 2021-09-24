//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//
//#include  <stdlib.h>
//#include  <time.h>
//
//#define BAR 1
//#define BELL 2
//#define LEMON 3
//#define CHERRY 4
//#define RMAX 4
//
//int main() {
//    int slot1, slot2, slot3;
//    char anykey;
//    while (1) {
//        printf("type any key to start the slot machine:");
//        scanf("%c", &anykey);
//        srand(time(NULL));
//        slot1 = 1 + (int)rand() % RMAX;
//        slot2 = 1 + (int)rand() % RMAX;
//        slot3 = 1 + (int)rand() % RMAX;
//        if (slot1 == slot2 && slot2 == slot3 && slot1 == CHERRY)
//            printf("Congratulations On A JACKPOT\n");
//        else if (slot1 == CHERRY || slot2 == CHERRY || slot3 == CHERRY)
//            printf("Paid Out : One DIME\n");
//        else if (slot1 == slot2 && slot2 == slot3)
//            printf("Paid Out : One Nickel\n");
//        else 
//            printf("Sorry.Better Luck Next Time\n");
//    }
//    return 0;
//}
//
//
//#include  <stdlib.h>
//#include  <time.h>
//#define BAR 1
//#define BELL 2
//#define LEMON 3
//#define CHERRY 4
//#define RMAX 4
//
//int main() {
//    char slot_array[5][100] = { "","BAR","BELL","LEMON","CHERRY" };
//    int slot1, slot2, slot3;
//    char anykey;
//    while (1) {
//        // Get input value 
//        printf("Welcom to KW Land\n");
//        printf("Please pull the slot machin!! (Enter any key)");
//        scanf("%c", &anykey);
//
//        // Run the slot machine
//        srand(time(NULL));
//        slot1 = 1 + (int)rand() % RMAX;
//        slot2 = 1 + (int)rand() % RMAX;
//        slot3 = 1 + (int)rand() % RMAX;
//
//        printf("\n");
//        printf("\nFirst is %s\n",slot_array[slot1]);
//        printf("Second is %s\n",slot_array[slot2]);
//        printf("Third is %s\n",slot_array[slot3]);
//
//        // Determine the winning and print the result
//        printf("\n");
//        if (slot1 == slot2 && slot2 == slot3 && slot1 == CHERRY)
//            printf("Congratulations On A JACKPOT\n");
//        else if (slot1 == CHERRY || slot2 == CHERRY || slot3 == CHERRY)
//            printf("Paid Out : One DIME\n");
//        else if (slot1 == slot2 && slot2 == slot3)
//            printf("Paid Out : One Nickel\n");
//        else
//            printf("Sorry.Better Luck Next Time\n");
//        printf("\n\n");
//    }
//    return 0;
//}