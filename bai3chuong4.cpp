#include<iostream>
using namespace std;
long Giaithua(int n);

int main()
{
	int n; 
	cin >> n; 
	cout << Giaithua(n);
	return 0;
}
long Giaithua(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Giaithua(n - 1);
}