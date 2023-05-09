// POINTER EXAMPLES PROG1

#include <stdio.h>
#include <conio.h>

main()
{
    int count = 100, q; // declare variables
    int *ptr;           // declare pointer
    ptr = &count;       // show pointer where to point

    // clrscr();
    printf("\nValue of the *ptr is %d", *ptr);
    q = *ptr; // stores the value of ptr into q !
    printf("\nValue of q is %d", q);
    getch();
}