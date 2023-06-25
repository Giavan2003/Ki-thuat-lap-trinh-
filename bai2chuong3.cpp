#include<iostream>
using namespace std;
int tongS(int n);
int tongdenn(int n);
int main()
{
	int n; cin >> n;
	int kq = tongS(n);
	cout << kq; 
	return 0;

 }



int tongdenn(int n)
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
	{
		tong += i;
	}
	return tong;
}
int tongS(int n)
{
	int tongs = 0;
	for (int i = 1; i <= n; i++)
	{
		tongs += tongdenn(i);
	}
	return tongs;
}