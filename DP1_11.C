#include <stdio.h>
#include <conio.h>

void main()
{
    float grams, kg;

    clrscr();
    
    printf("Enter weight in grams: ");
    scanf("%f", &grams);

    kg = grams / 1000;

    printf("Weight in kilograms = %.3f", kg);

    getch();   
}
