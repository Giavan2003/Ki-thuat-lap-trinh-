#include<iostream>
using namespace std; 
bool lap(int A[], int n, int m);
void Xoa1pt(int A[], int& n, int k);
void Xoaptulap(int A[], int& n);
void Xuat(int A[], int n);
int main()
{
	int A[100]; int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	Xoaptulap(A, n);
	Xuat(A, n);
	return 0; 

}
void Xoa1pt(int A[], int& n, int k)
{
	for (int i = k; i < n; i++)
		A[i] = A[i + 1];
	n--;
}
void Xoaptulap(int A[], int& n)
{
	for (int i = n-1; i >=0; i--)
		if (lap(A, n, i) == false)
			Xoa1pt(A, n, i);
}
bool lap(int A[], int n, int m)
{
	int dem = 0; 
	for (int i = 0; i < n; i++)
		if (A[i] == A[m])
			dem++;
	if (dem != 1)
		return false;
	else
		return true;
}
void Xuat(int A[], int n)
{
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
	cout << endl;
}