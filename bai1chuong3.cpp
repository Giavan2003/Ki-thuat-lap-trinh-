#include<iostream>
using namespace std;
long tinhluythua(int n, int p);
int main()
{
	int n, p; cin >> n >> p;
	long kq = tinhluythua(n, p);
	cout << kq;
	return 0;
}


long tinhluythua(int n, int p)
{
	long kq=1;
	int i = 1;
	while(i<=p)
	{
		kq = kq * n;
		i++;
	}
	return kq;

}