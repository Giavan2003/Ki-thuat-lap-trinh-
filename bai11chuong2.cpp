#include<iostream>
#include<string.h>
using namespace std;
void Hieu(char a[], char b[], int n1, int n2);
int maxmin(char a[], char b[], int n1, int n2);
void Tong(char a[], char b[], int n1, int n2);
int main()
{
	char a[200], b[200];
	fflush(stdin);
	

	cin.getline(a,200);
	

	cin.getline(b, 200);
	int n1 = strlen(a), n2 = strlen(b);
	Tong(a, b, n1, n2);
	Hieu(a, b, n1, n2);
	return 0;
}
void Tong(char a[], char b[], int n1, int n2)
{
	int t;
	strrev(a);
	strrev(b);
	int k = n1;
	if (n1 > n2)
	{
		t = n1 - n2;
		while (t != 0)
		{
			strcat(b, "0");
			t--;
		}

	}
	if (n1 < n2)
	{
		k = n2;
		t = n2 - n1;
		while (t != 0)
		{
			strcat(a, "0");
			t--;
		}
	}
	char s[201];
	int nho = 0, Tong = 0;
	for (int i = 0; i < k; i++)
	{
		Tong = (a[i] - '0') + (b[i] - '0') + nho;
		nho = Tong / 10;
		s[i] = (Tong % 10) + '0';
	}
	if (nho == 1)
	{
		s[k] = '1';
		s[k + 1] = '\0';
	}
	cout << "Tong= " << strrev(s) << endl;
}
void Hieu(char a[], char b[], int n1, int n2)
{
	int h = 0;
	char t[200], c[200];
	if (maxmin(a, b, n1, n2) == 2)
	{
		h = 1;
		strcpy(t, a);
		strcpy(a, b);
		strcpy(b, t);
	}
	strrev(a);
	strrev(b);
	int k = n1;
	int l;
	if (n1 > n2)
	{
		l = n1 - n2;
		while (l != 0)
		{
			strcat(b, "0");
			l--;
		}

	}
	if (n1 < n2)
	{
		k = n2;
		l = n2 - n1;
		while (l != 0)
		{
			strcat(a, "0");
			l--;
		}
	}
	int nho = 0, Hieu = 0;
	for (int i = 0; i < k; i++)
	{
		Hieu = (a[i] - '0') - (b[i] - '0') - nho;
		if (Hieu < 0)
		{
			nho = 1;
			c[i] = (10 - Hieu) + '0';
		}
		else
		{
			nho = 0;
			c[i] = Hieu + '0';
		}
	}
	c[k] = '\0';
	if (h == 0) cout << "Hieu= " << c;
	else cout << "Hieu= -" << c;


}
int maxmin(char a[], char b[], int n1, int n2)
{
	if (n1 > n2) return 1;
	if (n2 > n1) return 2;
	for (int i = 0; i < n1; i++)
		if ((a[i] - '0') < (b[i] - '0')) return 2;
		else if ((a[i] - '0') > (b[i] - '0')) return 1;
}

void Tich(int A[], int B[], int C[])
{
	int lenA = strlen(A);
	int lenB = strlen(B);
	strrev(A);
	strrev(B);
	for (int i = 0; i < lenA + lenB; i++)
		C[i] = '0';
	for (int iB = 0; iB < lenB; iB++)
	{
		int nho = 0;
		int iA;
		for (iA = 0; iA, lenA; iA++)
		{
			int tong = (A[iA] - '0') * (B[iB] - '0') + nho + (C[iA + iB] - '0');
			nho = tong / 10;
			C[iA + iB] = tong % 10 + '0';

		}
		if (nho > 0)
		{
			C[iA + iB] = nho + '0';
		}
	}
	if (C[lenA + lenB - 1] != '0')
		C[lenA + lenB]'\0';
	else
		(C[lenA + lenB - 1] != '\0');
	strrev(c);


}