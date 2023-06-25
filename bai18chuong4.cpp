#include<iostream>
using namespace std; 
void in(int A[],int n)
{
    for(int i=0;i<n*2;i++)
    {
        if(A[i]==1)
            cout<<"(";
        else
            cout<<")";
    }
}
int dkquydinh(int A[],int n)
{
    int d=1;int so1=0;int so0=0;
    for(int i=0;i<=n;i++)
    {
        if(A[i]==1)
            so1++;
        else
            so0++;
        if(so1<so0)
        {
            d=0;
            break;
        }
    }
    return d;
}
int doSauK(int A[],int n,int k)
{
    int dk=1;
    for(int i=1;i<n*2-1;i++)
    {
        if(A[i-1]==1&&A[i]==1)
            dk++;
    }
    if(dk==k)
        return 1;
    return 0;
}
int main()
{
	int n;
	cin >> n;
	cout << endl;
	chuyen(n, 'A', 'B', 'C');
	return 0;
}
