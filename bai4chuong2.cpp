#include<iostream>
using namespace std;
void Nhap2chieu(int a[50][50], int& m, int& n);
void chuye2thanh1(int a[50][50], int m, int n, int b[], int& k);

int main()
{
	int a[50][50];
	int b[2500];
	int m; int n;
	int k;
	cin >> m >> n;
	Nhap2chieu(a, m, n);
	chuye2thanh1(a, m, n, b, k);
	for (int i = 0; i < k; i++)
		cout << b[i] << " ";
	return 0;
}
void Nhap2chieu(int a[50][50], int& m, int& n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void chuye2thanh1(int a[50][50], int m, int n, int b[], int& k)
{
	int dex = 0;
	k = m * n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			b[dex] = a[i][j];
			dex++;
		}
}