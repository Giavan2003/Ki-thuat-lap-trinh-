#include<iostream>
using namespace std; 
bool check(int k, int n);
int main()
{
	int N; cin >> N; 

	for (int i = 2; i <= N; i++)
		if (check(i, N))
			cout << i << " ";
	return 0 ;

   

	
	
	
	
	
	
	return 0;
}


bool check(int k, int n)
{


	
		if (k % 2 == 0 || k % 3 == 0||k%5==0)
			return false;
		else
			return true;

	
}
