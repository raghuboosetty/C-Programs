			              /*  SUDOKU SOLVER IN C  */

#include<stdio.h>
#include<conio.h>
int a1[10][10]={{0  ,0,0,0  ,0,0,0  ,0,0,0},
	       {0  ,0,0,0  ,0,0,1  ,0,0,0},
	       {0  ,8,0,0  ,0,0,5  ,0,6,4},
	       {0  ,0,0,0  ,4,0,0  ,7,0,2},
	       {0  ,7,0,8  ,0,0,0  ,3,0,0},
	       {0  ,4,0,0  ,6,0,9  ,0,0,7},
	       {0  ,0,0,1  ,0,0,0  ,4,0,9},
	       {0  ,5,0,9  ,0,0,2  ,0,0,0},
	       {0  ,6,1,0  ,9,0,0  ,0,0,3},
	       {0  ,0,0,0  ,3,0,0  ,0,0,0} };   /* medium */
int a2[10][10]={{0,0,0,0,0,0,0,0,0,0},
		 {0,0,3,0,0,0,0,0,9,0},
		 {0,4,0,0,8,0,9,0,0,1},
		 {0,9,0,8,0,0,0,2,0,5},
		 {0,0,8,5,2,0,3,9,1,0},
		 {0,0,0,0,0,0,0,0,0,0},
		 {0,0,6,9,1,0,4,3,7,0},
		 {0,8,0,7,0,0,0,1,0,2},
		 {0,5,0,0,9,0,7,0,0,3},
		 {0,0,1,0,0,0,0,0,6,0}};         /* medium */
int a3[10][10]={{0  ,0,0,0  ,0,0,0  ,0,0,0},
	       {0  ,8,0,0  ,0,0,7  ,6,0,1},
	       {0  ,0,1,0  ,0,2,5  ,0,3,0},
	       {0  ,7,0,4  ,3,0,0  ,2,0,0},
	       {0  ,5,8,0  ,0,9,0  ,3,0,0},
	       {0  ,0,6,0  ,4,1,8  ,0,7,0},
	       {0  ,0,0,9  ,0,5,0  ,0,2,6},
	       {0  ,0,0,8  ,0,0,2  ,5,0,9},
	       {0  ,0,9,0  ,6,7,0  ,0,8,0},
	       {0  ,4,0,1  ,5,0,0  ,0,0,3} };      /* esay */
int a4[10][10] ={{0  ,0,0,0  ,0,0,0  ,0,0,0},
		{0  ,0,0,9  ,0,0,2  ,0,0,0},
		{0  ,0,0,0  ,0,7,0  ,2,0,8},
		{0  ,6,0,0  ,5,1,0  ,0,7,4},
		{0  ,0,0,2  ,6,0,0  ,8,3,0},
		{0  ,0,0,0  ,0,0,0  ,0,0,0},
		{0  ,0,6,3  ,0,0,8  ,7,0,0},
		{0  ,8,4,0  ,0,2,5  ,0,0,6},
		{0  ,5,0,1  ,0,8,0  ,0,0,0},
		{0  ,0,0,0  ,3,0,0  ,1,0,0} };        /* easy */

static int i1,i2,i3,i,j,p,x,l1,m1,l,m,z1,z2;
int a[10][10]={0},b[30]={0},c[10]={0,1,2,3,4,5,6,7,8,9},d[10][10][10]={0},color1[10][10]={0},color2[10][10]={0};
static int count,count1,rcount,scount,cnt1,cnt2,v1,v2,v3,v4,v5;
int chk1(int,int),chk2(int,int),check();
void display();

