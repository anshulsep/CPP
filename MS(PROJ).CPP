#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<string.h>
char pass[20];
struct admin
{

  char id[26];
  char password[26];
  int phone;
  char userid[26];
  char currency;
 long float amount;
  };


 struct  admin a1={"anshul","password",9,"ans",'$',999999};


struct user
{
 char email[50];
 char name[20];
 char pass[10];
 unsigned long int phone;
 long float amount;
 char currency;
}a[10];

struct user u1={"ayush111","ayush","pass",9999,1000,'$'};
struct user u2={"steve.99","steve","pass88",9998,10000,'$'};
struct user u3={"woz.99","woz","pass99",9997,10000,'$'};
struct user u4={"steven.msft","steven","pass999",9996,10000,'$'};

int cnt=0;

void create()
{

	auto ch;
	float damount;
	void user();
	closegraph();
	clrscr();
	char x[50],p[30];
	int age;
	long float cash;
re:
	clrscr();
	cout<<"\nEnter your name = ";
	gets(a[cnt].name);

	cout<<"\nEnter Your Age=";
	cin>>age;
	if(age<18)
	{
	 cout<<"\nSorry You Are Underage";
	 cout<<"\nThank You!!"<<" \nExiting....";
	 getch();
	 user();
	 }


	cout<<"\nEnter email id = ";
	cin>>x;

	char o;

       for(int i=0;i<cnt;i++)
       ++cnt;
       if( (strcmp(x,a[cnt].email)==0)||(strcmp(x,u1.email)==0) || (strcmp(x,u2.email)==0) || (strcmp(x,u3.email)==0) ||  (strcmp(x,u4.email)==0) )


	   {  cout<<"Your email id already exists.\nDo you want to try again ? ";
			o=getch();
			if(o=='y'||o=='Y')
			goto re;
			else
			exit(0);
	   }


		else
			strcpy(a[cnt].email,x);

	cout<<"\nEnter Password = ";
     {
	for(int i = 0;i<30;i++)
	{
		p[i]=getch();
		if(p[i]==13)
	       { p[i]='\0';
		 break;
	       }

		else
		if(p[i]==8)
		{
			cout<<"\b \b";
			--i;
		}
		else
		cout<<"*";
	}
     }
	strcpy(a[cnt].pass,p);
	cout<<"\n\nEnter your phone no.";
	cin>>a[cnt].phone;
	cout<<"\n\nAccount created ";
	cout<<"\n\nPlease Deposit Money=";
	cin>>cash;
	a[cnt].amount=cash;
	cout<<"\n\nDeposited Amount="<<" "<<a1.currency<<a[cnt].amount;
	getch();
       /*	cout<<"\nDo You Want To Withdraw money (y/n)";
	ch=getch();
	if(ch=='y'||ch=='Y')
       {
	cout<<"\nEnter Amount=";
	cin>>damount;
	if(cash>damount)
	{
	cout<<"\nTransaction Done"<<"\nAmount Left="<<a1.currency<<cash-damount;
	cout<<"\nThank You!!";
	}
	else
	cout<<"\nInsufficient Balance";
	}
	else
	cout<<"\nThank You";
	*/
	user();
}

void view()
{      //	cleardevice();
       //	setbkcolor(0);
	closegraph();
	clrscr();
	char email[50],str[5];
	cout<<"\nEnter Email ID ";
	cin>>email;
	cout<<"\nEnter Password ";
	for(int i=0;i<4;i++)
	{	str[i]=getch();
		cout<<"*";
	}
	int x=0;
	for(i=0;i<cnt;i++)
	{	if(strcmp(a[cnt].pass,str)==0&&strcmp(a[cnt].email,email)==0)
		{	x++;
			cout<<"\nName : "<<a[cnt].name<<"\nPhone no. : "<<a[cnt].phone<<"\nBalance amount : Rs."<<a[cnt].amount;
		}
	}
	if(x==0)
		cout<<"Email ID, Password mismatch ";
	getch();
}

