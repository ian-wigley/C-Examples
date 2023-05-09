#include <stdio.h>
#include <conio.h>

int a, b, c;
int y = 1;
void main()
{
  // clrscr();
  for (a = 0; a < 12; a++)
  {
    // gotoxy(10, y);
    for (b = 0; b < 20; b++)
    {
      printf("**");
    }
    getch();
    y++;
  }
  printf("\n Done!");
  getch();
}