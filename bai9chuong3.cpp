#include<iostream>
using namespace std; 
void Sapxep(int a[], int n);
void themXvomang(int a[], int& n, int X);
void thempt(int a[], int& n, int k, int j);

int main()
{
	int a[100];
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	Sapxep(a, n);
	int b; cin >> b;
	themXvomang(a, n, b);
	for (int i = 0; i < n; i++)
		cout <<  a[i]<<" ";
	return 0;
}

void thempt(int a[], int &n, int k, int j)
{
	for (int i = k; i < n; i++)
		a[i + 1] = a[i];
	a[k] = j;
	n++;
}
void themXvomang(int a[], int &n, int X)
{
	
	for (int i = 1; i < n; i++)
		if (a[i] > X && a[i - 1] < X)
			thempt(a, n, i, X);
}
void Sapxep(int a[], int n)
{

	for(int i = 1 ; i< n-1 ; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				int t = a[j];
				a[j] = a[i];
				a[i] = t;
		}
}