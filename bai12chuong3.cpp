#include<iostream>

using namespace std;

int main()
{
	long long n ;
	cin >> n;
	long long tong = ((n * (n + 1) * (2 * n + 1)) / 6 + (n * (n + 1) / 2)) / 2;
	cout << tong;
	return 0;
}
