#include"iostream.h"
#include"stdio.h"
#include"process.h"
#include"conio.h"
#include"string.h"
#include"dos.h"
#include"fstream.h"
#include"stdlib.h"
int menu();
void diffdis();
void head();
void reser();
void display();
void canc();
void pnr();
void erase();
void sen(char*);
void write_record(int);
void fdisplay();
int fseat(int);
int fpnr(int);
void searchpnr(int);
void delete_record(int);
void searchd(int);
void box();
void box1();
int check();
int check1();
void month();


class air
{
    int age,seat,d,arno;float pnr;
    char name[50],sex;

public:
    void a124(int joke)
    {
       arno=joke;
    }

    void setData(int w,int cm,int beg)
    {
	d=beg;
	gotoxy(7,w+12);
	cout<<w-1;
	gotoxy(15,w+12);
	gets(name);
	gotoxy(30,w+12);
	cin >> age;
	gotoxy(46,w+12);
	cin>>sex;
	seat=cm;
	pnr=fpnr(arno);
	gotoxy(54,w+12);
	cout<<seat;
    }


    void showData(int n)
    {
	gotoxy(7,n);
	cout<<n-13;
	gotoxy(22,n);
	cout<<name;
	gotoxy(35,n);
	cout<< age;
	gotoxy(49,n);
	cout<<sex;
	gotoxy(62,n);
	cout<<seat;
    }

    int retseat()
    {
      return seat;
    }
    int retpnr()
    {
      return pnr;
    }
    int retd()
    {
     return d;
    }



};


int main()

{             int c;
  top:
	      c=menu();
	      switch(c)
		{ case 1 :
				 clrscr();
				 head();
				 display();
				 box();
				 box1();

				 getch();
				 goto top;


		  case 2 :         clrscr();
				   int damm;
				   head();
				   reser();
				   gotoxy(60,5);textcolor(12);
				   cin>>damm;
				   month();
				   write_record(damm);
				   getch();
				   goto top;

		  case 3 :         pnr();
				   getch();
				   goto top;

		  case 4 :         head();
				   canc(); int hm;
				   gotoxy(3,6);
				   cin>>hm;
				   delete_record(hm);
				   goto top;

	case 5 : clrscr();textcolor(YELLOW +BLINK);gotoxy(25,10);cprintf("CREATED BY IAMHP2k AND TEAM");getch();break;
      }
      getchar();
      return 0;
     }

void month()
	{
	  int m,y;
	  gotoxy(62,5);textcolor(12);
	  cprintf("/");
	  gotoxy(63,5);textcolor(12);
	  cin>>m;
	  gotoxy(65,5);textcolor(12);
	  cprintf("/");
	  gotoxy(66,5);textcolor(12);
	  cin>>y;
	}


int fseat(int bomb)
	{
	      int om;
	      if(bomb==11012)
	      {
	       om=check();
	     }

	     if(bomb==11013)
	      {
	       om=check1();

	      }
      return om;
      }


int fpnr(int look)
	 {   int chop;
	     chop=look;
	     if(chop==11012)
	     {
		 int pnr;
		 fstream f;air o;
		 f.open("AIRBUS1.dat", ios :: in);
		 f.read((char*)&o, sizeof(o));  // S M  to R A M
		 if(!f)
		 {
		   f.close();
		   pnr = 1;
		   return pnr;
		 }

		 else
		 { while(!f.eof())
		   {  f.read( (char*) &o, sizeof(o));  // To read a last record
		   }
		   pnr = o.retpnr();
		   pnr =pnr+1 ;
		   f.close();
		   return pnr;
		 }
	    }
	    else
	     {
		 int pnr;
		 fstream f2;air o2;
		 f2.open("AIRBUS2.dat", ios :: in);
		 f2.read((char*)&o2, sizeof(o2));  // S M  to R A M
		 if(!f2)
		 {
		   f2.close();
		   pnr = 1;
		   return pnr;
		 }

		 else
		 { while(!f2.eof())
		   {  f2.read( (char*) &o2, sizeof(o2));  // To read a last record
		   }
		   pnr = o2.retpnr();
		   pnr =pnr+1 ;
		   f2.close();
		   return pnr;
		 }
	    }
	 }






