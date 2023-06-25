#include<iostream>
using namespace std;
int Tongsotrongchuoi(char a[]);
int main()
{
	char a[200];
	cin.getline(a, 200);
	int kq = Tongsotrongchuoi(a);
	cout << kq;
	return 0;
}
int Tongsotrongchuoi(char a[])
{

	int n = strlen(a);
	int i = 0;
	int so = 0; int tong = 0;

	while (i < n)
	{
		
		if (a[i] > '0' && a[i] < '9')
			so = so * 10 + (a[i] - '0');
		else
		{
			tong = tong + so;
			so = 0;
		}
		i++;

	}
	return tong;
}
