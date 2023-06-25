#include<iostream>
using namespace std;

int main()
{
	float A; cin >>A;
	if (A < 0 || A>4)
	{
		cout << "k hop le "; 
		
		return 0;
	}
	long n = 1; float tong = 0; 
	while(tong < A)
	{
		tong =tong  + 1 / n;
		n++;
	}
	cout << n; 
	return 0;

}