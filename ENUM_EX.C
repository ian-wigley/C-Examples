// *******************
// ENUMeration example
// *******************

#include <stdio.h>
#include <conio.h>

enum computer
{
    keyboard,
    cpu,
    screen,
    printer
}; // variable can be included

void main(void)
{
    enum computer comp; // declare variable called comp
    comp = cpu;         // declare variable to 1st array
    clrscr();
    printf("%s", comp);
    getch();
}