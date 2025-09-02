#include <stdio.h>
#include <conio.h>

void main()
{
    float gross, allowance, deduction, net;

    clrscr();

    printf("Enter Gross Salary: ");
    scanf("%f", &gross);

    if(gross > 10000)
    {
        allowance = gross * 0.10;
        deduction = gross * 0.03;
    }
    else if(gross > 5000)
    {
        allowance = gross * 0.07;
        deduction = gross * 0.02;
    }
    else
    {
        allowance = gross * 0.05;
        deduction = gross * 0.01;
    }

    net = gross + allowance - deduction;

    printf("Net Salary = %.2f", net);

    getch();
}
