#include<stdio.h>
#include<iostream>
using namespace std;
#define SIZE 20


void xuat(int A[], int n);
void sinhTatCaNhiPhan(int n);
int sinhNhiPhan(int A[], int n);
bool checkdk(int A[], int n);
int main()
{
	int n;

	cin >> n;

	sinhTatCaNhiPhan(n);
	return 0;
}


int sinhNhiPhan(int A[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (A[i] == 1)
			A[i] = 0;
		else
		{
			A[i] = 1;
			return 1;
		}
	return 0;
}

void sinhTatCaNhiPhan(int n)
{
	int A[SIZE] = { 0 };
	int flag;
	do
	{
		if (checkdk(A, n))
			xuat(A, n);
		
		flag = sinhNhiPhan(A, n);
	} while (flag == 1);
}
void xuat(int A[], int n)
{
	for (int i = 0; i < n; i++)
		cout << A[i];
	cout << endl;

}
bool checkdk(int A[],int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (A[i] == 0 && A[i + 1] == 1)
			dem++;
	if (dem == 2)
		return true;
	else
		return false;

}
