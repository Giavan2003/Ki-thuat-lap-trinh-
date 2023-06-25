#include<iostream>
using namespace std;
void Latnguoc(int A[], int x, int y);
void Xuat(int A[], int n);
void Sinhoanvi(int n);
int main()
{
	int n; 
	cin >> n;
	Sinhoanvi(n);
	return 0 ;
}
void Xuat(int A[], int n)
{
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
	cout << endl;
}
void Sinhoanvi(int n)
{
	int A[100];
	for (int i = 0; i < n; i++)
		A[i] = i;
	Xuat(A, n);
	/do
	{
		int k = n - 2;
		while (k > 0 && A[k] > A[k - 1])
		{
			k--;
		}
		if(k < 0)
			break;
		int l = n - 1;
		while (A[l] < A[k])
			l--;
		int t = A[k];
		A[k] = A[l];
		A[l] = t;
		Latnguoc(A, k + 1, n - 1);
		Xuat(A, n);
	} while (true);
}
void Latnguoc(int A[], int x, int y)
{
	while (x < y)
	{
		int t = A[x];
		A[x] = A[y];
		A[y] = t;
		x++;
		y--;
	}
}