#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned long bytes;
    float kb, mb, gb;

    clrscr();   

    printf("Enter size in Bytes: ");
    scanf("%lu", &bytes);

    kb = bytes / 1024.0;
    mb = bytes / (1024.0 * 1024);
    gb = bytes / (1024.0 * 1024 * 1024);

    printf("\nSize in KB = %.2f", kb);
    printf("\nSize in MB = %.2f", mb);
    printf("\nSize in GB = %.2f", gb);

    getch();   
}
