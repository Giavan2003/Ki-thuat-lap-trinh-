#include <iostream>
#include<stdio.h>
using namespace std;
#define size 10
int X[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int Y[8] = { 1, -1, 2, -2, 2, -2, 1, -1};
void Dituan(int x, int y);
void Xuat();
int dem = 0;
int n = 4;
int A[size][size];
int a = 0;int b=0;
int main()
{
	Dituan(a, b);
	return 0;
}
void Dituan(int x, int y)
{
	dem++;
	A[x][y] = dem;


	
	
	for (int i = 0; i < 8; i++)
	{
		int xx = x + X[i];
		int yy = y + Y[i];
		if (dem == n * n && xx==a &&yy==b)
		{
			Xuat();
			exit(0);
		}
		if (xx > 0 && xx < n && yy>0 && yy < n && A[xx][yy] == 0)
			Dituan(xx, yy);
	}
	dem--;
	A[x][y] = 0;
}
void Xuat()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << A[i][j] << " ";

		cout << endl;
	}
	    

}