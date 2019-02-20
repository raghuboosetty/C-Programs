#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
void down(char);
void erase(int,int);
int i=0;
void main()
{
int j,x=0,y=0;
char ch='\0',a[30]={"****"};
clrscr();
getch();
for(i=0;i<50;i++)
{
delay(100);
clrscr();
gotoxy(13+i,14);
for(j=0;j<strlen(a);j++)
printf("%c",a[j]);
if(kbhit())
{ch=getch();
if(ch==80)
{
down(ch);
erase(wherex(),wherey());
break;}
}

}
getch();
}
void down(char ch)
{
int x=0,y=0;
if(ch==80)
x=wherex();
y=wherey();
while(y<30)
{
erase(13,14);
delay(100);
gotoxy(x,y++);
printf("*");
}
}

void erase(int x,int y)
{

gotoxy(13+i,14);
printf(" ");
i++;
}