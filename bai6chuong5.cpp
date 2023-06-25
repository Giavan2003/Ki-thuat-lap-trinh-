#include <iostream>
using namespace std;
int Tong(int n);
int main()
{
	int n; cin >> n;
	cout << Tong(n);
	return 0;
}
int Tong(int n)
{
	int A[10000];
	A[0] = 0;
	A[1] = 1;
	if (n == 0 || n == 1)
		return A[n];

	else 
	{
		int i = 1;
		while (i <= n) {
			A[2 * i] = A[i];
			A[2 * i + 1] = A[i + 1] + A[i];
			i++;
		}
	}
	return A[n];

}