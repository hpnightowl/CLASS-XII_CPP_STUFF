#include <bits/stdc++.h>

using namespace std;

void repeat( int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
    { 
        int index = arr[i] % n; 
        arr[index] += n; 
    } 
  
    for (int i = 0; i < n; i++) 
    { 
        if ((arr[i]/n) > 1) 
            cout << i << " "; 
    } 
} 
  

int main() 
{ 
  int n,box;
	cin >> n; //number of elements in array
	int a[n]; //array
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
    cout << "The repeating elements are: \n"; 
    repeat(a,n); 
    return 0; 
} 