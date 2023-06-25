#include <iostream>
#include <stdio.h>

#define SIZE 100
using namespace std;
void Taobom(int A[][SIZE], int m, int n);
int random(int m, int n);
void Sweeper(int A[][SIZE], int& m, int& n);
void Xuat(int A[][SIZE], int m, int n);

int main() {
	int A[SIZE][SIZE] = { 0 };
	int m, n;;
	Sweeper(A, m, n);
	Xuat(A, m, n);
	return 0;
}
void Taobom(int A[][SIZE], int m, int n) {
	int r;
	srand((int)time(0));
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			A[i][j] = random(0, 1);
}
void Xuat(int A[][SIZE], int m, int n) {
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
}
int random(int m, int n) {
	return m + rand() % (n + 1 - m);
}
void Sweeper(int A[][SIZE], int& m, int& n) {
	cin >> m >> n;
	Taobom(A, m, n);
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			if (A[i][j] == 1) A[i][j] = 9;
	int X[8] = { -1,-1,-1,0,1,1,1,0 };
	int Y[8] = { -1,0, 1,1,1,0,-1,-1 };
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++) {
			if (A[i][j] == 9) continue;
			for (int k = 0; k < 8; k++)
				if (A[i + X[k]][j + Y[k]] == 9) A[i][j]++;
		}
}
 