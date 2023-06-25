#include<iostream>
using namespace std; 
#define s 20
void Xuat(int A[][s], int m, int n);
void tich(int A[][s], int B[][s], int C[][s], int m, int n, int p);
void Nhap(int A[][s], int m, int n);
int main()
{
	int A[s][s], B[s][s], C[s][s];
	int m, n, p;
	cout << "Nhap hang , cot cua A";
	cin >> m >> n ;
	Nhap(A, m, n);
	cout << "Nhap cot cua B";
	cin >> p;
	Nhap(B, n, p);
	tich(A, B, C, m, n, p);
	Xuat(C, m, p);
	return 0;
}
void tich(int A[][s], int B[][s], int C[][s], int m, int n , int p)
{
	for(int i =0; i<m;i++ )
		for (int j = 0; j < p; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < p; k++)
				C[i][j] = C[i][j] + A[i][k] * B[k][i];
		}

}
void Xuat(int A[][s], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j]<< " ";
		}
		cout << endl;
	}
}
void Nhap(int A[][s], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
		
	}
}