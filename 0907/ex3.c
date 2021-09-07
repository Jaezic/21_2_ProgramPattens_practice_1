#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define BAR 1
#define BELL 2
#define LEMON 3
#define CHERRY 4

int main()
{
    char slot_name[4][50] = {"BAR", "BELL", "LEMON", "CHERRY"};
    char anykey;
    // ===========Iterate Indefinitely
    while (1)
    {
        // Run the Slot Machine
        printf("Welcome to KW Land\nPlease pull the slot machine !!\n");
        scanf("%c", &anykey);
        if (anykey == 'a')
            break;
        int slot[3] = {
            0,
        };
        srand(time(NULL));
        for (int i = 0; i < 4; i++)
        {
            slot[i] = rand() % 4 + 1;
            switch (i)
            {
            case 0:
                printf("\nFirst is %s",
                       slot_name[slot[i] - 1]);
                break;
            case 1:
                printf("\nSecond is %s", slot_name[slot[i] - 1]);
                break;
            case 2:
                printf("\nThird is %s", slot_name[slot[i] - 1]);
                break;
            default:
                break;
            }
        }
        // Determine the Winning
        if (slot[0] == CHERRY && slot[1] == CHERRY && slot[2] == CHERRY)
        {
            printf("\n\nCongratulations ON A JACKPOT\n\n");
        }
        else if (slot[0] == CHERRY || slot[1] == CHERRY || slot[2] == CHERRY)
        {
            printf("\n\nPaid out : One DIME\n\n");
        }
        else if (slot[0] == slot[1] == slot[2])
        {
            printf("\n\nPaid out : One NICKEL\n\n");
        }
        else
            printf("\n\n Sorry. Better Luck Next Time\n\n");
    }
}