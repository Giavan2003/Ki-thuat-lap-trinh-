#include<iostream>
using namespace std;
void Xuat(int A[], int n);
void Daycontangdan(int A[], int n);
int main()
{
	int A[1000];
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	Daycontangdan(A, n);
	return 0;
}
void Daycontangdan(int A[], int n)
{
	int C[100];
	int k = 0; int i = 0; int dem = 0;
	while (i < n)
	{
		if (A[i] < A[i + 1])
		{
			C[k] = A[i];
			k++; dem++;
		}
		else
		{
			if (dem >= 1)
			{
				C[k] = A[i];
				

				Xuat(C, k+1);
				cout << " ; ";
			}
			k = 0; dem = 0; 
			
		}
		i++;
	}
}
void Xuat(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";

	}
}