#include<iostream>
#include<fstream>;
using namespace std;


int main()
{
	ofstream fo("SOCHAN.DAT");

	int i = 2;
	while (i <= 100)
	{
		fo << i << " ";
		i = i + 2;
	}
	fo.close();
	int a[100];
	ifstream fi("SOCHAN.DAT");

	for (int i = 1; i <= 50; i++)
		fi >> a[i];
	for (int i = 1; i <= 50; i++)
	{
		cout << a[i] << " ";
		if (i % 30 == 0) cout << endl;
	}
	fi.close();
	return 0;
}