void main()
{
	clrscr();
	textcolor(20);cprintf("                                  RED");printf("HEART\n\n              --------------  SU");cprintf("DO");printf("KU PU");cprintf("ZZ");printf("LE !  --------------  \n\n\nan attempt to write a ");
	cprintf("prog");printf("ram by :    B.");cprintf("RAG");printf("HU\n\n");
getch();
	printf("IIIyr");cprintf(" C");printf("SE student of");cprintf("  -");printf(">  HITS COE\nif there are any errors plz tell me");
getch();
	printf(" \n\nWA");cprintf("RN");printf("ING: \n     -");cprintf(">  ENT");printf("ER THE VALUE BETWEEN ");cprintf("0");printf("-");cprintf("11");printf(" FAI");cprintf("L");printf("ING TO DO SO MAY\n         RESULT IN UNDESI");cprintf("RED ");printf("TERMI");cprintf("NA");printf("TION\n     -");
	cprintf(">");printf("  PLZ ENTER CO");cprintf("RRE");printf("CT VALUES INTO SU");cprintf("DO");printf("KU OTHERWISE IT\n         MAY N");cprintf("O");printf("T SO");cprintf("L");printf("VE !\n\n\n");
	getch();
red0:
	printf("  choose one of the following options:- \n1");cprintf(")");printf(" want to enter the wh");cprintf("o");printf("le su");cprintf("do");printf("ku including em");cprintf("p");printf("ty cells or\n2");cprintf(")");printf(" want to enter the su");
	cprintf("do");printf("ku values to a par");cprintf("ti");printf("cular loc");cprintf("at");printf("ion\n   ");cprintf("or");printf(" to mo");cprintf("di");printf("fy the va");cprintf("lu");printf("es\n3");cprintf(")");printf(" want to p");cprintf("la");printf("y the def");
	cprintf("a");printf("ult su");cprintf("do");printf("ku as a sa");cprintf("m");printf("ple \n");
	scanf("%d",&v1);
	if(v1==1||v1==2||v1==3){
	  switch(v1){
	     case 1: printf("\n\nRules for en");cprintf("te");printf("ring the values:-\n");printf("rule");cprintf("1");printf(" -> you have to enter the '");cprintf("81");
			printf("' values including Z");cprintf("ER");printf("O'S\n         r u still r");cprintf("ea");printf("dy ?\n");printf("rule");cprintf("2");printf(" -> enter the values row wise with W");
			cprintf("HI");printf("TE SP");cprintf("AC");printf("ES in between\n");printf("rule");cprintf("3");printf(" -> if u want to exit in between just hit '");cprintf("11");printf("' to e");cprintf("xi");printf("t\n\nenter values:- \n\n");			for(i=1;i<10;i++)
			for(j=1;j<10;j++)
			{ scanf("%d",&a[i][j]);
			  if(a[i][j]==11)
			  {a[i][j]=0;
			  goto red1; }}
red1:
			break;
	      case 2: printf("\n\nRules to en");cprintf("t");printf("er: \n" );printf("Rule");cprintf("1");printf(" -> enter values r");cprintf("o");
			printf("w followed by co");cprintf("lu");printf("mn and the value with WHI");cprintf("TES");printf("PACES\n");printf("Rule");cprintf("2");printf(" -> after entering all values hit '");
			cprintf("11");printf("' to e");	cprintf("x");printf("it\n\nenter values :-\n\n");
red2:
			scanf("%d",&i);
			if(i==11)break;
			scanf("%d",&j);
			scanf("%d",&a[i][j]);
			goto red2;
	      case 3: printf("you entered to p");cprintf("la");printf("y default su");cprintf("do");printf("ku\n");
			getch();
			printf("\nchoose any of the ");cprintf("4");printf(" default SU");cprintf("DO");printf("KU's:-\n");printf("1");cprintf(")");printf("SU");cprintf("DO");printf("KU1\n");
			printf("2");cprintf(")");printf("SU");cprintf("DO");printf("KU2\n3");cprintf(")");printf("SU");cprintf("DO");printf("KU3\n4");cprintf(")");printf("SU");cprintf("DO");printf("KU4\n");
			scanf("%d",&v4);
			switch (v4) {
        case 1:
          for (i = 1; i < 10; i++)
            for (j = 1; j < 10; j++)
              a[i][j] = a1[i][j];
          break;
        case 2:
          for (i = 1; i < 10; i++)
            for (j = 1; j < 10; j++)
              a[i][j] = a2[i][j];
          break;
        case 3:
          for (i = 1; i < 10; i++)
            for (j = 1; j < 10; j++)
              a[i][j] = a3[i][j];
          break;
        case 4:
          for (i = 1; i < 10; i++)
            for (j = 1; j < 10; j++)
              a[i][j] = a4[i][j];
          break;
        }}}
	else{
	printf("want to e");cprintf("x");printf("it ");cprintf("?");printf("\nhit '");cprintf("1");printf("' to continue else hit '");cprintf("11");printf("' to e");cprintf("x");printf("it\n");
	scanf("%d",&v2);
	if (v2 == 1) goto red0;
	}

	v3 = check();
	printf("\n");
	if (v3 == 1) goto red0;
	printf("\nstill want to modify then hit '");
	textcolor(20);
	cprintf("1");
	printf("' else hit any other ");
	cprintf("NUMB");
	printf("ER :\n");
	scanf("%d", & v5);
	if (v5 == 1) goto red0;

	i = j = 0;
	for (i1 = 1; i1 < 10; i1++)
	  for (i2 = 1; i2 < 10; i2++)
	    if (a[i1][i2] == 0) count++;
	count1 = count;
	display();
	getch();

round1:
	if (count == count1 / 3 || count == count1 / 2 || count == count1 / 5) {
	  display();
	  getch();
	}
	for (i = 1; i < 10; i++)
	  for (j = 1; j < 10; j++)
	    if (a[i][j] == 0) {
	      x = 0;
	      cnt1 = 0;
	      for (i1 = 0; i1 < 10; i1++) c[i1] = i1; /* intializing c[10] with 1-10 */
	      rcount = chk1(i, j);
	      if (rcount == 1) goto round1;
	    }
  display();

round2:
	if(count!=0)
	{
	  cnt2 = count;
	  for (z1 = 1; z1 < 10; z1++)
	    for (z2 = 1; z2 < 10; z2++)
	      if (z1 == 1 || z1 == 4 || z1 == 7)
	        if (z2 == 1 || z2 == 4 || z2 == 7) scount = chk2(z1, z2);
	  if (scount == 1) goto round1;
	  display();
	  getch();
	}
	if(count!=0)
	{ 
    textcolor(WHITE);printf("\n");cprintf("cannot solve the SUDOKU puzzle !");
  }
	printf("\n\n");cprintf("an attempt to write a prog. by: ");textcolor(20);cprintf("RAG");textcolor(WHITE);cprintf("HU");textcolor(WHITE);
	getch();
}

