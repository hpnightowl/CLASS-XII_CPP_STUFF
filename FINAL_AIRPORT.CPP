#include"iostream.h"
#include"stdio.h"
#include"process.h"
#include"conio.h"
#include"string.h"
#include"stdio.h"
#include"fstream.h"
class aero { char na[10],sex[2];int age,d,m,y;
	     public :
	     void info(int);
	     void chap();
	     void case1();
	     void case2();
	     void case3();
	   };

void aero :: info(int x){ gotoxy(10,x);gets(na);
			  gotoxy(32,x);cin>>age;
			 gotoxy(48,x);gets(sex);
		   }
void aero :: chap(){

		   }
char s[] ={"                                 "};
void erase()
{  textbackground(0);
   gotoxy(25,21);cout<<s;
}
char f[5][50] =  {  {"Chart To Display The Availability Of Seats"},
		    {"        System To Reserve Seats           "},
		    {"      Different Types Of Displays         "},
		    {"        System To Cancel Seats            "},
		    {"          DHANYAVAAD PRABHU               "}
		 };
char item[5][30]={  {"Seat Availability Chart"},
		    {"Reservation"},
		    {"Diffrent Types Of Display"},
		    {"Cancellation"},
		    {"Exit"}
		};
void sen(char *s)
{  window(20,23,70,24);
   textcolor(RED);
   textbackground(WHITE);
   cprintf(s);
   window(1,1,80,25);
   textcolor(WHITE);
   textbackground(BLACK);
}

int main()                                                //MAIN

{
	  aero o;
	   textbackground(0);
	   textmode(BW80);
	   clrscr();
	   int i,j,k;float a,b;char ch;
	   clrscr();
	   gotoxy(15,2);textcolor(14);
	   cprintf("CHRIST CHURCH BOYS' SENIOR SECONDARY SCHOOL JABALPUR");
	   gotoxy(18,4);textcolor(10);
	   cprintf("PROJECT ON -DUMNA AIRPORT MANAGEMENT(2017-2018)");
	   gotoxy(36,6);textcolor(11);
	   cprintf("MAIN MENU");

	   int r=10 ;                              //ARROW
	for(i=0;i<=4;i++)
	   { gotoxy(25,r);
	     textcolor(12);cprintf("%i -> ",i+1);
	     textcolor(14);
	    gotoxy(30,r);cprintf(item[i]);r=r+2;
	   }
	   r=10;gotoxy(30,10);
	   textbackground(4);
	   cprintf (item[0]);
	   sen(f[0]);
      int c;   //getchar();
       do
	 {if(r==10)
	  {c=0;}
	  else
	  {c=(r/2)-5;}
	   ch=getch();
	switch(ch)
	{  case 72:if(r<=10)
		  { gotoxy(30,10);
		    textbackground(0);
		    textcolor(14);
		    cprintf (item [0]);
		    sen(f[0]);
		    r=18;
		    gotoxy(30,r);
		    textbackground(4);
		    textcolor(14);
		    cprintf(item[4]);
		    sen(f[4]);
		  }
		  else
		  {  gotoxy(30,r);
		     textbackground(0);
		     textcolor(14);
		     cprintf(item[c]);
		     r=r-2;c=c-1;gotoxy(30,r);
		     textbackground(4);
		     textcolor(14);
		     cprintf(item[c]);
		     sen(f[c]);
		  } break;

	  case 80:if(r>=18)
		  { gotoxy(30,18);
		    textbackground(0);
		    textcolor(14);
		    cprintf(item[4]);
		    r=10;gotoxy(30,r);
		    textbackground(4);
		    textcolor(14);
		    cprintf(item[0]);
		    sen(f[0]);
		  }
		  else
		  {  gotoxy(30,r);
		     textbackground(0);
		     textcolor(14);
		     cprintf(item[c]);
		     r=r+2;c=c+1;gotoxy(30,r);
		     textbackground(4);
		     textcolor(14);
		     cprintf(item[c]);
		     sen(f[c]);
		   }
		   break;
      }

      }
      while(ch !=13);
      textbackground(0);textcolor(7);
      c++;

      switch(c)                                    //OPRATIONAL
      { case 1 : o.case1();
		 getch();
		 break ;


	case 2 : o.case2();
		 break;


	case 3 : o.case3();
		 break;

	/*
	case 4 : gotoxy(2,2);cout<<"you are good  "<<c;break;
	case 5 : gotoxy(2,2);cout<<"you are good  "<<c;break;
	*/
      }
      getchar();
      return 0;
     }