/*void user()
{
a:
	cleardevice();
	setbkcolor(0);
	cout<<"\n1.Create new account\n2.View account details\n3.Withdraw amount ";
	cout<<"\nEnter your option ";
	int ch;
	cin>>ch;
	switch(ch)
	{	case 1: create();
			goto a;
		case 2: view();
			goto a;

		case 3: goto a;
		default:break;
	}
}
*/
/*
struct user a[20]={
	{"Ayush","pass123","ayush.roy@gmail.com",9895614,1000,'$'},
	{"Kunal","pass987","kunal.123@yahoo.com",9999999,1000,'$'}
	};
*/

//Function for User
void user()

{
    void ulogin();
    void start();
    void second();
    void create();
    void query();
    int p;
    int gdriver = DETECT,gmode, errorcode;
    int xmax, ymax;

    initgraph(&gdriver, &gmode, "..//bgi");


    setcolor(1);
    setbkcolor(15);
    for(int i=0;i<999;i++)
    line(i, 0, i, 30);
    setcolor(4);
    for(i=30;i<999;i++)
    line(0,i,30,i);
    setcolor(2);
    for(i=0;i<999;i++)
    line(i,445,i,480);
    setcolor(14);
    for(i=30;i<444;i++)
    line(775,i,610,i);
    setcolor(8);
    for(i=0;i<16;i++)
    settextstyle(SMALL_FONT, HORIZ_DIR, i);
    outtextxy(200,100,"1.Login");
   // for(i=0;i<16;i++)
    settextstyle(SMALL_FONT, HORIZ_DIR, i);
    outtextxy(200,150,"2.Create");
     settextstyle(SMALL_FONT, HORIZ_DIR, i);
    outtextxy(200,200,"3.Query");
   // for(i=0;i<16;i++)
    settextstyle( SMALL_FONT, HORIZ_DIR, i);
    outtextxy(200,250,"4.Go Back");
    settextstyle( SMALL_FONT, HORIZ_DIR, i);
    outtextxy(200,300,"5.Home");
    i+= textheight("ok");
    p=getch();
    p-=48;
    switch(p)
    {
     case 1:    clrscr();
		ulogin();
		break;

	case 2: closegraph();
		clrscr();
		create();
		break;

	case 3:query();
	       break;


	case 4:clrscr();
	       second();
	       break;

	case 5:clrscr();
	       start();
	       break;

       default: exit(0);

    }
}

//First page and logo of the program
void start()
{
    void second();
   int gdriver = DETECT, gmode, errorcode;
   initgraph(&gdriver, &gmode, "..//bgi");
   /* drawing a line */
   setcolor(1);
    setbkcolor(15);
   for(int i=0;i<69;i++)
   line(0, i, 75, i);
   setcolor(4);
   for(i=0;i<69;i++)
   line(567,i,775,i);
    setcolor(2);
   for(i=415;i<489;i++)
   line(0,i,75,i);
   setcolor(14);
   for(i=415;i<489;i++)
   line(567,i,775,i);
   setcolor(8);
   for(i=100;i<900;i++)
      settextstyle(SANS_SERIF_FONT, HORIZ_DIR, i);
	outtextxy(200,100,"MSFT");
	setcolor(10);
	 for(i=100;i<900;i++)
      settextstyle( SANS_SERIF_FONT, HORIZ_DIR, i);
	outtextxy(200,200,"BANK");
      i+=textheight("MSFT");
   /* clean up */
   getch();
   closegraph();
   second();
   }

