#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>

int main(void)
{
    char another_game = 'Y';
    bool correct = true;
    int sequence_length = 0;
    int counter = 0;
    time_t seed = 0;
    time_t now = 0;
    int number = 0;
    float cpu_time_used;

    do
    {
        counter = 0;
        correct = true;
        sequence_length = 2;

        while(correct)
        {
            seed = time(NULL);
            now = clock();
            /*Generate a sequence of numbers and display the number.*/
            srand((unsigned int)seed);
            for(int i = 1; i <= sequence_length; i++)
                printf("%d\n", rand() % 10);
            printf("@@@@@@@@");

            /*Wait one second*/
            for( ;(clock() - now) < CLOCKS_PER_SEC * 3; );

            cpu_time_used = ((double) (clock() - now)) / CLOCKS_PER_SEC;
            printf("%f", cpu_time_used);

            /*overwrite the digit sequence */
            printf("\r");
            for(int i = 1; i <= sequence_length; i++)
                printf("  ");
            
            if(counter == 1)
                printf("\nenter the sequencei\n");
            else
                printf("\r");
                
            srand((unsigned int) seed);
            for(int i = 1; i <= sequence_length; i++)
            {
                scanf("%d", &number);
                if(number != rand() % 10)
                {
                    correct = false;
                    break;
                }
            }
            printf("%s\n", correct ? "Correct!" : "Wrong!");
        }


        printf("\n Do you want to play again (y/n)?");
        scanf("%c\n", &another_game);
    }while(toupper(another_game) == 'Y');
    return 0;
}
