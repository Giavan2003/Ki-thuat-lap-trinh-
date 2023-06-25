#include<iostream>
using namespace std;
struct HS
{
	char MSSV[5];
	char HOTEN[30];
	float Dtb;
	float toan, ly, hoa;
};
void Nhap(HS& x);
void Xuat(HS x);
void Xuatmang(HS A[], int n);
void Nhapmang(HS A[], int& n);
void TimSvDtbMax(HS A[], int n);
void Sepxep(HS A[], int n);
void Sepxeptheodiemtoan(HS A[], int n);
void Timtenvain(HS A[], int n);
bool SoSanh(char s1[], char s2[]);

int main()
{
	HS A[50];
	int n;
	Nhapmang(A, n);
	//Sepxep(A, n);
	Timtenvain(A, n);
	//Xuatmang(A, n);
	//TimSvDtbMax(A, n);

	return 0;
}
void Timtenvain(HS A[], int n)
{
	char ten[30];

	cout << " Nhap ten : ";
	cin.ignore();
	cin.getline(ten, 30);

	for (int i = 0; i < n; i++)

	{
		if (SoSanh(A[i].HOTEN, ten))
		{
			Xuat(A[i]);
		}
		else
			cout << " khong hop le";
	}
}









void Nhap(HS& x)
{

	cout << " MSSV: ";

	cin.getline(x.MSSV, 5);

	cout << "nhap ten";

	cin.getline(x.HOTEN, 30);
	cout << " Nhap diem Toan : Ly :  Hoa : DTb: ";
	cin >> x.toan >> x.ly >> x.hoa >> x.Dtb;
	cin.ignore();
}
void Xuat(HS x)
{
	cout << "MSSV : " << x.MSSV << endl;
	cout << "HOTEN: " << x.HOTEN << endl;
	cout << " Diem toan : " << x.toan << " diem ly : " << x.ly << " diem hoa :" << x.hoa << " diem TB : " << x.Dtb;
}
void Nhapmang(HS A[], int& n)
{
	cout << "Nhap so hs: "; cin >> n; cin.ignore();

	for (int i = 0; i < n; i++)
	{

		cout << " Nhap thong tin HS thu " << i + 1 << endl;
		cin.ignore();
		Nhap(A[i]);
	}
}
void Xuatmang(HS A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " " << endl;
		Xuat(A[i]);
		cout << endl;
	}
}

void TimSvDtbMax(HS A[], int n)
{
	float max = A[0].Dtb;
	int    maso = 0;
	for (int i = 1; i < n; i++)
	{
		if (A[i].Dtb > max)
		{
			max = A[i].Dtb;
			maso = i;
		}
	}
	cout << "thong tin sv cos dtb cao nhat la : " << endl;
	Xuat(A[maso]);
}
void Sepxep(HS A[], int n)
{

	for (int i = 0; i < n - 1; i++)
		for (int j = i; j < n; j++)
		{
			if (A[i].Dtb > A[j].Dtb)
			{
				HS t = A[j];
				A[j] = A[i];
				A[i] = t;
			}
		}

}
void Sepxeptheodiemtoan(HS A[], int n)
{

	for (int i = 0; i < n - 1; i++)
		for (int j = i; j < n; j++)
		{
			if (A[i].toan < A[j].toan)
			{
				HS t = A[j];
				A[j] = A[i];
				A[i] = t;
			}
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