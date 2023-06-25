#include<iostream>
using namespace std; 
bool check(int A[], int n, int l);
void Timuoc(int B[], int n, int &k);
void Timuochunglonnhatcuamang(int A[], int n);
int main()
{
	int A[100], n;
	cin >> n; 
	for (int i = 0; i < n; i++)
		cin >> A[i];
	Timuochunglonnhatcuamang(A, n);
	return 0;

}
void Timuoc(int B[], int n, int &k )
{
	 
	for(int i = 1; i<=n ; i++)
		if (n % i == 0)
		{
			B[k] = i;
			k++;
		}
}
void Timuochunglonnhatcuamang(int A[], int n)
{
	int B[100]; int C[100];
	int min = A[0];
	int k = 0; int l = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] < min)
			min = A[i];
	}
	Timuoc(B, min, k);
	for (int m = 0; m < k; m++)
		if (check(A, n, B[m]))
		{
			C[l] = B[m];
			l++;
		}
	int maxC = C[0];
	for (int t = 0; t < l; t++)
		if (C[t] > maxC)
			maxC = C[t];
	cout << maxC;

}
bool check(int A[], int n, int l)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i] % l != 0)
			return false;
		return true;
	}

}