//Administrator Details
void login()
{
 int ch1;
 clrscr();
 int wdraw();
 int deposit();
 void admin();
 void loading();
 void second();
 void start();
 /* request auto detection */
 int gdriver = DETECT,gmode, errorcode;
 int xmax, ymax;

 /* initialize graphics and local variables */
 initgraph(&gdriver, &gmode, "..//bgi");

   /* read result of initialization */
 errorcode = graphresult();
   /* an error occurred */
 if (errorcode != grOk)
 {
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
    printf("Press any key to halt:");
    getch();
      exit(1);
   }

   /* drawing a line */
   setcolor(1);
    setbkcolor(15);
   for(int i=0;i<999;i++)
   line(i, 0, i, 30);
   setcolor(4);
   for(i=30;i<999;i++)
   line(0,i,30,i);
    setcolor(2);
   for(i=0;i<999;i++)
   line(i,445,i,480);
   setcolor(14);
   for(i=30;i<444;i++)
   line(775,i,610,i);
   setcolor(8);
   for(i=1;i<18;i++)
   settextstyle(SMALL_FONT, HORIZ_DIR, i);
   outtextxy(190,90,"1.Check Balance");
   for(i=1;i<18;i++)
   settextstyle(SMALL_FONT, HORIZ_DIR, i);
   outtextxy(190,140,"2.Withdraw Stocks");
   for(i=1;i<40;i++)
   settextstyle(SMALL_FONT, HORIZ_DIR, i);
   outtextxy(190,180,"3.Deposit");
   for(i=1;i<40;i++)
   settextstyle(SMALL_FONT, HORIZ_DIR, i);
   outtextxy(190,230,"4.Return To Menu");
   for(i=1;i<40;i++)
   settextstyle(SMALL_FONT, HORIZ_DIR, i);
   outtextxy(190,280,"5.Home");
   for(i=1;i<40;i++)
   i+=textheight("Ok");
   ch1=getch();
   ch1-=48;
   switch(ch1)

     {
	case 1:  clrscr();
		 loading();
		 closegraph();
		 clrscr();
		 gotoxy(100,150);
		 cout<<"Amount Is="<<" ";
		 cout<<a1.currency;
		 cout<<a1.amount;
		 break;

      case 2:    loading();
		 closegraph();
		 wdraw();
		 break;

     case 3:    loading();
		closegraph();
		deposit();
		break;

   case 4:      second();
		break;

   case 5:      start();
		break;

  default : exit(0);

 }
 getch();
 closegraph();
}

//User Login Page
void ulogin()
{
 int ch1;
 clrscr();
 void loading();
 void second();
 void start();
 void check();
 void uwdraw();
 void udeposit();
 /* request auto detection */
 int gdriver = DETECT,gmode, errorcode;
 int xmax, ymax;

 /* initialize graphics and local variables */
 initgraph(&gdriver, &gmode, "..//bgi");

   /* read result of initialization */
 errorcode = graphresult();
   /* an error occurred */
 if (errorcode != grOk)
 {
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
    printf("Press any key to halt:");
    getch();
      exit(1);
   }

   /* drawing a line */
   setcolor(1);
    setbkcolor(15);
   for(int i=0;i<999;i++)
   line(i, 0, i, 30);
   setcolor(4);
   for(i=30;i<999;i++)
   line(0,i,30,i);
    setcolor(2);
   for(i=0;i<999;i++)
   line(i,445,i,480);
   setcolor(14);
   for(i=30;i<444;i++)
   line(775,i,610,i);
   setcolor(8);
   for(i=1;i<18;i++)
   settextstyle(SMALL_FONT, HORIZ_DIR, i);
   outtextxy(190,90,"1.Check Balance");
   for(i=1;i<18;i++)
   settextstyle(SMALL_FONT, HORIZ_DIR, i);
   outtextxy(190,140,"2.Withdraw ");
   for(i=1;i<40;i++)
   settextstyle(SMALL_FONT, HORIZ_DIR, i);
   outtextxy(190,180,"3.Deposit");
   for(i=1;i<40;i++)
   settextstyle(SMALL_FONT, HORIZ_DIR, i);
   outtextxy(190,230,"4.Return To Menu");
   for(i=1;i<40;i++)
   settextstyle(SMALL_FONT, HORIZ_DIR, i);
   outtextxy(190,280,"5.Home");
   for(i=1;i<40;i++)
   i+=textheight("Ok");
   ch1=getch();
   ch1-=48;
   switch(ch1)

     {
	case 1:  closegraph();
		 clrscr();
		 check();
		 ulogin();
		 break;

      case 2:    loading();
		 closegraph();
		 uwdraw();
		 ulogin();
		 break;

     case 3:    loading();
		closegraph();
		udeposit();
		ulogin();
		break;

   case 4:      second();
		break;

   case 5:      start();
		break;

  default : exit(0);

 }
 getch();
 closegraph();
}


