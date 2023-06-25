#include <iostream>
using namespace std;
int Sum(int n);

int main() {
	int n; cin >> n;
	cout << Sum(n);
	return 0;
}
int Sum(int n) {
	if (n == 0 || n == 1) return 1;
	if (n % 2 == 0) 
	{
		return Sum(n / 2);
	}
	else {
		return Sum((n-1) / 2) + Sum((n+1) / 2 );
	}
}