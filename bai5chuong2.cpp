#include<iostream>
using namespace std;
void Xuatmang2chieu(int B[50][50], int m, int n);
void chuyen1thanh2(int a[], int m, int n, int B[50][50]);
void Nhap(int a[], int& m, int& n);
int main()
{
	int B[50][50];
	int a[100];
	int m, n; 
	Nhap(a, m, n);
	chuyen1thanh2(a, m, n, B);
	
	Xuatmang2chieu(B, m, n);
	return 0;
}
void Nhap(int a[], int &m, int &n)
{
	cin >> m >> n;
	
	for (int i = 0; i < m * n; i++)
		cin >> a[i];

}
void chuyen1thanh2(int a[], int m, int n, int B[50][50])
{

	int dex = m * n -1;
	
	
		for (int j = m-1; j >=0; j--)
			for (int k = n-1 ; k >=0; k--)
			{
				B[j][k] = a[dex];
				if (dex > 0)
					dex--;
			}
	
}
void Xuatmang2chieu(int B[50][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j]<< " ";


		}
		cout << endl;
	}
}