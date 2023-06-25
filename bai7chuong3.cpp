#include<iostream>
using namespace std; 
int main()
{
	int n; cin >> n;
	int f, f1, f2;
	f1 = f = f2 = 1;
	for (int i = 3; i <= n; i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	printf("F(%d) =%d", n, f);
	return 0;

}