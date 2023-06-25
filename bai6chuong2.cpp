#include<iostream>
using namespace std;
void Ghep2mangxenke(int a[], int b[], int c[], int  m, int& k);
void Nhap(int a[], int b[], int& m);
int main()
{
	int a[100], b[100], c[200];
	int m, k;
	Nhap(a, b, m);
	Ghep2mangxenke(a, b, c, m, k);
	for (int i = 0; i <k; i++)
	{
		cout << c[i]<< " ";

	}
	return 0;

	
}
void Nhap(int a[], int b[], int &m)
{
	cout << " Nhap So phan tu: "; cin >> m;
	cout << " Nhap mang 1: ";
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];

	}
	cout << " nhap mang 2: ";
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
}

void Ghep2mangxenke(int a[], int b[], int c[], int  m, int& k)
{
	k = 2 * m;
	int dex1 = 0; int dex2 = 1;
	for (int i = 0; i < m; i++)
	{
		c[dex1] = a[i];
		c[dex2] = b[i];
		dex2+=2;
		dex1+=2;
	}
}