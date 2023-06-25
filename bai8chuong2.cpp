#include <iostream>
using namespace std;
bool check = false;
void timDiemLoiNhoNhat(int a[][100], int m, int n) {
	int X[4] = { -1,0,1,0 };
	int Y[4] = { 0,1,0,-1 };
	int min = 100000;
	int x, y;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++) {
			bool ok = true;
			for (int k = 0; k < 4; k++){
				int ii = i + X[k];
				int jj = j + Y[k];
				if (ii >= 0 && jj >= 0 && ii < m && jj < n && a[ii][jj] >= a[i][j]){
					ok = false;
				}
			}
			if (ok && a[i][j] < min) {
				check = true;
				x = i;
				y = j;
				min = a[i][j];
			}
		}
	}
	if (check) cout << x << " " << y << endl;
	else cout << -1 << endl;
}
int main() {
	int A[100][100];
	int m, n; cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> A[i][j];
	timDiemLoiNhoNhat(A, m, n);
	return 0;
}
