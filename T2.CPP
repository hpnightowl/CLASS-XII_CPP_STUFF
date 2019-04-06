#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
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
      int c =0;
   ifstream fin("a.dat");
   cout<<"\n The sentence is = ";
   fin>>ch;    // S M  to  RAM
   ch = tolower(ch);
   while(! fin.eof())
   {  if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
	 { c = c + 1;  cout<<ch; delay(900); }
      fin.get(ch);    // S M  to  RAM
      ch = tolower(ch);
   }
   cout<<"\n No. of vowels are = "<<c<<endl;
   fin.close();
   getchar();
}

