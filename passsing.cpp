#include <bits/stdc++.h>

using namespace std;
int n;
int divsibiliti(int x[]){
	int sum=0;
	for (int i = 0; i < n; ++i)
	{
		if (x[i]%3 == 0 || x[i]%7==0)
		{
			sum +=x[i];
		}
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	int box;
	cin >> n; //number of elements in array
	int a[n]; //array
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int sum = divsibiliti(a);

	cout <<"\nSum:" << sum;
	return 0;
}