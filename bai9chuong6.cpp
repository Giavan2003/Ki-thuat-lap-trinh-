#include<iostream>
#include<string.h>
#include<stdio.h>




using namespace std; 
int dem(char A[], char s);
bool Chek(char A[], int k);
void Xuat(char A[], char B[]);
void Xoa1pt(char A[], int  k);
int  main()
{
	char A[100], B[100];
	strcpy(B,A);
	int lenB = strlen(B);
	for (int l = lenB - 1; l >= 0; l--)// xoa cac phan tu giong nhau 
		if (Chek(B, l) == false)
			Xoa1pt(B, l);
	Xuat(A, B);
	return 0;

}
void Xuat(char A[], char B[])
{
	int C[100];
	

	for (int i = 0; i < strlen(B); i++)
	{
		C[i] = dem(A, B[i]);
		cout << "'" << B[i] << "'" << "xuat hien : " << C[i] << "lan" << endl;
	}





}
int dem(char A[], char s)
{
	int dem = 0;
	for (int i = 0; i < strlen(A); i++)
		if (A[i] == s)
			dem++;
	return dem;
}
void Xoa1pt(char A[], int  k)
{
	int len = strlen(A);
	for (int i = k; i < len; i++)
		A[i] = A[i + 1];
	A[len - 2] = '\0';
}
bool Chek(char A[], int k)
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