void aero :: case1()   {     clrscr();
			gotoxy(20,1);textcolor(14);
			cprintf("CHRIST CHURCH BOYS' SENIOR SECONDARY SCHOOL");
			gotoxy(18,2);textcolor(10);
			cprintf("PROJECT ON -DUMNA AIRPORT MANAGEMENT(2017-2018)");
			gotoxy(30,3);textcolor(11);
			cprintf("SEAT AVAILABLITY CHART");
			gotoxy(5,5);textcolor(12);
			cprintf("AIRBUS NAME : JABALPUR-INDORE AIR BUS ");
			gotoxy(50,5);textcolor(12);
			cprintf("AIRBUS NUMBER : 10012");
			gotoxy(5,15);textcolor(12);
			cprintf("AIRBUS NAME : INDORE-JABALPUR AIR BUS");
			gotoxy(50,15);textcolor(12);
			cprintf("AIRBUS NUMBER -  10013");
			int i,x=7;
			for(i=0 ; i<=1 ; i++)
			{ gotoxy(1,x);textcolor(12);
			  cprintf("DATE"); x++ ;
			  gotoxy(1,x);textcolor(12);
			  cprintf("STATUS");x++;
			  gotoxy(1,x);textcolor(12);
			  cprintf("SEATS");
			  x = 11 ;
			}
			x = 17 ;
			for(i=0 ; i<=1 ; i++)
			{ gotoxy(1,x);textcolor(12);
			  cprintf("DATE"); x++ ;
			  gotoxy(1,x);textcolor(12);
			  cprintf("STATUS");x++;
			  gotoxy(1,x);textcolor(12);
			  cprintf("SEATS");
			  x = 21 ;
			}
			// dates
			x = 9 ;
			for(i=0 ; i<=14 ; i++)
			{ gotoxy(x,7); textcolor(13);
			  cprintf("%i",i+1);
			  gotoxy(x,17); textcolor(13);
			  cprintf("%i",i+1);
			  gotoxy(x,11); textcolor(13);
			  cprintf("%i",i+16);
			  gotoxy(x,21); textcolor(13);
			  cprintf("%i",i+16);
			  x=x+5 ;



			}

							    //BOXES
	      for(i=9;i<=80;i=i+5)
	      {
	       int h=12;
		 window(1,1,80,25);
		 textbackground(BLACK);
		   int n=10;
	      if(n<=10)
		 {
		    window(i,8,80,25);
		    textbackground(GREEN);
		    cprintf("  ");
		    window(i,h,80,25);
		    textbackground(GREEN);
		    cprintf("  ");
		    window(i,h+6,80,25);
		    textbackground(GREEN);
		    cprintf("  ");
		    window(i,h+10,80,25);
		    textbackground(GREEN);
		    cprintf("  ");
		 }
		 else
		 {
		   window(i,8,80,25);
		    textbackground(RED);
		    cprintf("  ");
		    window(i,h,80,25);
		    textbackground(RED);
		    cprintf("  ");
		    window(i,h+6,80,25);
		    textbackground(RED);
		    cprintf("  ");
		    window(i,h+10,80,25);
		    textbackground(RED);
		    cprintf("  ");
				 }
		}
	      }

