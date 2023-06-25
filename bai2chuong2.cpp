#include<iostream>
using namespace std;
void Sapxep(int a[], int n);
int timNhiPhan(int a[], int n, int x);
int main()
{
	int n, a[100], x;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Nhap x can tim: ";
	cin >> x;
	Sapxep(a, n);
	if (timNhiPhan(a, n, x) == 1) cout << "co";
	else cout << "khong";
	return 0;
}
int timNhiPhan(int a[], int n, int x)
{
	int trai= 0, phai = n - 1;
	while (trai<= phai)
	{
		int mid = (trai+ phai) / 2;
		if (a[mid] == x) return 1;
		else if (a[mid] > x) phai = mid - 1;
		else trai= mid + 1;
	}
	return 0;
}
void Sapxep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i; j < n; j++)
			if (a[i] > a[j])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
}