void head()	{
			gotoxy(20,1);textcolor(14);
			cprintf("CHRIST CHURCH BOYS' SENIOR SECONDARY SCHOOL");
			gotoxy(23,2);textcolor(10);
			cprintf("Project-DUMNA AIRPORT MANAGEMENT");
		}
void display() {
				 gotoxy(30,3);textcolor(11);
				 cprintf("SEAT AVAILABLITY CHART");
				 gotoxy(5,5);textcolor(12);
				 cprintf("AIRBUS NAME - JABALPUR-INDORE AIRBUS");
				 gotoxy(50,5);textcolor(12);
				 cprintf("AIRBUS NUMBER - 10012");
				 gotoxy(5,15);textcolor(12);
				 cprintf("AIRBUS NAME - INDORE-JABALPUR AIRBUS");
				 gotoxy(50,15);textcolor(12);
				 cprintf("AIRBUS NUMBER - 10013");
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


		}


void reser() {

				   gotoxy(30,3);textcolor(11);
				   cprintf("RESERVATION FORM");
				   gotoxy(5,5);textcolor(12);
				   cprintf("AIRBUS NUMBER");
				   gotoxy(40,5);textcolor(12);
				   cprintf("DATE OF JOURNEY - ");
				   gotoxy(5,7);textcolor(12);
				   cprintf("FROM -");
				   gotoxy(40,7);textcolor(12);
				   cprintf("TO STATION -");
				   gotoxy(5,8);textcolor(12);
				   cprintf("CLASS - A");
				   gotoxy(40,8);textcolor(12);
				   cprintf("NO OF SEATES -");
				   gotoxy(7,10.5);textcolor(12);
				   cprintf("S.NO");
				   gotoxy(15,10.5);textcolor(12);
				   cprintf("NAME ");
				   gotoxy(30,10.5);textcolor(12);
				   cprintf("AGE ");
				   gotoxy(46,10.5);textcolor(12);
				   cprintf("SEX ");
				   gotoxy(54,10.5);textcolor(12);
				   cprintf("SEAT NO.");


			   for(int i=5;i<=70;i++)        //LINES
			   {
			   textcolor(15);
			   gotoxy(i,9);
			   cprintf("=");
			   gotoxy(i,11.5);
			   cprintf("=");
			   gotoxy(i,25);
			   cprintf("=");
			   }
			 /*			//DOWNPART
				   gotoxy(40,20);textcolor(12);
			   cprintf("TODAY'S DATE - ");
			   gotoxy(5,21);textcolor(12);
			  cprintf("ADDRESS - ")
			 */
	      }

void pnr()	 {
			int ch;
			clrscr();
			head();
			gotoxy(39,4);textcolor(LIGHTCYAN);
			cprintf("MENU");
			gotoxy(39,5);textcolor(LIGHTBLUE);
			cprintf("____");
			textcolor(LIGHTMAGENTA);
			gotoxy(17,10);cprintf("Press 1 for LIST OF PASSENGERS ON A PARICULAR DAY");
			gotoxy(17,13);cprintf("Press 2 for PNR STATUS DISPLAY");
			textcolor(LIGHTRED);gotoxy(21,21);cprintf("Enter your choice please?! ");
			cin>>ch;
			switch(ch)
			{
			case 1:
			int chamar;
			clrscr();
			head();
			gotoxy(23,4);textcolor(LIGHTCYAN);
			cprintf("LIST OF PASSENGERS FOR A PARICULAR DAY");
			gotoxy(8,7);textcolor(LIGHTMAGENTA);
			cprintf("TRAIN NO.:");
			gotoxy(52,7);cprintf("DATE:");
			gotoxy(58,7);cin>>chamar;
			gotoxy(8,9);cprintf("CLASS: 1 A ");
			gotoxy(8,12);cprintf("S.No.");
			gotoxy(22,12);cprintf("NAME");
			gotoxy(35,12);cprintf("AGE");
			gotoxy(48,12);cprintf("SEX");
			gotoxy(62,12);cprintf("SEAT NO.");
			gotoxy(6,11);textcolor(LIGHTRED);
			cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
			gotoxy(6,13);
			cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
			gotoxy(6,25);
			cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
			searchd(chamar);
			break;

			case 2:
			clrscr();
			head();
			gotoxy(32,4);textcolor(LIGHTCYAN);
			cprintf("PNR STATUS DISPLAY");
			textcolor(LIGHTBLUE);
			gotoxy(32,5);cprintf("==================");
			gotoxy(8,7);textcolor(LIGHTMAGENTA);
			cprintf("Enter PNR number please : ");
			gotoxy(55,7);cprintf("TRAIN NO. :");
			gotoxy(8,9);cprintf("DATE : ");
			gotoxy(55,9);cprintf("CLASS : 1 A");
			gotoxy(8,12);cprintf("S.NO.");
			gotoxy(22,12);cprintf("NAME");
			gotoxy(35,12);cprintf("AGE");
			gotoxy(48,12);cprintf("SEX");
			gotoxy(62,12);cprintf("SEAT NO.");
			gotoxy(6,11);textcolor(LIGHTRED);
			for(int i=6;i<=70;i++)
			{
			gotoxy(i,11);
			cprintf("=");
			gotoxy(i,13);
			cprintf("=");
			gotoxy(i,25);
			cprintf("=");
			}
			int no;
			gotoxy(35,7);
			cin>>no;
			searchpnr(no);
			getch();
			textcolor(LIGHTGREEN+BLINK);gotoxy(28,23);cprintf("Press any key to continue...");
		       break;
		}

	}
