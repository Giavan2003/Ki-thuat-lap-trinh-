#include<iostream>
using namespace std;
void Xoa1pt(char A[], int  k);
bool Chek(char A[], int k); 

void Xauconmax(char A[], char B[], char C[]);
int main()
{
	char A[100], B[100],C[100];
	cout << "Nhap A";
	cin.getline(A, 100);
	cout << "NHap B";
	cin.getline(B, 100);
	Xauconmax(A, B, C);
	puts(C);
	return 0;


}
void Xauconmax(char A[], char B[], char C[])
{
	int lenA = strlen(A);
	int lenB = strlen(B);
	int k = 0;
	for(int i=0; i< lenA;i++)
		for (int j = 0; j < lenB; j++)
		{
			if (A[i] == B[j])
			{
				C[k] = B[j];
				k++;

			}
		}
	C[k ] = '\0';
	int lenC = strlen(C);
	for (int l = lenC-1; l >=0; l--)
		if (Chek(C, l) == false)
			Xoa1pt(C, l);
}
void Xoa1pt(char A[],int  k)
{
	int len = strlen(A);
	for (int i = k; i < len; i++)
		A[i] = A[i + 1];
	A[len - 2] = '\0';
}
bool Chek(char A[],int k)
{
	int len = strlen(A);
	int dem = 0;
	for (int i = 0; i < len; i++)
	{
		if (A[i] == A[k])
			dem++;
	}
	if (dem != 1)
		return false;
	return true;
}