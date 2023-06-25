#include <iostream>
using namespace std;
 
int layGiaTriBit(int x, int n);
void Onbit(int& x, int n);
void Offbit(int& x, int n);;
int main() {
	int x, n;
	cin >> x >> n;
	int a, b, c;
	a = b = c = x;
	Onbit(a, n);
	cout << x << " turn on bit  " << n << " =" << a << endl;
	Offbit(b, n);
	cout << x << " turn of " << n << " =" << b << endl;
	cout << "bit  " << n << " of " << x << " is:" << layGiaTriBit(c, n);
	return 0;
}
void Onbit(int& x, int n) 
{
	x = x | (0x1 << n);
}
void Offbit(int& x, int n) 
{
	x = x & (~(0x1 << n));
}
int layGiaTriBit(int x, int n) 
{
	int t = (x >> n) & 0x1;
	return t;
}