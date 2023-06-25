#include<iostream>
using namespace std;
int tong(int A[], int n);
int main()
{
    int n, A[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    cout << tong(A, n);
    return 0;

}
int tong(int A[], int n)
{

    if (n == 1)
        return A[0];
    else
        return A[n - 1] + tong(A, n - 1);
}