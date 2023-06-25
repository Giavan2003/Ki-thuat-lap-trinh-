#include<iostream>
using namespace std; 
bool checkAmstrong(int n);
int main()
{
	int n, a[100]; cin >> n;
	int tong  = 0;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		if (checkAmstrong(a[i]))
			tong += a[i];
		

	return 0;
}


bool checkAmstrong(int n)
{
	int C[20]; int k = 0;
	int dem = 0;
	while (n = 0)
	{
		int du = n % 10;
		C[k] = du;
		k++;
		dem++;
		n = n / 10;
	}
	int tong = 0;
	for (int i = 0; i < k; i++)
	{
		tong += pow(C[i], dem);
	}
	if (tong == n)
		return true;
	else
		return false;

}