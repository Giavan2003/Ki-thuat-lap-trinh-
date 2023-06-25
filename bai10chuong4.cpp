#include<iostream>
using namespace std; 
void Tansomax(int A[], int n);
bool check(int B[], int n, int k);
int main()
{
	 
	int a[100]; int n; 
	cin >> n; 
	for (int i = 0; i < n; i++)
		cin >> a[i];
	Tansomax(a, n);
	return 0;
	
}
bool check(int B[], int n, int k )
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (B[i] == k)
			dem++;
	if (dem != 0)
		return false;
	else 
		return true;

}
void Tansomax(int A[], int n)
{
	int B[100];
	int k = 0;
	B[k] = A[k];
	for(int i = 0; i< n ; i++)
		if (check(B, k, A[i]))
		{
			k++;
			B[k] = A[i];
		}
	int C[100];
	int dem=0;
	for (int m = 0; m < k; m++)
	{
		for (int l = 0; l < n; l++)
			if (A[l] == B[m])
				dem++;
		C[m] = dem;
		dem = 0;

	}
	int max = C[0];
	for (int o = 1; o < k; o++)
	{
		if (C[o] > max)
			max = C[o];

	}
	cout << max;

}