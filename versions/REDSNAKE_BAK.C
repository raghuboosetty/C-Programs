#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <string.h>

void nextpoint();
void main()
{
  int i, j, snakelen = 0;
  char a[15] = {"********"};
  clrscr();
  getch();
  gotoxy(40, 15);
  printf("*");
  snakelen = strlen(a);
  _setcursortype(_NOCURSOR);
  gotoxy(10, 15);
  for (i = 0; i < 50; i++)
  {
    if (i == 30 - snakelen || i == 35 - snakelen)
    {
      snakelen = strlen(a);
      for (j = 0; j < snakelen + 1; j++)
        a[j] = '*';
      nextpoint();
    }
    delay(100);
    gotoxy(i + 10, 15);
    for (j = 0; j < strlen(a); j++)
    {
      printf("%c", a[j]);
    }
    gotoxy(i + 10 - 1, 15);
    printf(" ");
  }
  /*for(i=0;i<20;i++)
{
delay(500);
gotoxy(60,15+i);
for(j=0;j<strlen(a);j++)
{
gotoxy(60,15+i+j);
printf("%c",a[j]);
}
gotoxy(60,15+i-1);
printf(" ");
} */

  getch();
}
void nextpoint()
{
  gotoxy(45, 15);
  printf("*");
}