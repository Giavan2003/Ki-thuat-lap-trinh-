#include<iostream>
using namespace std;
long tichdenn(int n);
int main()
{
	int n; cin >> n;
	float kq = 0;
	for (int i = 1; i < n; i++)
		kq = kq + tichdenn(i);
	cout << kq;


}
long tichdenn(int n)
{
	int tich = 0;
	for (int i = 1; i <= n; i++)
		tich *= i;
	return tich;
}