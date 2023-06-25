#include<iostream>
using namespace std; 
#define Size 20 
int A[Size], B[Size] = { 0 };
int n;
void lietke(int k);
void Xuat();
int main()
{
    cin >> n;
    lietke(0);
    return 0;
}
void lietke(int k)
{

    if (k == n)
        Xuat();
    else
    {
       
            for (int i = 0; i < n; i++)
                if (B[i] == 0)
                {
                    A[k] = i;
                    B[i] = 1;
                    lietke(k + 1);
                    B[i] = 0;
                }

           

      
    }


}
void Xuat()
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}