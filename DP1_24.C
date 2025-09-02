#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;

    clrscr();

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter second value: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("After swapping:\n");
    printf("First value = %d\n", a);
    printf("Second value = %d", b);

    getch();
}
