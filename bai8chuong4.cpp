#include<iostream>
using namespace std; 
void SNTbenhat(int A[], int n);
bool SNT(int k);
int main()
{
	int A[100];
	int n; 
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	SNTbenhat(A, n);
	return 0;
}
bool SNT(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;

	if (dem == 2)
		return true;
	else
		return false;

}
void SNTbenhat(int A[], int n)
{
	int B[100];
	int k = 0;
	for (int i = 0; i < n; i++)
		if (SNT(A[i]))
		{
			B[k]=A[i];
			k++;

		}
	if (k == 0)
		cout << "khong co snt ";
	if (k == 1)
		cout << B[0];
	else
	{
		int min = B[0];
		for (int l = 0; l < k; l++)
		{
			if(B[l] < min)
				min = B[l];
		}
		cout << min;
	}
}