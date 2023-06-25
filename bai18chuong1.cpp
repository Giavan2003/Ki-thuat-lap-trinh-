#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;
int main()
{
	fstream output;
	output.open("SONGUYEN.txt", ios::out);
	if (output)
	{
		int A[10000];
		int n = 10000;
		bool B[32768] = { 0 };
		srand((unsigned)time(NULL));
		int d = 0;
		while (d < n)
		{
			int x = rand() % 32768;
			if (B[x] == 0)
			{
				

				B[x] = 1;
				output << x << " ";
				d++;
			}
		}
		output.close();
	}
}

