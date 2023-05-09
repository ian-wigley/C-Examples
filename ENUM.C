#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

enum saleman
{
  Brown,
  Jones,
  Smith
};
int i = 0, j = 0, month = 1;
char input[10];
void main()
{
  enum saleman names;
  clrscr();
  names = 2;
  printf("%d", names);

  switch (names)
  {
  case 0:
    printf("Brown");
    break;

  case 1:
    printf("Jones");
    break;

  case 2:
    printf("Smith");
    break;
  }
  getch();
}