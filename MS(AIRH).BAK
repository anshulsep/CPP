#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>


//Preprocessors
#define false 0
#define true 1
#define num 16


typedef int bool;


  bool result;
  char temp_id[30],temp_password[30];
  char choice;
  fstream fp;

 //LIST OF GLOBAL FUNCTION DEFINITIONS
  void home();
  void start();
  void regraph();
  void main_game();
  void user_menu();





/*class user
{
 char name[30];
 char id[30];
 char password[30];
 int phone;
 float age;

 public:
 void getdata();
 int  available(char[]);
 void putdata();
 void get_pass();
 void showdata();
 void login();
}u;
*/


class user
{

 public:
  char name[30];
  char id[30];
  char password[30];
  int phone;
  float age;
}u;

/*int user::available(char t_id[30])
{

  fp.open("ms(air).dat",ios::binary|ios::in);
  fp.read( (char*)&u,sizeof(u) );
  while(!fp.eof())
  {

   if(strcmp(t_id,id)==0)
    {
      result=false;
      break;
     }
    else
    {
     result=true;
      break;
    }

   fp.read( (char*)&u,sizeof(u) );
  }


 fp.close();

 return result;


}











/*int user::available(char t_id[30])
{

  fp.open("ms(air).dat",ios::binary|ios::in);
  do
  {
   fp.read( (char*)&u,sizeof(u) );
   if(strcmp(t_id,id)==0)
   {
     result=false;
     break;
    }
   else
   {
    result=true;
    break;
   }
 }while(!fp.eof());

 fp.close();

 return result;


}

*/

/*
void user::putdata()
{
 fp.open("ms(air).dat",ios::binary|ios::out|ios::app);
 fp.write( (char*)&u,sizeof(u));
 fp.close();
 getch();
}
*/
/*void user::showdata()
{


    cout<<"\nName="<<name;
    cout<<"\nAge="<<age;
    cout<<"\nPhone="<<phone;
  //  cout<<"\nPrevious Score="<<score;
    getch();
    regraph();
    user_menu();


		  cout<<fp.tellg();
		  fp.seekg(0,ios::beg);
		  cout<<fp.tellg();



}
*/


/*void user::get_pass()
{



  for(int p=0;p<30;p++)
  {

      password[p]=getch();

      if(password[p]==13)

      {
	  password[p]='\0';
	  cout<<endl;
	  break;
      }


      else
      if(password[p]==8)
      {
		cout<<"\b \b";
		--p;
      }

	  else
	  cout<<"*";
  }





}





void user::getdata()
{
 clrscr();
 closegraph();

 cout<<"\nEnter Name=";
 gets(name);
 cout<<"\nEnter ID=";
 gets(temp_id);
 result=available(temp_id);
 if(result==true)
 {

  strcpy(id,temp_id);
  cout<<"\nEnter Password=";
  get_pass();
  cout<<"\nEnter Phone Number=";
  cin>>phone;
  cout<<"\nEnter Age=";
  cin>>age;
  putdata();
  cout<<"\nCongrats Your Request Has Been Accepted";
  regraph();
  user_menu();
  }
  else
  {
   cout<<"\nSorry ID Already In Use!!";
   getch();
   regraph();
   start();
  }
  getch();
}


void user::login()
{

 closegraph();
 cout<<"\nEnter ID=";
  gets(temp_id);

  cout<<"\nEnter Password=";

   for(int p=0;p<30;p++)
  {

      temp_password[p]=getch();

      if(temp_password[p]==13)

      {
	  temp_password[p]='\0';
	  cout<<endl;
	  break;
      }


      else
      if(temp_password[p]==8)
      {
		cout<<"\b \b";
		--p;

	}

	  else
	  cout<<"*";
  }

     fp.open("ms(air).dat",ios::binary|ios::in|ios::out);



    do
  {
   fp.read( (char*)&u,sizeof(u) );
   if( ( strcmp(temp_id,id)==0 ) && ( strcmp(temp_password,password)==0)   )
   {
    regraph();
   user_menu();
   break;

   }
    else
   {
    cout<<"\nSorry User Not Found!!";
    getch();
    regraph();
    start();

    break;
   }




 }while(!fp.eof());

 fp.close();
 //user_menu();

}

*/
void home()
{



  //x/2=319,y/2=239,x=639,y=479

  //FLAG 1
  setfillstyle(SOLID_FILL,RED);
  bar(0,0,50,50);

  //FLAG 2
  setfillstyle(SOLID_FILL,GREEN);
  bar(589,0,639,50);

  //FLAG 3
  setfillstyle(SOLID_FILL,BLUE);
  bar(0,429,50,479);

  //FLAG 4
  setfillstyle(SOLID_FILL,YELLOW);
  bar(589,429,639,479);

  settextstyle(DEFAULT_FONT, HORIZ_DIR,8);

  setcolor(GREEN);
  outtextxy(209,159,"MSFT");

  setcolor(BLUE);
  outtextxy(179,239,"GAMES");

  getch();

  start();


}





