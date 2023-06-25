#include<iostream>
using namespace std; 
long giaithua(int n);
int main()
{
	int n; cin >> n;
	long kq = 0;
	for (int i = 1; i <= n; i++)
	{
		kq += 1 / giaithua(i);
	}
	cout << kq;
	return 0;


}
long giaithua(int n)
{
	int kq = 1;
	for (int i = 1; i <=n; i++)
		kq *= i;
	return kq;
}
