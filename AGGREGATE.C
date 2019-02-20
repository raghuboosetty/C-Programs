		       /*  program to cal. aggregate */

#include<stdio.h>
#include<conio.h>
static int a,b,c;
float tot=0,otot=0,d=0,e=0;
float ptot=0,per=0,x=0,agg=0;
char heart = 1;
void main()
{ clrscr();
	textcolor(WHITE); cprintf("                                   RED");
	textcolor(20);cprintf("HEART                                      ");
	textcolor(24);cprintf("\n         --------- Want to increase your aggregrate by this sem -------- ");cprintf("                             but by how much ? check this out !!");
	getch();
	printf("\n\nNO");
	textcolor(20);cprintf("TE");printf(": ONLY FOR B.");cprintf("TE");printf("CH STUDENTS OF ");cprintf("JN");printf("TU\n");printf("\nan attempt to write a prog by:      ");printf("B");cprintf(".");
	printf("RA");cprintf("GHU");printf("\nactually I worte it for my friend:  ");printf("T.");cprintf("TEJA");printf("SWI\n\n");cprintf("C");printf("SE student of");cprintf("  -");printf(">  HITS COE");printf("\nif there are any errors plz tell me");
	getch();
	printf("\n\nWARN");cprintf("ING");printf(": ENTER VALUES WITHIN ");cprintf("0");printf("-");cprintf("9");printf(" ONLY, FAILING TO DO SO MAY \n\t RESULT IN");cprintf(" UN");printf("DESIRED TERMINATION");
	getch();
redheart:
	textcolor(20);printf("\n\nchoose one of the following options:-\n");printf("1");cprintf(")");printf(" I have backlogs\n2");cprintf(")");printf(" I don't have any backlogs\n");
	scanf("%d",&a);
	if(a==1)
	{sem();
	 textcolor(20);printf("\nenter the back");cprintf("logs");printf(" you have till now: ");
	 scanf("%f",&d);
	 printf("\nenter your marks with");cprintf("out ");printf("including back");cprintf("log");printf("s\n");
	 aggtot();
red6:
	 printf("\nenter the ");cprintf("agg");printf("regate you need by clearing back");cprintf("log");printf("s: ");
	 scanf("%f",&agg);
	 if(agg<0 || agg>100){
	 printf("\nyou cannot have this agg\n");
	 goto red6; }
	 if(c==1){
		x = (float)((agg*tot)/100)-otot;
		e = (float)x/d;  }
	 else {
		otot = (float)(ptot*(tot-(d*100)))/100;
		x = (float)((agg*tot)/100)-otot;
		e = (float)x/d;  }
	 if(e<0 || e>100){
		printf("\ntake it easy dude you cannot get this aggregate \nbecause\n");
		getch();}
		printf("\nthe ");cprintf("mar");printf("ks you need in ");cprintf("ea");printf("ch sub");cprintf("jec");printf("t is at");cprintf("le");printf("ast: ");
		textcolor(11);cprintf("%.0f",e);printf("\n(out of 100)");getch(); }
	else if(a==2) {
		sem();
		aggtot();
		textcolor(20);
red5:
		printf("\nenter the ");	cprintf("agg");	printf("regate you need by this sem = ");
		scanf("%f",&agg);
	if(agg<0||agg>100){
		printf("\ndont try to be smart re-enter the values\n");
		goto red5; }
	if(c==1){
		x = (float)((agg*(tot+750))/100)-otot;
		per = (float)(x/750)*100;}
	else	{
		otot = (ptot*tot)/100;
		if(b!=6){
			x = (float)((agg*(tot+750))/100)-otot;
			per = (float)(x/750)*100;}
		if(b==6){
			x = (float)((agg*(tot+500))/100)-otot;
			per = (float)(x/500)*100;}
		}
	if(x>750 || per>100.00 || x<0 || per<0)	{
		printf("\ntake it easy you cannot get this agg this sem atleast\nbecause\n");
		getch();}
		printf("\nthe m");cprintf("ark");printf("s you need to get in this ");cprintf("s");printf("em: ");
		textcolor(11);cprintf("%.0f",x);
	if(b!=6)
		printf("\n(out of 750)");
	if(b==6)
		printf("\n(out of 500)");printf("\n\nthe ");textcolor(20);cprintf("per");printf("cent you need in this se");cprintf("m");printf(":      ");
		textcolor(11);cprintf("%.2f",per);
		getch();
	}
	printf("\n\nwant to check again then hit '");textcolor(20);cprintf("1");printf("' else any key to exit: ");
	scanf("%d",&heart);
	while(heart==1)	goto redheart;
	clrscr();
	gotoxy(35,12);
	textcolor(WHITE);cprintf("RED");
	textcolor(20);cprintf("HEART");
	getch();
	}

	int sem()
	{
red1:
		printf("enter the ");textcolor(20);cprintf("sem");printf("ester you complet");cprintf("ed");
		printf("\n1) 1st yr\n2) 2-1\n3) 2-2\n4) 3-1\n5) 3-2\n6) 4-1\n");
		scanf("%d",&b);
		if(b>0||b<7){
		 switch(b){
			   case 1:tot=1075;break;
			   case 2:tot=1825;break;
			   case 3:tot=2575;break;
			   case 4:tot=3325;break;
			   case 5:tot=4075;break;
			   case 6:tot=4825;break; } }
		else {
		      printf("\nstupid enter within the limits\n\n");
		      getch();
		      goto red1;
		     } return;
	}

	int aggtot()
	{
red2:
		textcolor(20);printf("\n1) enter your overall ");cprintf("tot");printf("al or\n2) enter your overall ");cprintf("agg");printf("regate\n");
		scanf("%d",&c);
		if(c==1)
		{
red4:
			printf("\nenter your ");cprintf("tot");printf("al = ");
			scanf("%f",&otot);
			if(otot<1||otot>tot){
			 printf("you cannot have this total\n\n");
			 goto red4;}
		}
		else if(c==2){
red3:
			printf("\nenter your current");	cprintf(" agg");printf("regate = ");
			scanf("%f",&ptot);
			if(ptot<1 || ptot >100){
			 printf("\nyou cannot have this aggregate\n\n");
			 goto red3; }}
		else {
			printf("\nstupid again !!\n");printf("\noye!  donkey enter the values within the given limits\n\n");
			getch();
			goto red2;
		}return;
	}























