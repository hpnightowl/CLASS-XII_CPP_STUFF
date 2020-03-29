#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,box;
	cin >> n; //number of elements in array
	int a[n]; //array
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	cout << "\nBefore Array\n";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i];
	}
	for (int i = 0; i <= n/2; ++i)
	{
			box = a[i];
			a[i] = a[n-i-1]; 
			a[n-i-1] = box;
	}

	cout << "\nAfter Array\n";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i];
	}
	
	return 0;

}