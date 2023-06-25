#include<iostream>
using namespace std; 
int Binarysearch(int A[], int x, int low, int hight);
int main()

{
	int n, x; int A[100]; cin >> n;
	cout << " Nhap chuoi tang dan ";
	for (int i = 0; i < n; i++)
		cin >> A[i];
	//cout << "Nhap x: ";
	cin >> x;
	cout << Binarysearch(A, x, 0, n - 1);
	return 0;

}
int Binarysearch(int A[], int x, int low, int hight)
{
	if (hight > low)
	{
		int mid = (hight + low) / 2;
		if (x == A[mid])
			return mid;
		if (x > A[mid])
			return Binarysearch(A, x, low + 1, hight);
		return Binarysearch(A, x, low , hight-1);

	}
	return -1;
}