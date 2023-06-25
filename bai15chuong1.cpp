#include<iostream>;
#include<string.h>
using namespace std;
struct LK //linh kien
{
	char ten[31];
	char quycach[11];
	char loai[5];
	int dongia;
};
void sapxeptheoloaivatheoten(LK A[], int n);
void Nhap(LK& x);
void Nhapnhieulk(LK A[], int& n);
void Xuat(LK x);
void Xuatnhieulk(LK A[], int& n);
bool KTralk(LK A[], int n);


int main()
{
	LK A[100];
	int n;
	Nhapnhieulk(A, n);
	sapxeptheoloaivatheoten(A, n);
	Xuatnhieulk(A, n);
	return 0;

}





void Nhap(LK& x)
{
	cout << "Nhap ten linkien: ";
	cin.getline(x.ten, 31);
	cout << " Nhap quy cach : ";
	cin.getline(x.quycach, 11);
	cout << " Nhap loai : ";
	cin.getline(x.loai, 5);
	cout << " don gia  : ";
	cin >> x.dongia;
}
void Xuat(LK x)
{
	cout << "Teen : " << x.ten << endl;
	cout << "Quy cach :" << x.quycach << endl;
	cout << "Loai :" << x.loai << endl;
	cout << "Don Gia: " << x.dongia;
}
void Xuatnhieulk(LK A[], int& n)
{

	for (int i = 0; i < n; i++)
	{

		Xuat(A[i]);
		cout << endl;
		
	}
}
void Nhapnhieulk(LK A[], int& n)
{
	cout << " Nhap so link kien: ";
	cin >> n; cin.ignore();
	for (int i = 0; i < n; i++)
	{

		Nhap(A[i]);
		cin.ignore();
	}
}
void sapxeptheoloaivatheoten(LK A[], int n)
{
	for(int i=0; i< n-1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (A[i].loai > A[j].loai || A[i].loai == A[j].loai && strcmp(A[i].ten, A[j].ten) > 0)
			{
				LK t = A[j];
				A[j] = A[i];
				A[i] = t;
			}
		}
}
bool KTralk(LK A[], int n)
{
	int dem = 0;
	for(int i=0 ;i < n; i++)
		if(A[i].loai == "a"|| A[i].loai=="A")
			dem ++;
	if (dem >= 9)
		return true;
	else return false;

}