//Menu Page Of This Program.. 1.Admin  2.user  3.Home
void second()
{
 int ch;
 clrscr();
 void admin();
  void display();
 int gdriver = DETECT,gmode, errorcode;
 initgraph(&gdriver, &gmode, "..//bgi");

   /* drawing a line */
   setcolor(1);
    setbkcolor(15);
   for(int i=0;i<999;i++)
   line(i, 0, i, 30);
   setcolor(4);
   for(i=30;i<999;i++)
   line(0,i,30,i);
    setcolor(2);
   for(i=0;i<999;i++)
   line(i,445,i,480);
   setcolor(14);
   for(i=30;i<444;i++)
   line(775,i,610,i);
     setcolor(8);
     for(i=1;i<18;i++)
     settextstyle(SMALL_FONT, HORIZ_DIR, i);
	outtextxy(190,120,"1.Admin");
	 for(i=1;i<18;i++)
     settextstyle(SMALL_FONT, HORIZ_DIR, i);
	outtextxy(190,170,"2.User");
	 for(i=1;i<40;i++)
      settextstyle(SMALL_FONT, HORIZ_DIR, i);
	outtextxy(190,230,"3.Home");
	 settextstyle(SMALL_FONT, HORIZ_DIR, i);
	outtextxy(190,290,"4.Exit");
      i+=textheight("Ok");
       ch=getch();
       ch-=48;
  switch(ch)
 {
  case 1:
	  clrscr();
	  display();
	  admin();
	  break;


   case 2:

	     clrscr();
	     user();
	    break;

   case 3: clrscr();
	   start();
	   break;

   case 4: exit(0);
	    break;

  default: exit(0);

 }
 getch();
 closegraph();
}
//Administrator Page
void admin()
{
 int p;
/* request auto detection */
   int gdriver = DETECT,gmode, errorcode;
   int xmax, ymax;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "..//bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   /* drawing a line */
   setcolor(1);
    setbkcolor(15);
   for(int i=0;i<999;i++)
   line(i, 0, i, 30);
   setcolor(4);
   for(i=30;i<999;i++)
   line(0,i,30,i);
    setcolor(2);
   for(i=0;i<999;i++)
   line(i,445,i,480);
   setcolor(14);
   for(i=30;i<444;i++)
   line(775,i,610,i);
   setcolor(8);
   for(i=0;i<16;i++)
   settextstyle(SMALL_FONT, HORIZ_DIR, i);
	outtextxy(200,100,"1.Login");
	 for(i=0;i<16;i++)
      settextstyle(SMALL_FONT, HORIZ_DIR, i);
	outtextxy(200,150,"2.Home");
	for(i=0;i<16;i++)
	settextstyle( SMALL_FONT, HORIZ_DIR, i);
	outtextxy(200,200,"3.Go Back");
	i+= textheight("ok");
    p=getch();
    p-=48;
      switch(p)
     {  case 1: clrscr();
		login();
		break;

	case 2: clrscr();
		start();
		break;

	case 3:clrscr();
	       second();
	       break;

      default: exit(0);
      }
 closegraph();
}

void main()
{
 clrscr();
 start();
 second();
 getch();
 }
