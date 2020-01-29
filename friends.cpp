#include"iostream"

int friends(int n)
		{
			//base Case
			if(n==1 || n==2) return n;
				
			//Recursive Assumption
			int f1= friends(n-1);
			int f2= friends(n-2);
			//SelfWork
			return f1 +(n-1)*f2;
		}
int main()
		{
			std::cout<<friends(3);
			return 0;
		}