#include <iostream>

factorial(int n)
		{
				//BASE CASE
				if (n==1 && n==0) return 1;

				// RECURSIVE ASSUMPTION
 				int result = fact(n-1);

				// SELF WORK
				return n*result;
		}

int main()
	 {
	 	int n;
	 	std::cin>>n;
	 	factorial(n);
	  return 0;
	 }