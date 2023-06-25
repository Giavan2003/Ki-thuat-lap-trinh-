#include<iostream>
#include<stdio.h>
using namespace std;
int A[100]; int n;
void Xuat();
void lietke(int k);
int main()
{
	 cin >> n;
	 lietke(0);
}



void lietke(int k)
{
	if (k == n)
		Xuat();
	else
	{
		for (int i = 0; i <=1; i++)
		{
			A[k] = i;
			lietke(k + 1);
		}

	}
}

void Xuat()
{
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
	cout << endl;
}