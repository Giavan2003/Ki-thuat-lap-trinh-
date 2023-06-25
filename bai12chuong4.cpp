#include<iostream>
using namespace std; 
#define Size 100
  int n, k;
void LieketohopchapK(int n, int k);
void Xuat(int a[], int n);
int main()
{
	cin >> n; 
	for(int k=1;k<=n;k++)
		LieketohopchapK(n,k);
	return 0;

}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
void LieketohopchapK(int n, int k)
{
	int i;
	int a[Size];
	for (i = 0; i < k; i++)
		a[i] = i +1;
	Xuat(a, k);
	i = k - 1;
	do
	{
		 
		while(a[i] <n-k +1+ i)
		{
			a[i]++;
			for (int j = i + 1; j < k; j++)
				a[j] = a[j - 1] + 1;
			Xuat(a, k);
			i = k - 1;
		}
		i--;


	} while (i >= 0);
}