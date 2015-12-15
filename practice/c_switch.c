#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char answer = 0;

    printf("Enter Y or N:");
    scanf("%c", &answer);

    switch(toupper(answer))
    {
        case 'Y':
            printf("\nYou responsed in the affirmative.");
            break;
        case 'N':
            printf("\nYou responsed in the negative.");
        default:
            printf("\nYou did not respond correctly....");
    }
}

