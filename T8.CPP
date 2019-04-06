#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
void main()
{  char ch;   clrscr();
   ofstream fout("a.dat");  // Parameterized constr4uctor way
   cout<<"Enter a sentence \n";
   do
   {  ch = getche();   // RAM  characters can be seen
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
      delay(400);
   }
   fin.close();
   getchar();
void fun()
{  // reading  and finding the frequency of the given word .
   clrscr();char h[7], a[4] ="the" , p[3] = "my", d[2] = "";
   int c =0, e =0;
   ifstream f1("a.dat");   		// Open for reading
   f1.get(ch);				// SM to RAM
   while(! f1.eof())                    // checking end of file
   {  d[0] =NULL; strcpy(h,NULL);       // very imp .
	while(ch != '@')                // dummy loop
	{  if(ch == ' '  || ch == '.')
	      { cout<<"\n";	 break; }
	   else
	   {  	cout<<ch; delay(400);
		d[0] = ch;      // character to string
		strcat(h, d);
	   }
	   f1.get(ch);	// SM to RAM
	}
       // checking
	if(strcmpi(h,a) == 0)   c = c +1;
	if(strcmpi(h,p) == 0)   e = e +1;
	strcpy(h,NULL);
	f1.get(ch);	// SM to RAM
   }
   cout<<"\nFrequency of the and my = "<<c<<"  and  "<<e<<endl;
   getchar();
   fin.close();
}


















