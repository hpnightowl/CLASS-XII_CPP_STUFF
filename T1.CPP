#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{  char ch;   clrscr();
   ofstream fout("a.dat");  // Parameterized constr4uctor way

   cout<<"Enter a sentence \n";
   do
   {  //ch = getch();  // RAM   characters can not be seen
	//  OR
      ch = getche();   // RAM  characters can be seen
      fout<<ch;      // to S M
   }while(ch !='.');
   fout.close();

   // Reading program

   ifstream fin("a.dat");
   cout<<"\n The sentence is = ";
   fin>>ch;    // S M  to  RAM

   while(! fin.eof())
   {  cout<<ch;
      fin.get(ch);    // S M  to  RAM  get() checks spaces
      delay(900);
   }
   fin.close();
   getchar();
}

