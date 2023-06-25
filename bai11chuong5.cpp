#include<iostream>
using namespace std;
void Xuat(int A[], int n);
void Sinhtapcon(int n);


int main()
{
	int n; cin >> n;
	Sinhtapcon(n);
	return 0;
}
void Sinhtapcon(int n)
{
	int A[100] = { 0 };
	int k = 1;
	Xuat(A, k);


	while (A[0] <= n - 1)
	{
		while (A[k - 1] < n - 1)
		{
			A[k] = A[k - 1] + 1;
			k++;
			Xuat(A, k);
		}
		if (k > 1)
		{
			k--;
			A[k - 1]++;
			Xuat(A, k);
		}
	}
}
void Xuat(int A[], int n)
{
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
	cout << endl;
}