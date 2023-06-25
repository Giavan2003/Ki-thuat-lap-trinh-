#include<iostream>
using namespace std;
long tongdenn(int n);
int tongS(int n);

int main()
{
	
	int n; cin >> n;
	int kq = tongS(n);
	cout << kq;


	
	return 0;
}
long tongdenn(int n)
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
		tong += i;
	return tong;
}
int tongS(int n)
{
	int tong = 0; 
	for (int i = 1; i <= n; i++)
		tong += i / tongdenn(i);
	return tong;
}

