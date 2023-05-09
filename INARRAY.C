#include <stdio.h>
#include <conio.h>

int smithsales[12];
int brownsales[12];
int jonessales[12];
int totalsmith;
int totalbrown;
int totaljones;

int a, b;

void main()
{
       for (a = 0; a < 3; a++)
       {
              for (b = 0; b < 12; b++)
              {
                     if (a == 0)
                     {
                            printf("\nEnter smith sales ");
                            scanf("%d", &smithsales[b]);
                            totalsmith = totalsmith + smithsales[b];
                     }

                     if (a == 1)
                     {
                            printf("\nEnter brown sales ");
                            scanf("%d", &brownsales[b]);
                            totalbrown = totalbrown + brownsales[b];
                     }

                     if (a == 2)
                     {
                            printf("\nEnter jones sales ");
                            scanf("%d", &jonessales[b]);
                            totaljones = totaljones + jonessales[b];
                     }
              }
              if (a == 0)
                     printf("total smith slaes are %d", totalsmith);
              if (a == 1)
                     printf("total jones sales are %d", totaljones);
              if (a == 2)
                     printf("total brown sales are %d", totalbrown);
              getch();
       }
}