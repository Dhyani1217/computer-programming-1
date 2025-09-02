#include <stdio.h>
#include <conio.h>

void main()
{
    float gross, net;

    clrscr();

    printf("Enter Gross Sales: ");
    scanf("%f", &gross);

    net = gross - (gross * 0.10);

    printf("Net Sales = %.2f", net);

    getch();
}
