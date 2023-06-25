#include<iostream>
using namespace std;
int fibonasi(int n);
int main()
{
	int n; cin >> n;
	cout << fibonasi(n);
	return 0;
}
int fibonasi(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return fibonasi(n - 1) + fibonasi(n - 2);
}