#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	int a[10000], n;

	ifstream fi("SONGUYEN.INP");
	for (int i = 0; i < 10000; i++)
		fi >> a[i];
	fi.close();
	ofstream fo("SOCHAN.OUT");
	ofstream fe("SOLE.OUT");
	for (int i = 0; i < 10000; i++)
		if (a[i] % 2 == 0) fo << a[i] << " ";
		else fe << a[i] << " ";
	fe.close();
	fo.close();
	return 0;
}