void canc()
	{
		 clrscr();
		 head();
		 gotoxy(25,3);textcolor(LIGHTCYAN);
		 cprintf("RESERVATION/CANCELLATION TICKET");
		 textcolor(LIGHTBLUE);
		 gotoxy(25,4);cprintf("===============================");
		 gotoxy(3,5);textcolor(LIGHTMAGENTA);cprintf("P.N.R. No.");
		 gotoxy(17,5);cprintf("TRAIN NO.:");
		 gotoxy(33,5);cprintf("DATE:");
		 gotoxy(46,5);cprintf("NO. OF SEATS:");
		 gotoxy(5,8);cprintf("CLASS:");
		 gotoxy(5,9);cprintf("1 A");
		 textcolor(LIGHTMAGENTA);
		 gotoxy(8,11);cprintf("S.No.");
		 gotoxy(22,11);cprintf("Name");
		 gotoxy(35,11);cprintf("Age");
		 gotoxy(48,11);cprintf("Sex");
		 gotoxy(62,11);cprintf("SEAT NO");

		 for(int x=1;x<=75;x++)
		 {
		 gotoxy(x,10);textcolor(LIGHTBLUE);
		 cprintf("=");
		 gotoxy(x,12);
		 cprintf("=");
		 gotoxy(x,25);
		 cprintf("=");
		 }
	}
int menu()
	 {
char f[5][50] =  {  {"Chart To Display The Availability Of Seats"},
		    {"        System To Reserve Seats           "},
		    {"      Different Types Of Displays         "},
		    {"        System To Cancel Seats            "},
		    {"          PRABHU DHANYAVAAD             "}
		 };
char item[5][30]={  {"Seat Availability Chart"},
		    {"Reservation"},
		    {"Diffrent Types Of Display"},
		    {"Cancellation"},
		    {"Exit"}
		};
	  textbackground(0);
	 textmode(BW80);
	 clrscr();
	 int i,j,k;float a,b;char ch;
	 clrscr();
	 head();
	 gotoxy(36,6);textcolor(11);
	 cprintf("MAIN MENU");
	 int r=10 ;
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
	  return c;
	 }

void erase()
{
   char s[] ={"                                   "};
   textbackground(0);
   gotoxy(25,21);cout<<s;
}

void sen(char *s)
{  window(20,23,70,24);
   textcolor(RED);
   textbackground(WHITE);
   cprintf(s);
   window(1,1,80,25);
   textcolor(WHITE);
   textbackground(BLACK);
}


