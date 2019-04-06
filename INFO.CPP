#include"iostream.h"
#include"conio.h"
#include"stdio.h"
#include"fstream.h"
class ha{ ch na[20];int roll,marks;
	  public:
	  void input()
		{ cout<<"ENTER YOU NAME";gets(na);
		  cout<<"ENTER YOU ROLL NO.";cin>>roll;
		  cout<<"ENTER YOU MARKS";cin>>marks;
		}
	  void output()
		{ clrscr();
		  cout<<"YOUR NAME/n"<<na;
		  cout<<"YOUR ROLL NO./n"<<roll;
		  cout<<"YOUR MARKS/n"<<marks;
		  getch();
		}


	};
void main()
	 { ha o;fstream f;char ch;
	   clrscr();
	   f.open("harsh.dat",ios :: out);
	   do
	   { o.input();
	     f.write((char*)&o,sizeof(o));
	     cout<<"ANY MORE RECORDS(Y/N)";cin>>ch;
	   }while(ch!='n');
	   f.close();
	   f.open("harsh.dat",ios :: out);
	   f.read((char*)&o,sizeof(o));
	  while(! f.eof())
	   { o.output();
	     f.read((char*)&o,sizeof(o));
	   }
	   f.close();
	   getch();
	   }

	 }

