#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#define T 50
#define R 0
int a[4]={0};
void store(int,int);
void erase();
void decide(char,int);
void left_to_right(int x,int y)
{
char ch;
int i;
for(i=0;;i++)
{delay(T);
erase();
gotoxy(x+i,y);
store(x+i-R,y);
printf("*");
//erase();
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
store(x-i+R,y);
printf("*");
//erase();
if(kbhit())
{ch=getch();
if(ch==72||ch==80||ch==27)
{decide(ch,1);
break;
}}}}

void top_to_bottom(int x,int y)
{char ch;
int i;
for(i=0;;i++)
{delay(T);
erase();
gotoxy(x,y+i);
store(x,y+i-R);
printf("*");
//erase();
if(kbhit())
{ch=getch();
if(ch==75||ch==27)
{decide(ch,1);
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
store(x,y-i+R);
printf("*");
//erase();
if(kbhit())
{ch=getch();
if(ch==75||ch==27)
{decide(ch,1);
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
void store(int x,int y)
{
int i=0;
a[i++]=x;
a[i]=y;
}

void erase()
{
gotoxy(a[0],a[1]);
printf(" ");
}

void main()
{
clrscr();
left_to_right(13,14);
//top_to_bottom(13,14);
//bottom_to_top(13,14);
//right_to_left(73,14);
getch();
}