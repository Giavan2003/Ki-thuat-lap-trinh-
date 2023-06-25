#include<iostream>
using namespace std;
void Xoapt(int a[], int& n, int x, int j);
void Thempt(int a[], int& n, int x, int j);
bool timx(int a[], int n, int x);
int main()
{
	int a[100];
	int n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int x, int j;
	
	Thempt(a, n, x, j);
	//Xoapt(a, n, x, j);
	//timkiem
}
void Thempt(int a[], int &n, int x, int j)
{
	cout << "Nhap so can them : "; cin >> x;
	cout << " vị tri can them : "; cin >> j;
	for (int i = n; i > j; i--)
		a[i] = a[i - 1];
	a[j] = x;
	n++;

}
void Xoapt(int a[], int& n, int x, int j)
{
	cout << "Nhap so can xoa : "; cin >> x;
	cout << " vị tri can xoa : "; cin >> j;
	for (int i = j; i <n; i++)
		a[i] = a[i + 1];

	n--;

}
bool timx(int a[], int n, int x)
{
	cout << " Nhap so can tim :"; cin >> x;
	int dem = 0;
	for (int i = 0; i, n; i++)
		 
		if (a[i] == x)
		{
			return true;
			dem++;
		}
	if (dem == 0)
		return false;

}