void write_record(int well)
{
  char sa[20],da[20];int fare;
  air obj,obj1;
  int arno,n;
  gotoxy(20,5);textcolor(12);
  cin>>arno;
  gotoxy(12,7);textcolor(10);
  gets(sa);
  gotoxy(54,7);textcolor(10);
  gets(da);


  obj.a124(arno);
   if(arno==11012)
  {
    int hp=1,jass,yo;
    gotoxy(57,8);
    cin>>n;
    jass=fseat(arno);
    ofstream outFile;
    outFile.open("AIRBUS1.dat", ios::binary | ios::app);

    do
    {
     hp++;
    obj.setData(hp,jass,well);
    outFile.write((char*)&obj, sizeof(obj));
    jass++;
    }while(hp<=n);
    yo=obj.retpnr();
    gotoxy(58,20);textcolor(BLINK+11);
    cprintf("PNR  %i",yo);
    outFile.close();
  }
  else
       if(arno==11013)
	 {
    int hp=1,jass,yo;
    gotoxy(57,8);
    cin>>n;
    jass=fseat(arno);
    ofstream outFile1;
    outFile1.open("AIRBUS2.dat", ios::binary | ios::app);
    do
    {
    hp++;
    obj1.setData(hp,jass,well);
    outFile1.write((char*)&obj1, sizeof(obj1));
    jass++;

    }while(hp<=n);
    yo=obj.retpnr();
    gotoxy(58,20);textcolor(BLINK+11);
    cprintf("PNR  %i",yo);


    outFile1.close();
  }
			    delay(200);
			    fare=n*2000;
			    gotoxy(58,22);textcolor(BLINK+10);
			    cprintf("FARE @ -(INR)  %i",fare);


}

void searchpnr(int n)
{
     int arno;
     gotoxy(67,7);textcolor(12);
     cin>>arno;

if(arno==11012)
{

    int r=14,to;
    ifstream inFile;
    inFile.open("AIRBUS1.dat", ios::binary);
    air obj;
    while(inFile.read((char*)&obj, sizeof(obj)))
    {

	if(obj.retpnr() == n)
	{
	    to=obj.retd();
	    obj.showData(r);
	    r++;
	}
    }
    gotoxy(15,9);cprintf("%i",to);
    gotoxy(16,9);cprintf("/");
    gotoxy(17,9);cprintf("2");
    gotoxy(18,9);cprintf("/");
    gotoxy(19,9);cprintf("2018");
    inFile.close();
}
if(arno==11013)
{

    int r=14,to;
    ifstream inFile;
    inFile.open("AIRBUS2.dat", ios::binary);
    air obj;
    while(inFile.read((char*)&obj, sizeof(obj)))
    {

	if(obj.retpnr() == n)
	{
	    to=obj.retd();
	    obj.showData(r);
	    r++;
	}
    }
    gotoxy(15,9);cprintf("%i",to);
    gotoxy(16,9);cprintf("/");
    gotoxy(17,9);cprintf("2");
    gotoxy(18,9);cprintf("/");
    gotoxy(19,9);cprintf("2018");
    inFile.close();
}

}
void searchd(int n)
{
  int arno;
  gotoxy(18,7);textcolor(12);
  cin>>arno;

  if(arno==11012)
  {
    int r=14;
    ifstream inFile;
    inFile.open("AIRBUS1.dat", ios::binary);
    air obj;
    while(inFile.read((char*)&obj, sizeof(obj)))
    {
	if(obj.retd() == n)
	{
	    obj.showData(r);
	    r++;

	}
    }

    inFile.close();
  }
  if(arno==11013)
  {
    int r=13;
    ifstream inFile;
    inFile.open("AIRBUS2.dat", ios::binary);
    air obj;
    while(inFile.read((char*)&obj, sizeof(obj)))
    {

	if(obj.retd() == n)
	{
	    obj.showData(r);
	    r++;
	}
	else
	{
	  r=13;
	}

    }

    inFile.close();
  }

}


