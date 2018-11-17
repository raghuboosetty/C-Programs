#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
#include<stdlib.h>
#define MAX_X 80
#define MAX_Y 50
#define T 20
int flag=0,a[150][2]={0},S=15,Xpoint=1,Ypoint=1;
void erase();
void store(int,int);
void decide(char,int);
void nextpoint();
void left_to_right(int x,int y);
void right_to_left(int x,int y);
void top_to_bottom(int x,int y);
void bottom_to_top(int x,int y);
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
if(i==S && j==0) i=j=0;
}}


void store(int x,int y)
{
static int i,j;
a[i][j++]=x;
a[i++][j--]=y;
if(i==S && j==0)
{
flag=1;
i=j=0;
}}

void nextpoint()
{int i;
randomize();
Xpoint=random(MAX_X-1);
Ypoint=random(MAX_Y-1);
for(i=0;i<=S;i++)
if(a[i][0]==Xpoint&&a[i][1]==Ypoint)
nextpoint();
if(Xpoint==0||Xpoint==1) Xpoint=2;
if(Ypoint==0||Ypoint==1) Ypoint=2;
gotoxy(Xpoint,Ypoint);
printf("*");
}

void left_to_right(int x,int y)
{
char ch;
int i;
for(i=0;;i++)
{delay(T);
erase();
if(x+i>MAX_X-1){ x=2;i=0;}
gotoxy(x+i,y);
store(x+i,y);
printf("*");
if(x+i==Xpoint&&y==Ypoint) { S+=1; nextpoint();}
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
if(x-i<2){ x=79;i=0;}
gotoxy(x-i,y);
store(x-i,y);
printf("*");
if(x-i==Xpoint&&y==Ypoint) { S+=1; nextpoint();}
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
if(y+i>MAX_Y-1){ y=2;i=0;}
gotoxy(x,y+i);
store(x,y+i);
printf("*");
if(x==Xpoint&&y+i==Ypoint) { S+=1; nextpoint();}
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
if(y-i<2){ y=49;i=0;}
gotoxy(x,y-i);
store(x,y-i);
printf("*");
if(x==Xpoint&&y-i==Ypoint) { S+=1;  nextpoint();}
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
}