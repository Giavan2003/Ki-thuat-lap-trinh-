#include <iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	int dem = 0;
	while (n != 0) {
		if (n & 0x1) dem++;
		n = n >> 1;
	}
	cout << dem;
	return 0;
}