void delete_record(int n)
{
		  int arno;
		  gotoxy(19,6);textcolor(12);
		  cin>>arno;

		if(arno==11012)
		{
		    air obj;int r=14,jk=0,were;
		   ifstream inFile;
		    inFile.open("AIRBUS1.dat", ios::binary);

		    ofstream outFile;
		    outFile.open("temp.dat", ios::out | ios::binary);

		   while(inFile.read((char*)&obj, sizeof(obj)))
		  {
			if(obj.retpnr() != n)
			{
			    outFile.write((char*)&obj, sizeof(obj));
			}
			else
			{
			   were=obj.retd();
			   obj.showData(r);
			   jk++;
			   r++;
			}

		   }
			 textcolor(10);
			 gotoxy(33,6);cprintf("%i",were);
			 textcolor(10);
			 gotoxy(35,6);cprintf("/");
			 textcolor(10);
			 gotoxy(36,6);cprintf("2");
			 textcolor(10);
			 gotoxy(37,6);cprintf("/");
			 textcolor(10);
			 gotoxy(38,6);cprintf("2018");
			 textcolor(10);
			 gotoxy(46,6);cprintf("%i",jk);
			 getch();
			inFile.close();
			outFile.close();
			remove("AIRBUS1.dat");
			rename("temp.dat", "AIRBUS1.dat");
		}

	      else
	      {
		   air obj;int r=14,jk=0,were;
		   ifstream inFile;
		   inFile.open("AIRBUS2.dat", ios::binary);

		 ofstream outFile;
		 outFile.open("temp.dat", ios::out | ios::binary);

			while(inFile.read((char*)&obj, sizeof(obj)))
		       {
			if(obj.retpnr() != n)
			{
			outFile.write((char*)&obj, sizeof(obj));
			}
			else
			{
			   were=obj.retd();
			   obj.showData(r);
			   jk++;
			   r++;
			}


		       }

			 textcolor(10);
			 gotoxy(33,6);cprintf("%i",were);
			 textcolor(10);
			 gotoxy(35,6);cprintf("/");
			 textcolor(10);
			 gotoxy(36,6);cprintf("2");
			 textcolor(10);
			 gotoxy(37,6);cprintf("/");
			 textcolor(10);
			 gotoxy(38,6);cprintf("2018");
			 textcolor(10);
			 gotoxy(46,6);cprintf("%i",jk);
			 getch();

		    inFile.close();
		    outFile.close();

		    remove("AIRBUS2.dat");
		    rename("temp.dat", "AIRBUS2.dat");
		 }

     }
int check()
	   {
	     int seat;
		 fstream f;air o;
		 f.open("AIRBUS1.dat", ios :: in);
		 f.read((char*)&o, sizeof(o));  // S M  to R A M
		 if(!f)
		 {
		   f.close();
		   seat = 101;
		   return seat;
		 }

		 else
		 { while(!f.eof())
		   {  f.read( (char*) &o, sizeof(o));  // To read a last record
		   }
		   seat = o.retseat();
		   f.close();
		   return ++seat;
		 }
	   }

int check1()
	 {
	  int seat;
		 fstream f1;air o1;
		 f1.open("AIRBUS2.dat", ios :: in);
		 f1.read((char*)&o1, sizeof(o1));  // S M  to R A M
		 if(!f1)
		 {
		   f1.close();
		   seat = 101;
		   return seat;
		 }

		 else
		 { while(!f1.eof())
		   {  f1.read( (char*) &o1, sizeof(o1));  // To read a last record
		   }
		   seat = o1.retseat();
		   f1.close();
		   return ++seat;
		 }

	 }