void aero :: case2() {   clrscr();aero o; fstream z,x;char ch;int arno;			       //MAIN
			   h:
			   gotoxy(20,1);textcolor(14);
			   cprintf("PLEASE ENTER AIRBUS NO");
			   cin>>arno;
			   gotoxy(20,1);textcolor(14);
			   cprintf("ANY CHANGE IN TRAIN NO");
			   cin>>ch;
			   getch();
			   if(ch=='n')
			   {

			    //creation
			    int k=13;
			    if(arno==11012)
			    {
				   gotoxy(20,1);textcolor(14);
				   cprintf("CHRIST CHURCH BOYS' SENIOR SECONDARY SCHOOL");
				   gotoxy(23,2);textcolor(10);
				   cprintf("Project-Railway Reservation(2015-2016)");
				   gotoxy(30,3);textcolor(11);
				   cprintf("RESERVATION/CANCELLATON FORM");
				   gotoxy(5,5);textcolor(12);
				   cprintf("AIRBUS NAME -JABALPUR-INDORE");
				   gotoxy(35,5);textcolor(12);
				   cprintf("AIRBUS NUMBER - 11012");
				   gotoxy(5,7);textcolor(12);
				   cprintf("DATE OF JOURNEY - ");
				   gotoxy(40,7);textcolor(12);
				   cprintf("FROM - JABALPUR");
				   gotoxy(60,7);textcolor(12);
				   cprintf("TO STATION - INDORE");
				   gotoxy(65,5);textcolor(12);
				  cprintf("CLASS - A");
							      //HEADINGS
				   gotoxy(5,10.5);textcolor(12);
				   cprintf("S.NO");
				   gotoxy(14,10.5);textcolor(12);
				   cprintf("NAME ");
				   gotoxy(32,10.5);textcolor(12);
				   cprintf("AGE ");
				   gotoxy(40,10.5);textcolor(12);
				   cprintf("CONC. ");
				   gotoxy(48,10.5);textcolor(12);
			   cprintf("SEX ");
			   gotoxy(58,10.5);textcolor(12);
			   cprintf("SEAT NO.");
						      //NUMBERS
			   for(int p=1,h=13 ;h<18,p<=3 ;h=h+2,p++)
			   {  gotoxy(5,h);
			      cprintf(" %i ",p);
			   }

			   for(int i=5;i<=70;i++)        //LINES
			   {
			   textcolor(15);
			   gotoxy(i,9);
			   cprintf("=");
			   gotoxy(i,11.5);
			   cprintf("=");
			   gotoxy(i,19);
			   cprintf("=");
			   }
						//DOWNPART
			   gotoxy(5,20);textcolor(12);
			   cprintf("NAME - ");
			   gotoxy(40,20);textcolor(12);
			   cprintf("TODAY'S DATE - ");
			   gotoxy(5,21);textcolor(12);
			   cprintf("ADDRESS - ");
			   gotoxy(5,22);textcolor(12);
			   cprintf("FARE @ -(INR)  ");
			   gotoxy(30,24);textcolor(12);

				   z.open("AIRBUS1.dat", ios :: out);
				   do
				 {  o.info(k);  // in R A M
				    z.write( (char*) &o, sizeof(o));    // R A M to S M
				    k=k+2;
				 }while(k<=17);
				 z.close();
				 getch();
			    }
			   if(arno==11013)
			   {
				  x.open("AIRBUS2.dat", ios :: out);
				    do
					 {  o.info(k);  // in R A M
					    x.write( (char*) &o, sizeof(o));  // R A M to S M
					    k=k+2;
					 }while(k<=17);
					 x.close();
			    }

			 }
			    else {cout<<"TYPE CORRECT AIRBUS NO.";getch();goto h;}

			 }

void aero :: case3() {
		 clrscr();char ch;
		 gotoxy(20,1);textcolor(14);
		 cprintf("CHRIST CHURCH BOYS' SENIOR SECONDARY SCHOOL");
		 gotoxy(23,2);textcolor(10);
		 cprintf("Project-Railway Reservation(2015-2016)");
		 gotoxy(28,10);textcolor(10);
		 cprintf("PNR STATUS");
		 gotoxy(28,12);textcolor(10);
		 cprintf("LIST OF PEOPLE ( DATE WISE )");
		 gotoxy(14,15);textcolor(10);
		 cprintf("ENTER YOUR CHOICE");
		 cin>>ch;
		 switch(ch)
			  { case '1':
			    clrscr();
			    cout<<"YOUR ARE IN";
			    break;

			    case '2':
			    clrscr();
			    int ha;char password[10];

			    char pass[10]="iamhp2k";                  //password hidden kerna hai
			    cout<<"PASSWORD ";gets(password);
			    ha=strcmpi(pass,password);
			    if(ha==0)
			    {
			     cout<<"WELCOME SIR";
			    }
			    else
			    {
			    cout<<"apna software chala mera mat le";
			    }
			  }
		 }