int chk1(int i, int j) {
  for (p = 1; p < 10; p++)
    if (a[i][p] != 0) {
      b[x] = a[i][p];
      x++;
    }
  for (p = 1; p < 10; p++)
    if (a[p][j] != 0) {
      b[x] = a[p][j];
      x++;
    }

  if (i >= 1 && i <= 3) l = 1;
  else if (i >= 3 && i <= 6) l = 4;
  else l = 7;

  if (j >= 1 && j <= 3) m = 1;
  else if (j >= 3 && j <= 6) m = 4;
  else m = 7;

  for (l1 = l; l1 < l + 3; l1++)
    for (m1 = m; m1 < m + 3; m1++)
      if (a[l1][m1] != 0) {
        b[x] = a[l1][m1];
        x++;
      }
  for (i1 = 0; i1 < x; i1++)
    for (i2 = 1; i2 < 10; i2++)
      if (b[i1] == c[i2]) c[i2] = 0;

  for (i1 = 1; i1 < 10; i1++) {
    d[i][j][i1] = c[i1];
    if (c[i1] != 0) cnt1++;
  }

  if (cnt1 == 1) {
    for (i1 = 1; i1 < 10; i1++)
      if (c[i1] != 0) {
        color1[i][j] = a[i][j] = c[i1];
        count--;
      }
    return 1;
  } else return 0;
}

