#include<iostream>
using namespace std; 
long giaithua(int n);
int main()
{
	int n, k; 
	cin >> n; cin >> k;
	long kq = giaithua(n) / (giaithua(k) * giaithua(n - k));
		cout << kq;
		return  0;
}

long giaithua(int n)
{
	if (n == 0)
		return 1;

	return n * giaithua(n - 1);
}