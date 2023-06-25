#include<iostream>
using namespace std; 
void chuyennhiphan(int n);
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
		chuyennhiphan(i);
	return 0; 
}
void chuyennhiphan(int n)
{
	int Np = 0; int p = 0;
	
	while (n > 0)
	{
		int du = n % 2;
		n = n / 2;
		p++;
		Np = Np + du*pow(10,p);
	}
	cout << Np; cout << endl;
}