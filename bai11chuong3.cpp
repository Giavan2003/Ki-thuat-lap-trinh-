#include<iostream>
#include<string.h>
using namespace std;

void Tich(char a[], char b[], char c[]);
int main()
{
	char a[1000], b[10000], c[100000];
	cin.getline(a, 1000);
	cin.getline(b, 10000);
	Tich(a, b, c);
	cout << "Tich = " << strrev(c);
	return 0;
}
void Tich(char a[], char b[], char c[])
{
	int n = strlen(a);
	int m = strlen(b);
	int nho, h;
	int i, j;
	strrev(a);
	strrev(b);
	for (i = 0; i <= n + m; i++)
		c[i] = '0';
	for (i = 0; i < m; i++)
	{
		nho = 0;
		for (j = 0; j < n; j++)
		{
			int tich = ((a[j] - '0') * (b[i] - '0') + nho) + (c[i + j] - '0');
			c[i + j] = (tich % 10) + '0';
			nho = tich / 10;
		}
		if (nho > 0) c[i + j] = nho + '0';

	}
	if (c[n + m - 1] != '0') c[n + m] = '\0';
	else c[n + m - 1] = '\0';
}
