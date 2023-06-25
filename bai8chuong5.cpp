#include<iostream>
#include<string.h>
#include<stdio.h>
void Xoaxuongdong(char A[]);
bool ktradoixung(char A[]);

using namespace std;
int main()
{
	char A[100];
	cin.getline(A, 100);
	//Xoaxuongdong(A);
	if (ktradoixung(A))
		cout << "yess";
	else
		cout << "no";
	cout <<endl<< strlen(A);
	return 0;

}

void Xoaxuongdong(char A[])
{
	int len = strlen(A);

	if (A[len - 1] = '\r')
		A[len - 1] = '\0';
}
bool ktradoixung(char A[])
{
	int len = strlen(A);
	for (int i = 0; i < len/2; i++)
	{
		if (A[i] != A[len - i - 1])
			return false;
	}
	return true;
}