#include<iostream>
using namespace std; 
int  Doithapsnagnnhi(int n);
int main()
{
	int n; cin >> n; 
	for (int i = 1; i<= n; i++)
		cout << Doithapsnagnnhi(i) << endl;
	return 0;


}
int  Doithapsnagnnhi(int n)
{
	int temp = 1;
	int Nhiphan = 0;
	while (n != 0)
	{
		int du = n % 2;
		n = n / 2;
		Nhiphan = Nhiphan + du * temp;
		temp = temp * 10;
	}
	return Nhiphan;
}