#include<iostream>
using namespace std;
struct Sach
{
	char Tensach[50];
	char tacgia[20];
	int Sl, Masach;

};
void Nhap(Sach& x);
void Nhapnhieusach(Sach A[], int& n);
void Xuat(Sach x);
bool SoSanh(char s1[], char s2[]);
void Timtensach(Sach A[], int n);
void Tongsosach(Sach A[], int n);

int main()
{
	Sach A[100];
	int n;
	Nhapnhieusach(A, n);
	Tongsosach(A, n);
	Timtensach(A, n);
	return 0;
}




void Nhap(Sach& x)
{
	cout << "Nhap ten sach: ";
	cin.getline(x.Tensach, 50);
	cout << " Nhap ten tac gia : ";
	cin.getline(x.tacgia, 20);
	cout << "Nhap ma so : ";
	cin >> x.Masach;
	cout << "Nhap so luong : "; cin >> x.Sl;
	cin.ignore();

}
void Xuat(Sach x)
{
	cout << "Ten Sach :" << x.Tensach << endl;
	cout << "Tac Gia :" << x.tacgia << endl;
	cout << "Ma sach" << x.Masach << endl;
	cout << "So luong : " << x.Sl << endl;
}
void Nhapnhieusach(Sach A[], int& n)
{
	cout << "Nhap so dau sach: ";
	cin >> n; cin.ignore();
	for (int i = 0; i < n; i++)
		Nhap(A[i]);
}

void Tongsosach(Sach A[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
		tong += A[i].Sl;
	cout << "tong so sach trong thu vien la : " << tong;
}

































bool SoSanh(char s1[], char s2[])
{

	for (int i = 0; i < strlen(s1); i++)
		s1[i] = toupper(s1[i]);

	for (int i = 0; i < strlen(s2); i++)
		s2[i] = toupper(s2[i]);

	if (strcmp(s1, s2) == 0)
	{
		return true;
	}

	return false;
}
void Timtensach(Sach A[], int n)
{
	char ten[30];

	cout << " Nhap ten sach : ";

	cin.getline(ten, 20);
	int a = 0;

	for (int i = 0; i < n; i++)

	{
		if (SoSanh(A[i].Tensach, ten))
		{
			Xuat(A[i]);
			a++;
		}
		if(a==0)
			cout << " khong tim thay";
	}
}