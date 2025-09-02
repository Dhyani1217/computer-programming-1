#include <stdio.h>
#include <conio.h>

void main()
{
    float L, B, A, P;

    clrscr();

    printf("Enter length of rectangle: ");
    scanf("%f", &L);

    printf("Enter breadth of rectangle: ");
    scanf("%f", &B);

    A = L * B;
    P = 2 * (L + B);

    printf("Area of Rectangle = %.2f\n", A);
    printf("Perimeter of Rectangle = %.2f", P);

    getch();
}