void start()
{

   cleardevice();

  //FLAG 1
  setfillstyle(SOLID_FILL,RED);
  bar(0,0,50,50);

  //FLAG 2
  setfillstyle(SOLID_FILL,GREEN);
  bar(589,0,639,50);

  //FLAG 3
  setfillstyle(SOLID_FILL,BLUE);
  bar(0,429,50,479);

  //FLAG 4
  setfillstyle(SOLID_FILL,YELLOW);
  bar(589,429,639,479);

  //TEXT SETTINGS
  setcolor(WHITE);
  settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);

  //USER LOGIN
  outtextxy(200,100,"1.LOGIN");

  //CREATE USER
  outtextxy(200,150,"2.SIGN UP");

  //GAME INSTRUCTIONS
  outtextxy(200,200,"3.HELP");

  //GO BACK
  outtextxy(200,250,"4.Go Back");

  //GO BACK TO HOME  PAGE
  outtextxy(200,300,"5.Home");

  choice=getch();
   switch(choice)
    {
     case '1': u.login();
	       cleardevice();
		break;

	case '2': //closegraph();
		  cleardevice();
		  u.getdata();
		 break;

	case '3'://query();
		 break;


	case '4':cleardevice();
		 home();
		 break;

	case '5':cleardevice();
		 home();
		 break;


	case 'b':exit(0);
		 break;


       default: start();

    }


}








void user_menu()
{

   cleardevice();




  //FLAG 1
  setfillstyle(SOLID_FILL,RED);
  bar(0,0,50,50);

  //FLAG 2
  setfillstyle(SOLID_FILL,GREEN);
  bar(589,0,639,50);

  //FLAG 3
  setfillstyle(SOLID_FILL,BLUE);
  bar(0,429,50,479);

  //FLAG 4
  setfillstyle(SOLID_FILL,YELLOW);
  bar(589,429,639,479);



  //TEXT SETTINGS
  setcolor(WHITE);
  settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);

  //START GAME
  outtextxy(200,100,"1.PLAY");

  // USER PROFILE
  outtextxy(200,150,"2.PROFILE");

  //GAME INSTRUCTIONS
  outtextxy(200,200,"3.HELP");

  //GO BACK
  outtextxy(200,250,"4.Go Back");

  //GO BACK TO HOME  PAGE
  outtextxy(200,300,"5.Home");

  choice=getch();

   switch(choice)
    {
     case '1':  cleardevice();
		main_game();
		break;

	case '2': //closegraph();
		  cleardevice();
		 u.showdata();
		 break;

	case '3'://query();
		 break;


	case '4':cleardevice();
		 start();
		 break;

	case '5':cleardevice();
		 home();
		 break;


	case 'b':exit(0);
		 break;


       default: user_menu();

    }


}















void regraph()
{


 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "..\\bgi");
 errorcode = graphresult();
 if (errorcode != grOk)
 {
   printf("Graphics error: %s\n", grapherrormsg(errorcode));
   printf("Press any key to halt:");
   getch();
   exit(1);
 }

}






//Function to check collision between ball and slider
bool check(int ballx,int bally,int radius,int x_slider,int y_slider,int w,int h)
{

    if(bally<y_slider-h)
    return false;
    else
    if(bally+radius>y_slider+h)
    return false;
    else
    if(ballx-radius<x_slider)
    return false;
    else
    if(ballx+radius>x_slider+w)
    return false;

    return true;


}