int chk2(int z1, int z2) {
  register int k1, k2, k3, k4, k5, k6;
  static int f[10][10][10], g[10][10][10], count2;

  for (k1 = z1; k1 < z1 + 3; k1++)
    for (k2 = z2; k2 < z2 + 3; k2++)
      for (k3 = 1; k3 < 10; k3++)
        for (k4 = k1 + 1; k4 < z1 + 3; k4++)
          for (k5 = z2; k5 < z2 + 3; k5++)
            for (k6 = 1; k6 < 10; k6++)
              if (d[k1][k2][k3] == d[k4][k5][k6]) {
                d[k4][k5][k6] = 0;
                f[k1][k2][k3] = d[k1][k2][k3];
              }

  for (k1 = z1; k1 < z1 + 3; k1++)
    for (k2 = z2; k2 < z2 + 3; k2++)
      for (k3 = 1; k3 < 10; k3++)
        for (k5 = k2 + 1; k5 < z2 + 3; k5++)
          for (k6 = 1; k6 < 10; k6++)
            if (d[k1][k2][k3] == d[k1][k5][k6]) {
              d[k1][k5][k6] = 0;
              g[k1][k2][k3] = d[k1][k2][k3];
            }

  for (k1 = z1; k1 < z1 + 3; k1++)
    for (k2 = z2; k2 < z2 + 3; k2++)
      for (k3 = 1; k3 < 10; k3++) {
        if (f[k1][k2][k3] == d[k1][k2][k3])
          d[k1][k2][k3] = 0;
      }

  for (k1 = z1; k1 < z1 + 3; k1++)
    for (k2 = z2; k2 < z2 + 3; k2++)
      for (k3 = 1; k3 < 10; k3++) {
        if (g[k1][k2][k3] == d[k1][k2][k3])
          d[k1][k2][k3] = 0;
      }

  for (k1 = z1; k1 < z1 + 3; k1++)
    for (k2 = z2; k2 < z2 + 3; k2++) {
      count2 = 0;
      if (a[k1][k2] == 0) {
        for (k3 = 1; k3 < 10; k3++)
          if (d[k1][k2][k3] != 0) count2++;
        if (count2 == 1)
          for (k3 = 1; k3 < 10; k3++)
            if (d[k1][k2][k3] != 0) {
              color2[k1][k2] = a[k1][k2] = d[k1][k2][k3];
              count--;
              count2 = 0;
            }
      }
    }
  if (count < cnt2) return 1;
  else return 0;
}

	void display()
	{ clrscr();
		textcolor(20);printf("");cprintf("                                 RED");textcolor(WHITE);cprintf("HEART");printf("\n");cprintf("SU");
		textcolor(20);cprintf("DO");textcolor(WHITE);cprintf("KU puzzle !");printf("\n");cprintf("no. of empty cells : ");
		textcolor(11);cprintf("%d",count);printf("\n");textcolor(WHITE);cprintf("hit any K");textcolor(20);cprintf("E");textcolor(WHITE);cprintf("Y to continue ");printf("\n\n");

    for (i1 = 1; i1 < 10; i1++) {
      for (i2 = 1; i2 < 10; i2++) {
        if (i2 == 4 || i2 == 7) printf("\t");
        if (a[i1][i2] == 0) {
          textcolor(7);
          cprintf("%d ", a[i1][i2]);
        } else if (a[i1][i2] != 0 && a[i1][i2] == color1[i1][i2]) {
          textcolor(20);
          cprintf("%d ", a[i1][i2]);
        } else if (a[i1][i2] != 0 && a[i1][i2] == color2[i1][i2]) {
          textcolor(20);
          cprintf("%d ", a[i1][i2]);
        } else {
          textcolor(3);
          cprintf("%d ", a[i1][i2]);
        }
      }
      printf("\n");
      if (i1 == 3 || i1 == 6) printf("\n\n");
    }
    if (count == 0) {
      textcolor(WHITE);
      cprintf("\nSUDOKU puzzle solved ! ");
    }
	}

	int check() {
    for (i = 1; i < 10; i++)
      for (j = 1; j < 10; j++) {
        if (a[i][j] < 0 || a[i][j] > 9) goto red3;
        else return 0;
      }
red3:
		printf("\nyou have enter the w");cprintf("ro");printf("ng su");cprintf("do");printf("ku mo");cprintf("di");printf("fy it\n");
		getch(); return 1;
	}

