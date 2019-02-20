#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
void main()
{
int i,j,x=0,y=0;
char a[45]={"*********************************"};
clrscr();
getch();
for(i=0;i<10;i++)
{
delay(100);
for(j=0;j<strlen(a);j++)
{
gotoxy(10+i+j,15);
printf("%c",a[j]);
}
gotoxy(10+i-1,15);
printf(" ");
}
x=wherex()+strlen(a);y=wherey();
for(j=0;j<strlen(a);j++)
{ delay(100);
gotoxy(x,y+j);
printf("%c",a[j]);
gotoxy(x-strlen(a)+j,y);
printf(" ");
}
x=wherex();y=wherey();
for(i=0;i<20;i++)
{
delay(100);
for(j=0;j<strlen(a);j++)
{
gotoxy(x,y+i+j);
printf("%c",a[j]);
}
gotoxy(x,y+i-1);
printf(" ");
}
/*x=wherex();y=wherey()+1;
for(j=0;j<strlen(a);j++)
{
gotoxy(x,y+j);
printf("%c",a[j]);
}
gotoxy(x,y+j-1);
printf(" ");*/
getch();
}