/*//Brick And Ball Collision Check
bool brick_check(int ballx,int bally,int radius,int xb,int yb,int width,int height)
{

  if(bally+radius>yb+height)
  return false;

  else
  if(bally-radius<yb+height)
  return false;

  else
  if(ballx+radius<xb)
  return false;

  else
  if(ballx+radius>xb+width)
  return false;

  return true;
}
*/
   //x/2=319,y/2=239,x=639,y=479

/*void goal ()
{
   //Poals

    //Upper Poal

    setfillstyle(SOLID_FILL,WHITE);
    bar(180,72,199,100);
    bar(450,72,469,100);

    //Lower Poal

    setfillstyle(SOLID_FILL,WHITE);
    bar(180,407,199,387);
    bar(450,407,469,387);

      //Lower Poal

    setfillstyle(SOLID_FILL,WHITE);
    bar(180,407,199,387);
    bar(450,407,469,387);





      else
     if(check(midx,midy,radius,180,407,19,187)==true)
     {

      ball_y=-ball_y;
     }
      else
     if(check(midx,midy,radius,180,72,19,187)==true)
     {

      ball_y=-ball_y;
     }


      /*  bar(180,72,199,100);
	bar(450,72,469,100);

      else
     if(check(midx,midy,radius,450,72,19,187)==true)
     {

      ball_y=-ball_y;
     }
      else
     if(check(midx,midy,radius,450,407,19,187)==true)
     {

      ball_y=-ball_y;
     }

}
*/











//int check_goal(int x_pos1,int y_pos1,int width1,int height1,int x_pos2,int y_pos2,int width2,int height2)
//{



void background()
{

  setcolor(BROWN);
  rectangle(0,70,getmaxx(),409);
  //line(0,300, 299,300);
   line(0,250,643,250);
  circle(319,250,30);
  setcolor(WHITE);


}

