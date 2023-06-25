#include<iostream>
using namespace std;
struct Phim
{
	char Tenphim[30];
	char Theloai[10];
	char tendaodien[20];
	char Namchinh[20];
	char Nuchinh[20];
	char Namsanxuat[5];
	char Hangsanxuat[30];


};
void Xuat(Phim x);
void Nhap(Phim& x);
void Nhapnhieuphim(Phim A[], int& n);
void Timtenphim(Phim A[], int n);
bool SoSanh(char s1[], char s2[]);
void Timnamchinh(Phim A[], int n);
void Timtendaodien(Phim A[], int n);
int main()
{
	Phim A[20];
	int n;
	//Nhap(x);
	Nhapnhieuphim(A, n);
	//Xuat(x);
	Timtendaodien(A, n);
	return 0;
}


void Nhap(Phim& x)
{
	cout << "nhap ten phim : ";
	cin.getline(x.Tenphim, 30);
	cout << "the loai :  " ;
	cin.getline(x.Theloai, 10);
	cout << "ten dao dien :  "; 
	cin.getline(x.tendaodien, 20);
	cout << "nam chinh :   ";
	cin.getline(x.Namchinh, 20);
	cout << "nu chinh :   ";
	cin.getline(x.Nuchinh ,20);
	cout << "nam san xuat :   ";
	cin.getline(x.Namsanxuat, 5);
	
	cout << "hang san xuat :  ";
	cin.getline(x.Hangsanxuat, 30);

}
void Xuat(Phim x)
{
	cout << "nhap ten phim : ";
	cout <<x.Tenphim << endl;
	cout << "the loai : ";
	cout << x.Theloai << endl;
	cout << "ten dao dien ";
	cout << x.tendaodien << endl;
	cout << "nam chinh  ";
	cout << x.Namchinh << endl;
	cout << "nu chinh  ";
	cout << x.Nuchinh << endl;
	cout << "nam san xuat  ";
	cout << x.Namsanxuat << endl;
	cout << "hang san xuat ";
	cout << x.Hangsanxuat << endl;
}
void Nhapnhieuphim(Phim A[], int& n)
{
	cout << "Nhap so bo phim : ";
	cin >> n; 
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		Nhap(A[i]);
	}
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
void Timtenphim(Phim A[], int n)
{
	char ten[30];

	cout << " Nhap ten phim : ";
	
	cin.getline(ten, 20);

	for (int i = 0; i < n; i++)

	{
		if (SoSanh(A[i].Tenphim, ten))
		{
			Xuat(A[i]);
		}
		else
			cout << " khong hop le";
	}
}
void Timnamchinh(Phim A[], int n)
{
	char ten[20];

	cout << " Nhap ten Nam chinh  : ";
	
	cin.getline(ten, 20);

	for (int i = 0; i < n; i++)

	{
		if (SoSanh(A[i].Namchinh, ten))
		{
			Xuat(A[i]);
		}
		else
			cout << " khong hop le";
	}
}
void Timtendaodien(Phim A[], int n)
{
	char ten[30];

	cout << " Nhap ten dao dien   : ";
	
	cin.getline(ten, 20);

	for (int i = 0; i < n; i++)

	{
		if (SoSanh(A[i].tendaodien, ten))
		{
			Xuat(A[i]);
		}
		else
			cout << " khong hop le";
	}
}
