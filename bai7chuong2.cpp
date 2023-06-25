#include<iostream>
#include<string.>
#include<stdio.h>
using namespace std;
void Xoa1(char S[], int k);
void Xoakhoangtrangvavietthuong(char S[]);
int main()
{
	char S[100];
	cin.getline(S, 100);
	Xoakhoangtrangvavietthuong(S);
	
	cout << S;
	return 0;
  }

void Xoakhoangtrangvavietthuong(char S[])
{
	for (int i = 0; i < strlen(S); i++)
		if (S[i] == S[i + 1] && S[i] == ' ')
			Xoa1(S, i);
	//strlwr(S);
	S[0] = S[0] - 32;
	for (int i = 1; i < strlen(S); i++)
		if (S[i] == ' ')
			S[i + 1] = S[i + 1] - 32;
	
	
			
}
void Xoa1(char S[], int k)
{
	for (int i = k; i < strlen(S); i++)
	{
		S[i] = S[i + 1];
	}
}
