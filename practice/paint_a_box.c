#include <stdio.h>

int main(void)
{
    int box_length = 10;
    int box_width = 20;
    for(int i = 0; i <= box_length; i++)
    {
        if(i == 0 || i == box_length)
        {
            for(int j = 0; j <= box_width; j++)
                printf("*");
            printf("\n");
        }
        else
        {
            printf("*");
            for(int y = 1; y < box_width; y++)
                printf(" ");
            printf("*\n");
        }
    }
    return 0;
}