void loading()


  {
   clrscr();
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "..//bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
   setbkcolor(0);
   /* drawing background */
    setcolor(1);
   for(int i=0;i<999;i++)
   line(i, 0, i, 30);
   setcolor(4);
   for(i=30;i<999;i++)
   line(0,i,30,i);
    setcolor(2);
   for(i=0;i<999;i++)
   line(i,445,i,480);
   setcolor(14);
   for(i=30;i<444;i++)
   line(775,i,610,i);
   setcolor(15);
  outtextxy(250,128,"Loading");
   for(i=100;i<500;i++)
   { delay(10);
   line(i,150,i,200);
   }

   /* clean up */
   getch();
   closegraph();

}
//WITHDRAW STOCKS(ADMIN)
int wdraw()
{
 clrscr();
 long float cash;
 cout<<"Enter amount$=""  ";
 cout<<a1.currency;
 cin>>cash;
 if(a1.amount<cash)
 cout<<"Insufficient Stock Balance Please Deposit Stock(s)!!";
 else
 cout<<"\nAmount Left="<<a1.currency<<a1.amount-cash;
 return 0;
}
//Administrator Stock Deposit Function
int deposit()
{
 long float adeposit;
 clrscr();
 gotoxy(20,10);
 cout<<"Enter Amount To Be Deposited=" "   ";
 cout<<a1.currency;
 cin>>adeposit;
 a1.amount+=adeposit;
 gotoxy(20,12);
{ cout<<"Your current Balance="" ";
 cout<<a1.currency;
 cout<<a1.amount;
 }
 return 0;
 }
//Function  To Input Password
void password(char p[])
{
	for(int i = 0;i<30;i++)
	{
		p[i]=getch();
		if(p[i]==13)
	       { p[i]='\0';
		 break;
	       }

		else
		if(p[i]==8)
		{
			cout<<"\b \b";
			--i;
		}
		else
		cout<<"*";
	}
}
//Administrator Password Check
void display()
{
 void login();
 void loading();
 closegraph();
 clrscr();
 cout<<"Enter Admin Password=";
 password(pass);
 if(strcmp(a1.password,pass)==0)
 {
 cout<<"\n PASSWORD SUCCESS";
 loading();
 login();
 }
 else
 {
   closegraph();
   cout<<"\nUnsuccessfull Login";
   cout<<"\nTaking Security Actions";
   delay(1000);
   start();
   }
}
void query()
{
  closegraph();
  clrscr();
  char str[10000];
  cout<<"\nEnter Query=\n";
	for(int i = 0;i<1000;i++)
	{
		str[i]=getch();
		if(str[i]==13)
		 {  str[i]='\0';
		    cout<<"\n\nThank You!!";
		    cout<<"\n\nWe Will Get Back To You In 7 Working Days";
		    delay(600);
		    break;

		 }
		else
		if(str[i]==8)
		{
			cout<<"\b \b";
			--i;
		}
	       else
	       cout<<str[i];

	}
	}


void uwdraw()
{
 closegraph();
 clrscr();
 char y[10];
 long float cash;
 cout<<"\nEnter Email Id=";
 gets(y);
 cout<<"Enter User Password=";
 password(pass);
 for(int i=0;i<cnt;i++)
 {
 }
 if( (strcmp(a[cnt].email,y)==0)  &&  ( strcmp(a[cnt].pass,pass)==0) )
 {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nEnter Amount To Withdraw="<<u1.currency;
cin>>cash;
if(a[cnt].amount<cash)
cout<<"\nInsufficient Balance!!"<<"\nPlease Deposit Money!!";
a[cnt].amount-=cash;
cout<<"New Balance="<<u1.currency<<a[cnt].amount;
 }
 else
      if( (strcmp(u1.email,y)==0)  &&  ( strcmp(u1.pass,pass)==0) )
 {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nEnter Amount To Withdraw="<<u1.currency;
cin>>cash;
if(u1.amount<cash)
cout<<"\nInsufficient Balance!!"<<"\nPlease Deposit Money!!";
u1.amount-=cash;
cout<<"\nNew Balance="<<u1.currency<<u1.amount;

 }
else
    if( (strcmp(u2.email,y)==0)  &&  ( strcmp(u2.pass,pass)==0) )
  {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nEnter Amount To Withdraw="<<u1.currency;
cin>>cash;
if(u2.amount<cash)
cout<<"\nInsufficient Balance!!"<<"\nPlease Deposit Money!!";
u2.amount-=cash;

cout<<"\nNew Balance="<<u1.currency<<u2.amount;

 }
 else
     if( (strcmp(u3.email,y)==0)  &&  ( strcmp(u3.pass,pass)==0) )
 {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nEnter Amount To Withdraw="<<u1.currency;
cin>>cash;
if(u3.amount<cash)
cout<<"\nInsufficient Balance!!"<<"\nPlease Deposit Money!!";
u3.amount-=cash;

cout<<"\nNew Balance="<<u1.currency<<u3.amount;

 }
 else
  if( (strcmp(u4.email,y)==0)  &&  ( strcmp(u4.pass,pass)==0) )
 {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nEnter Amount To Withdraw="<<u1.currency;
cin>>cash;
if(u4.amount<cash)
cout<<"\nInsufficient Balance!!"<<"\nPlease Deposit Money!!";
u4.amount-=cash;

cout<<"\nnew Balance="<<u1.currency<<u4.amount;

 }
 else
{
 cout<<"\nInvalid Account";
 getch();
 ulogin();
 }

getch();
}







