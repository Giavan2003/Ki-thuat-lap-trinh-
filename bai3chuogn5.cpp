#include<iostream>
using  namespace std;
int Timminle(int A[], int n);
int main()
{
	int A[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	cout << Timminle(A, n);
	return 0;
}
int Timminle(int A[], int n)
{
	int minchan = 0;
	int k = 0;
	while (minchan== 0)
	{
		if (A[k] % 2 == 0)
			minchan = A[k];
		k++;
	}
	int maxchan = minchan;
	for (int i = 0; i < n; i++)
		if (A[i] % 2 == 0 && A[i] > maxchan)
			maxchan = A[i];
	int minle = 0;
	int l = 0;
	while (minle == 0)
	{
		if (A[l] % 2 != 0 && A[l] > maxchan)
			minle = A[l];
		l++;

	}
	return minle;
}