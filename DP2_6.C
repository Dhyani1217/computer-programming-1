#include <stdio.h>
#include <conio.h>

void main()
{
    float s1, s2, s3, total, avg;

    clrscr();

    printf("Enter marks of Subject 1: ");
    scanf("%f", &s1);

    printf("Enter marks of Subject 2: ");
    scanf("%f", &s2);

    printf("Enter marks of Subject 3: ");
    scanf("%f", &s3);

    total = s1 + s2 + s3;
    avg = total / 3;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", avg);

    if(s1 < 35 || s2 < 35 || s3 < 35)
        printf("Result: Fail (one subject < 35)");
    else
    {
        if(avg >= 70)
            printf("Result: Distinction");
        else if(avg >= 60)
            printf("Result: First Class");
        else if(avg >= 50)
            printf("Result: Second Class");
        else if(avg >= 35)
            printf("Result: Third Class");
        else
            printf("Result: Fail");
    }

    getch();
}