void udeposit()
{
 closegraph();
 clrscr();
 char y[10];
 long float cash;
 cout<<"\nEnter Email Id=";
 gets(y);
 cout<<"Enter User Password=";
 password(pass);
 for(int i=0;i<cnt;i++)
 {
 }
 if( (strcmp(a[cnt].email,y)==0)  &&  ( strcmp(a[cnt].pass,pass)==0) )
 {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nEnter Amount To Be Deposited="<<u1.currency;
cin>>cash;
a[cnt].amount+=cash;
cout<<"New Balance="<<u1.currency<<a[cnt].amount;
 }
 else
      if( (strcmp(u1.email,y)==0)  &&  ( strcmp(u1.pass,pass)==0) )
 {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nEnter Amount To Be Deposited="<<u1.currency;
cin>>cash;
u1.amount+=cash;
cout<<"\nNew Balance="<<u1.currency<<u1.amount;

 }
else
    if( (strcmp(u2.email,y)==0)  &&  ( strcmp(u2.pass,pass)==0) )
  {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nEnter Amount To Be Deposited="<<u1.currency;
cin>>cash;
u2.amount+=cash;

cout<<"\nNew Balance="<<u1.currency<<u2.amount;

 }
 else
     if( (strcmp(u3.email,y)==0)  &&  ( strcmp(u3.pass,pass)==0) )
 {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nEnter Amount To Be Deposited="<<u1.currency;
cin>>cash;
u3.amount+=cash;

cout<<"\nNew Balance="<<u1.currency<<u3.amount;

 }
 else
  if( (strcmp(u4.email,y)==0)  &&  ( strcmp(u4.pass,pass)==0) )
 {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nEnter Amount To Be Deposited="<<u1.currency;
cin>>cash;
u4.amount+=cash;

cout<<"\nnew Balance="<<u1.currency<<u4.amount;

 }
 else
{
 cout<<"\nInvalid Account";
 getch();
 ulogin();
 }

getch();
}

void check()
{
 closegraph();
 clrscr();
 char y[10];//,pass1[30];
 cout<<"\nEnter Email Id=";
 gets(y);
 cout<<"Enter User Password=";
 password(pass);
 for(int i=0;i<cnt;i++)
 {
 }
 if( (strcmp(a[cnt].email,y)==0)  &&  ( strcmp(a[cnt].pass,pass)==0) )
 {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nAvailable Balance="<<u1.currency<<a[cnt].amount;

 }
 else
      if( (strcmp(u1.email,y)==0)  &&  ( strcmp(u1.pass,pass)==0) )
 {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nAvailable Balance="<<u1.currency<<u1.amount;

 }
else
    if( (strcmp(u2.email,y)==0)  &&  ( strcmp(u2.pass,pass)==0) )
  {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nAvailable Balance="<<u1.currency<<u2.amount;

 }
 else
     if( (strcmp(u3.email,y)==0)  &&  ( strcmp(u3.pass,pass)==0) )
 {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nAvailable Balance="<<u1.currency<<u3.amount;

 }
 else
  if( (strcmp(u4.email,y)==0)  &&  ( strcmp(u4.pass,pass)==0) )
 {
 cout<<"\n LOGIN SUCCESSFULL";
cout<<"\nAvailable Balance="<<u1.currency<<u4.amount;

 }
 else
{
 cout<<"\nInvalid Account";
 getch();
 ulogin();
 }
 getch();

}



