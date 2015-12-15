#include <stdio.h>
#include <stddef.h>
#include <locale.h>

int main()
{
    float radius = 0.0f;
    float diameter = 0.0f;
    float circumference = 0.0f;
    float area = 0.0f;
    float Pi = 3.14159265f;
    printf("Input the diameter of the table : ");
    scanf("%f", &diameter);
    radius = diameter/2.0f;
    circumference = 2.0f*Pi*radius;
    area = Pi*radius*radius;
    printf("\nThe circumference is %.2f", circumference);
    printf("\nThe area is %.2f\n", area);
    setlocale(LC_CTYPE, "");
    wchar_t wch = L'你';
    scanf("%lc", &wch);
    printf("You enterd %lc", wch);
    return 0;
}
