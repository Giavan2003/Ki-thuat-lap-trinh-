#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>


using namespace std;

void TaoFile();
void DocFile();


int main()
{
	TaoFile();
	DocFile();
	return 0;
}

void TaoFile() {
	fstream output;
	inp.open("SONGUYEN.INP",ios::out|ios::binary);
	if (output)
	{
	
	int A[10];
	int n = 1000;
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			A[j] = rand() % 10;
			cout << A[j] << " ";
		}
		inp.write(reinterpret_cast<char*>(&A), sizeof(A));
		inp.write("\n", 1);
		cout << endl;
	}
	output.close();
}

void DocFile() {
	fstream input("SONGUYEN.INP",ios ::in | ios::binary);
	

	if (input)
	{
		cout << "K mo dc ";
		exit(0);
	}
	int n = 0, A[1000];
	while (true)
	{
		int B[10];
		input.read(reinterpret_cast<char*>(&B), sizeof(B));
		char C;
		input.read(reinterpret_cast<char*>(&C), sizeof(C));
		if (fi.eof())
			break;
		for (int i = 0; i < 10; i++)
		{
			A[n] = B[i];
			n++;
		}
	}
	input.close();
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
}





