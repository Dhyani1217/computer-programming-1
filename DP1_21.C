#include <stdio.h>
#include <conio.h>

void main()
{
    float gross, allowance, deduction, net;

    clrscr();

    printf("Enter Gross Salary: ");
    scanf("%f", &gross);

    allowance = gross * 0.10;
    deduction = gross * 0.03;

    net = gross + allowance - deduction;

    printf("Net Salary = %.2f", net);

    getch();
}
