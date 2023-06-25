#include<iostream>

using namespace std;
long chuyenThapsangNhi(int n);
int Chuyenthapsangbat(int n);
long chuyenthapsang16(long n);
int main()
{
	long n;
	cin >> n;
	int kq = Chuyenthapsangbat(n);
	cout << kq;
	long kq=chuyenthapsang16(n);


	cout << kq;
	return 0;

}



long chuyenThapsangNhi(int n)
{
	long Np = 0; int  i = 1; int du;
	while (n != 0)
	{
		du = n % 2;
		Np = Np + du * i;
		i = i * 10;
		n = n / 10;
	}
	return Np;
}
int Chuyenthapsangbat(int n)
{
	int bat = 0; int i = 0; int du;
	while (n != 0)
	{
		du = n % 10;
		bat = bat + du * pow(8, i);
		i++;
		n = n / 10;


	}
	return bat;
}
