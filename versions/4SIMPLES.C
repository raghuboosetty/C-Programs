#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#define T 500
//#define S 5
int flag=0,a[4][2]={0},S=3;
void erase();
void store(int,int);
void decide(char,int);
void nextpoint();
void erase()
{
static int i,j;
int x1,x2,y1,y2;
if(flag==1)
{
x1=i;
y1=j++;
x2=i++;
y2=j--;
gotoxy(a[x1][y1],a[x2][y2]);
printf(" ");
if(i==S&&j==0) i=j=0;
}}


void store(int x,int y)
{
static int i,j;
a[i][j++]=x;
a[i++][j--]=y;
if(i==S&&j==0)
{
flag=1;
i=j=0;
}}

void nextpoint()
{
gotoxy(20,40);
printf("*");
}

void left_to_right(int x,int y)
{
char ch;
int i;
for(i=0;;i++)
{delay(T);
erase();
gotoxy(x+i,y);
store(x+i,y);
if(x+i==20&&y==40) S+=1;
printf("*");
if(kbhit())
{ch=getch();
if(ch==72||ch==80||ch==27)
{decide(ch,0);
break;
}}}}

void right_to_left(int x,int y)
{ char ch;
int i;
for(i=0;;i++)
{delay(T);
erase();
gotoxy(x-i,y);
store(x-i,y);
if(x-i==20&&y==40) S+=1;
printf("*");
if(kbhit())
{ch=getch();
if(ch==72||ch==80||ch==27)
{decide(ch,2);
break;
}}}}

void top_to_bottom(int x,int y)
{char ch;
int i;
for(i=0;;i++)
{delay(T);
erase();
gotoxy(x,y+i);
store(x,y+i);
if(x==20&&y+i==40) S+=1;
printf("*");
if(kbhit())
{ch=getch();
if(ch==75||ch==27)
{decide(ch,2);
break;
}
else
if(ch==77||ch==27)
{decide(ch,0);
break;
}}}}


void bottom_to_top(int x,int y)
{ char ch;
int i;
for(i=0;;i++)
{delay(T);
erase();
gotoxy(x,y-i);
store(x,y-i);
if(x==20&&y-i==40) S+=1;
printf("*");
if(kbhit())
{ch=getch();
if(ch==75||ch==27)
{decide(ch,2);
break;
}
else
if(ch==77||ch==27)
{decide(ch,0);
break;
}}}}


void decide(char ch,int a)
{
int x,y;
x=wherex();
y=wherey();
switch(ch)
{
case 27:exit(0);
case 72:bottom_to_top(x-a,y);	break;
case 75:right_to_left(x-a,y);	break;
case 77:left_to_right(x-a,y);	break;
case 80:top_to_bottom(x-a,y);	break;
}}


void main()
{
clrscr();
nextpoint();
_setcursortype(_NOCURSOR);
left_to_right(13,14);
//top_to_bottom(13,14);
//bottom_to_top(13,14);
//right_to_left(73,14);
getch();
}