void main_game()
{

   int i,x,y,xx,yy,height=10,width=70,second_height=10,second_width=70;
   int ball_x=-5,ball_y=-5;
   int midx,midy,radius=10;
   char score[100];
   int hit_p1,hit_p2;
   register int score_p1=0,score_p2=0;
    x= 0;
    y = 359;
    xx=569;
    yy=130;
    midx = getmaxx() / 2;
    midy = 250;

    settextstyle(DEFAULT_FONT, HORIZ_DIR,5);
    sprintf (score,"Score=%d",0);
    outtextxy(0,20,score);
    outtextxy(0,419,score);
    setcolor(getmaxcolor());



    //Ball
    setcolor(WHITE);
    circle(midx, midy, radius);

   //Goals

   //Upper Goal
    setfillstyle(SOLID_FILL,MAGENTA);
    bar(200,72,449,100);

    //Lower Goal
    setfillstyle(SOLID_FILL,CYAN);
    bar(200,407,449,387);



  //Striker 1
   setfillstyle(SOLID_FILL,RED);
   bar(x,y,x+width,y+height);

   //Striker 2
    setfillstyle(SOLID_FILL,BLUE);
    bar(xx,yy,xx+second_width,yy+second_height);
    background();
    getch();



   for(i=1;i!=0;i++)
   {



       char ch_p1;
       if(!kbhit())
       {

	midx-=ball_x;
	midy+=ball_y;


       /*  bar(200,72,449,100);
	 Lower Goal
	    setfillstyle(SOLID_FILL,CYAN);
	bar(200,407,449,387);
       */



	 if(check(midx,midy,radius,200,72,229,28)==true)

     {
	 midy=150;
	 ball_y=-ball_y;
	 score_p2+=10;
	 getch();

     }
     else
     if(check(midx,midy,radius,200,407,229,20)==true)
     {
      midy=337;
      ball_y=-ball_y;
      score_p1+=10;
       getch();
     }






	if(midx<0)
	{
	 ball_x=-ball_x;
	}
	else
	if(midx+radius>639)
	{
	 ball_x=-ball_x;
	}
	if(midy-radius<70)
	{
	 ball_y=-ball_y;
	}
	else
	if(midy+radius>409)
       {


	ball_y=-ball_y;



       }


	  if(check(midx,midy,radius,x,y,width,height)==true)

     {

       ball_y=-ball_y;
     }

       else
	 if(check(midx,midy,radius,xx,yy,second_width,second_height)==true)

     {

       ball_y=-ball_y;
     }



    //   cleardevice();
   }

      if(kbhit())

    {
	ch_p1=getch();
	//ch_p2=getch();
	midx-=ball_x;
	midy+=ball_y;



	 if(check(midx,midy,radius,200,72,229,28)==true)

     {
	 midy=150;
	 ball_y=-ball_y;
	 score_p2+=10;
	 getch();

     }
     else
     if(check(midx,midy,radius,200,407,229,20)==true)
     {
      midy=337;
      ball_y=-ball_y;
      score_p1+=10;
      getch();
     }




      if(ch_p1=='a')
      {
       x-=30;
       hit_p1=true;
      }
	if(ch_p1=='w')
      {
       y-=5;
       hit_p1=true;
      }
	if(ch_p1=='s')
      {
       y+=5;
       hit_p1=true;
      }

     if(ch_p1=='j')
     {
       xx-=30;
       hit_p2=true;

     }
       if(ch_p1=='i')
      {
       yy-=5;
       hit_p2=true;
      }

	if(ch_p1=='k')
      {
       yy+=5;
       hit_p2=true;
      }


      if(ch_p1=='d')
     {
      x+=30;
      hit_p1=true;
     }

     if(ch_p1=='l')
     {
      xx+=30;
      hit_p2=true;
     }

	 if(midx<0)
	{
	 ball_x=-ball_x;
	}
	else
	if(midx+radius>639)
	{

	 ball_x=-ball_x;
	}
	if(midy-radius<70)
	{
	 ball_y=-ball_y;
	}
	else
	if(midy+radius>409)
	{
	 /*cleardevice();
	 getch();
	 break;
	 */
	 ball_y=-ball_y;


	}


	if(check(midx,midy,radius,x,y,width,height)==true)
     {

       ball_y=-ball_y;
     }



	if(check(midx,midy,radius,xx,yy,second_width,second_height)==true)
     {

       ball_y=-ball_y;
     }

      if(x<0)

      {

       x+=30;

      }
     else
     if( (x+width) > getmaxx() )
     {
      x-=30;
     }
     else
     if(y<251)
     {
      y+=5;
      }
     else
     if( (y+height) >385)
     {
      y-=5;
     }


      if(xx<0)

      {

       xx+=30;

      }
     else
     if( (xx+second_width) > getmaxx() )
     {
      xx-=30;
     }
      else
     if(yy<102)
     {
      yy+=5;
      }
     else
     if( (yy+second_height) >249)
     {
      yy-=5;
     }

     if(ch_p1=='b')
     {

    //  cleardevice();
      user_menu();

     }

   }


       cleardevice();
       //Striker
       if(hit_p1==true)
     {
	  cleardevice();
	{
	   setfillstyle(SOLID_FILL,RED);
	   bar(x,y,x+width,y+height);
	   setfillstyle(SOLID_FILL,BLUE);
	   bar(xx,yy,xx+second_width,yy+second_height);
	}

   }

       else
	if(hit_p2==true)
       {
	  cleardevice();
	 {
	   setfillstyle(SOLID_FILL,RED);
	   bar(x,y,x+width,y+height);
	   setfillstyle(SOLID_FILL,BLUE);
	   bar(xx,yy,xx+second_width,yy+second_height);
	 }
      }

	else
	{
	  cleardevice();
	 {
	   setfillstyle(SOLID_FILL,WHITE);
	   bar(x,y,x+width,y+height);
	   bar(xx,yy,xx+second_width,yy+second_height);
	 }
      }


	  //Goals
	  setfillstyle(SOLID_FILL,MAGENTA);
	  bar(200,72,449,100);
	  setfillstyle(SOLID_FILL,CYAN);
	  bar(200,407,449,387);




	background();


	settextstyle(DEFAULT_FONT, HORIZ_DIR,5);
	sprintf ( score, "Score=%d",score_p1);
	outtextxy(0,20,score);

	sprintf(score,"Score=%d",score_p2);
	outtextxy(0,419,score);
	setcolor(WHITE);
	circle(midx, midy, radius);

     delay(30);

  }

//   u.score+=100;
  // u.putdata();
       // score_p1+=10;
    //  u.putdata();


}



void main()
{
  regraph();
  home();

}