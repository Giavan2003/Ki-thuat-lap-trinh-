#include<iostream>
using namespace std; 
long mu(int n, int x);
long giathua(int n);
int main()
{
	int n, int x;
	cin >> n >> x;
	float kq;
	for (int i = 1; i <= n; i++)
		kq += float(mu(n, x)) / giathua(n);
	cout << kq; 
		
}
long giathua(int n)

{
	long kq = 1;
	for (int i = 1; i <= n; i++)
		kq *= i;
	return kq;
}
long mu(int n, int x)
{
	int kq = 1;
	for (int i = 1; i <= n; i++)
		kq *= x;
	return kq;
}