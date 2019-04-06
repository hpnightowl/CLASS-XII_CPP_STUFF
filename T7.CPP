#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<dos.h>
void main()
{  char ch;   clrscr();
   ofstream fout("a.dat");  // Parameterized constr4uctor way
   void fun();  // Declaration
   cout<<"Enter a sentence \n";
   do
   {  //ch = getch();  // RAM   characters can not be seen
	//  OR
      ch = getche();   // RAM  characters can be seen
      fout<<ch;      // to S M
   }while(ch !='.');
   fout.close();
   getchar();
   fun();     // call
}
void fun()
{  // Reading program
   ifstream f1("a.dat");  // Reading purpose
   ofstream f2("b.dat");  //Writing purpose
   char ch;
   cout<<"\n The sentence is = ";
   f1>>ch;    // S M  to  RAM
   ch = tolower(ch);

   while(! f1.eof())
   {  if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
	 { cout<<ch; delay(900);
	   f2<<ch;        // RAM  to b.dat
	 }
      f1.get(ch);    // S M  to  RAM
      ch = tolower(ch);
   }
   f1.close();
   f2.close();
   getchar();
}
/*
   // out put of b.dat
   ifstream f3("b.dat");

   cout<<"\n The vowels are = ";
   f3>>ch;    // S M  to  RAM
   while(! f3.eof())
   {   cout<<ch; delay(900);
      f3.get(ch);    // S M  to  RAM
   }
   f3.close();
   getchar();
  */
}