void box()
	{
	  fstream f;
	  int count1=1,count2=1,count3=1,count4=1,count5=1,count6=1,count7=1
	  ,count8=1,count9=1,count10=1,count11=1,
	  count12=1,count13=1,count14=1,count15=1,
	  count16=1,count17=1,count18=1,count19=1,count20=1,count21=1,count22=1
	  ,count23=1,count24=1,count25=1,count26=1,
	  count27=1,count28=1,count29=1,count30=1;
	    f.open("AIRBUS1.dat", ios::in);
	    air obj;

	     f.read((char*)&obj,sizeof(obj));
	     while(f.read((char*)&obj, sizeof(obj)))
		{
		 if(obj.retd()==1)
		 count1++;
		 else
		    if(obj.retd()==2)
			count2++;
		 else
		    if(obj.retd()==3)
		      count3++;
		 else
		    if(obj.retd()==4)
		     count4++;
		 else
		    if(obj.retd()==5)
		     count5++;
		 else
		      if(obj.retd()==6)
		     count6++;
		 else
		      if(obj.retd()==7)
		     count7++;
		 else
		    if(obj.retd()==8)
		     count8++;
		 else
		    if(obj.retd()==9)
		    count9++;
		 else
		    if(obj.retd()==10)
		    count10++;
		 else
		    if(obj.retd()==11)
		    count11++;
		 else
		    if(obj.retd()==12)
		    count12++;
		 else
		    if(obj.retd()==13)
		     count13++;
		 else
		    if(obj.retd()==14)
		    count14++;
		 else
		    if(obj.retd()==15)
		     count15++;
		 else
		    if(obj.retd()==16)
		    count16++;
		 else
		    if(obj.retd()==17)
		    count17++;
		 else
		    if(obj.retd()==18)
		    count18++;
		 else
		    if(obj.retd()==19)
		    count19++;
		 else
		    if(obj.retd()==20)
		     count20++;
		 else
		    if(obj.retd()==21)
		    count21++;
		 else
		    if(obj.retd()==22)
		    count22++;
		 else
		    if(obj.retd()==23)
		    count23++;
		 else
		    if(obj.retd()==24)
		    count24++;
		 else
		    if(obj.retd()==25)
		    count25++;
		 else
		    if(obj.retd()==26)
		    count26++;
		 else
		    if(obj.retd()==27)
		     count27++;
		 else
		    if(obj.retd()==28)
		    count28++;
		 else
		    if(obj.retd()==29)
		    count29++;
		 else
		    if(obj.retd()==30)
		    count30++;
		}
		f.close();

	   if(count1<=10)
	    {
	     gotoxy(9,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(9,8);
	  textcolor(RED);
	  cprintf("��");
	  }

	   if(count2<=10)
	    {
	     gotoxy(14,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(14,8);
	  textcolor(RED);
	  cprintf("��");
	  }

	   if(count3<=10)
	    {
	     gotoxy(19,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(19,8);
	  textcolor(RED);
	  cprintf("��");
	  }

	   if(count4<=10)
	    {
	     gotoxy(24,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(24,8);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count5<=10)
	    {
	     gotoxy(29,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(29,8);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count6<=10)
	    {
	     gotoxy(34,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(34,8);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count7<=10)
	    {
	     gotoxy(39,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(39,8);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count8<=10)
	    {
	     gotoxy(44,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(44,8);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count9<=10)
	    {
	     gotoxy(49,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(49,8);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count10<=10)
	    {
	     gotoxy(54,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(54,8);
	  textcolor(RED);
	  cprintf("��");
	  }  if(count11<=10)
	    {
	     gotoxy(59,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(59,8);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count12<=10)
	    {
	     gotoxy(64,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(64,8);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count13<=10)
	    {
	     gotoxy(69,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(69,8);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count14<=10)
	    {
	     gotoxy(74,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(74,8);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count15<=10)
	    {
	     gotoxy(79,8);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(79,8);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count16<=10)
	    {
	     gotoxy(9,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(9,12);
	  textcolor(RED);
	  cprintf("��");
	  }

	   if(count17<=10)
	    {
	     gotoxy(14,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(14,12);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count18<=10)
	    {
	     gotoxy(19,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(19,12);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count19<=10)
	    {
	     gotoxy(24,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(24,12);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count20<=10)
	    {
	     gotoxy(29,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(29,12);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count21<=10)
	    {
	     gotoxy(34,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(34,12);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count22<=10)
	    {
	     gotoxy(39,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(39,12);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count23<=10)
	    {
	     gotoxy(44,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(44,12);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count24<=10)
	    {
	     gotoxy(49,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(49,12);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count25<=10)
	    {
	     gotoxy(54,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(54,12);
	  textcolor(RED);
	  cprintf("��");

	  }  if(count26<=10)
	    {
	     gotoxy(59,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(59,12);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count27<=10)
	    {
	     gotoxy(64,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(64,12);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count28<=10)
	    {
	     gotoxy(69,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(69,12);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count29<=10)
	    {
	     gotoxy(74,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(74,12);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count30<=10)
	    {
	     gotoxy(79,12);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(79,12);
	  textcolor(RED);
	  cprintf("��");
	  }
	}
void box1()
	{
	  fstream f;
	  int count1=1,count2=1,count3=1,count4=1,count5=1,count6=1,count7=1
	  ,count8=1,count9=1,count10=1,count11=1,
	  count12=1,count13=1,count14=1,count15=1,
	  count16=1,count17=1,count18=1,count19=1,count20=1,count21=1,count22=1
	  ,count23=1,count24=1,count25=1,count26=1,
	  count27=1,count28=1,count29=1,count30=1;

	    f.open("AIRBUS2.dat", ios::in);
	    air obj;

	     f.read((char*)&obj,sizeof(obj));
	     while(f.read((char*)&obj, sizeof(obj)))
		{
		 if(obj.retd()==1)
		 count1++;
		 else
		    if(obj.retd()==2)
			count2++;
		 else
		    if(obj.retd()==3)
		      count3++;
		 else
		    if(obj.retd()==4)
		     count4++;
		 else
		    if(obj.retd()==5)
		     count5++;
		 else
		      if(obj.retd()==6)
		     count6++;
		 else
		      if(obj.retd()==7)
		     count7++;
		 else
		    if(obj.retd()==8)
		     count8++;
		 else
		    if(obj.retd()==9)
		    count9++;
		 else
		    if(obj.retd()==10)
		    count10++;
		 else
		    if(obj.retd()==11)
		    count11++;
		 else
		    if(obj.retd()==12)
		    count12++;
		 else
		    if(obj.retd()==13)
		     count13++;
		 else
		    if(obj.retd()==14)
		    count14++;
		 else
		    if(obj.retd()==15)
		     count15++;
		 else
		    if(obj.retd()==16)
		    count16++;
		 else
		    if(obj.retd()==17)
		    count17++;
		 else
		    if(obj.retd()==18)
		    count18++;
		 else
		    if(obj.retd()==19)
		    count19++;
		 else
		    if(obj.retd()==20)
		     count20++;
		 else
		    if(obj.retd()==21)
		    count21++;
		 else
		    if(obj.retd()==22)
		    count22++;
		 else
		    if(obj.retd()==23)
		    count23++;
		 else
		    if(obj.retd()==24)
		    count24++;
		 else
		    if(obj.retd()==25)
		    count25++;
		 else
		    if(obj.retd()==26)
		    count26++;
		 else
		    if(obj.retd()==27)
		     count27++;
		 else
		    if(obj.retd()==28)
		    count28++;
		 else
		    if(obj.retd()==29)
		    count29++;
		 else
		    if(obj.retd()==30)
		    count30++;
		}
		f.close();

	   if(count1<=10)
	    {
	     gotoxy(9,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(9,18);
	  textcolor(RED);
	  cprintf("��");
	  }

	   if(count2<=10)
	    {
	     gotoxy(14,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(14,18);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count3<=10)
	    {
	     gotoxy(19,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(19,18);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count4<=10)
	    {
	     gotoxy(24,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(24,18);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count5<=10)
	    {
	     gotoxy(29,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(29,18);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count6<=10)
	    {
	     gotoxy(34,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(34,18);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count7<=10)
	    {
	     gotoxy(39,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(39,18);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count8<=10)
	    {
	     gotoxy(44,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(44,18);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count9<=10)
	    {
	     gotoxy(49,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(49,18);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count10<=10)
	    {
	     gotoxy(54,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(54,8);
	  textcolor(RED);
	  cprintf("��");
	  }  if(count11<=10)
	    {
	     gotoxy(59,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(59,18);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count12<=10)
	    {
	     gotoxy(64,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(64,18);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count13<=10)
	    {
	     gotoxy(69,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(69,18);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count14<=10)
	    {
	     gotoxy(74,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(74,18);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count15<=10)
	    {
	     gotoxy(79,18);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(79,18);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count16<=10)
	    {
	     gotoxy(9,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(9,22);
	  textcolor(RED);
	  cprintf("��");
	  }

	   if(count17<=10)
	    {
	     gotoxy(14,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(14,22);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count18<=10)
	    {
	     gotoxy(19,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(19,22);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count19<=10)
	    {
	     gotoxy(24,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(24,22);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count20<=10)
	    {
	     gotoxy(29,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(29,22);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count21<=10)
	    {
	     gotoxy(34,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(34,22);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count22<=10)
	    {
	     gotoxy(39,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(39,22);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count23<=10)
	    {
	     gotoxy(44,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(44,22);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count24<=10)
	    {
	     gotoxy(49,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(49,22);
	  textcolor(RED);
	  cprintf("��");
	  }
	   if(count25<=10)
	    {
	     gotoxy(54,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(54,22);
	  textcolor(RED);
	  cprintf("��");

	  }  if(count26<=10)
	    {
	     gotoxy(59,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(59,22);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count27<=10)
	    {
	     gotoxy(64,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(64,22);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count28<=10)
	    {
	     gotoxy(69,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(69,22);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count29<=10)
	    {
	     gotoxy(74,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(74,22);
	  textcolor(RED);
	  cprintf("��");
	  }
	    if(count30<=10)
	    {
	     gotoxy(79,22);
	     textcolor(GREEN);
	     cprintf("��");
	    }
	  else
	  {
	  gotoxy(79,22);
	  textcolor(RED);
	  cprintf("��");
	  }

	}
