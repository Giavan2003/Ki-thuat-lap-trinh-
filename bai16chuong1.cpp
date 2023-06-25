#include<iostream>
using namespace std;
struct MH // mat hang 
{
	int Mahang, Soluong, Dongia, TimeBh;
	int Soluongton;
	char Tenmathang[20];
};
void Nhap(MH& x);
void Xuat(MH x);
void Sapxeptheoslton(MH A[], int n);
void NhapNhieuMh(MH A[], int& n);
void TimMHMaxton(MH A[], int n);
void TimMHMinton(MH A[], int n);
void TimMHMaxgiatien(MH A[], int n);
void Xuatnhieumh(MH A[], int n);

int main()
{
	MH A[100];
	int n;


	NhapNhieuMh(A, n);
	TimMHMaxgiatien(A, n);
	TimMHMaxton(A, n);
	Sapxeptheoslton(A, n);
	Xuatnhieumh(A, n);
	return 0;
}

void Nhap(MH& x)
{
	cout << "Nhap ten mat hang: ";
	cin.getline(x.Tenmathang, 20);
	//cout << " Nhap Ma hang: "; cin >> x.Mahang;
	//cout << " So luong: "; cin >> x.Soluong;
	cout << "so uong ton: "; cin >> x.Soluongton;
	//cout << " time bao Hanh: "; cin >> x.TimeBh;
	cout << "Nhap don gia "; cin >> x.Dongia;



}
void Xuatnhieumh(MH A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(A[i]);
		cout << endl;
	}
}
void Xuat(MH x)
{
	cout << " Ten mat hang:";
	cout << x.Tenmathang << endl;;
	//cout << " Ma hang: "<< x.Mahang << endl;;
//	cout << " So luong: " << x.Soluong << endl;;
	cout << "So uong ton: " << x.Soluongton << endl;;
	//cout << " Time bao Hanh: " << x.TimeBh << endl;;
	cout << "Nhap don gia " << x.Dongia << endl;


}
void NhapNhieuMh(MH A[], int& n)
{
	cout << "So mat hang : "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		Nhap(A[i]);
	}

}
void TimMHMaxton(MH A[], int n)
{
	int chiso = 0;
	int maxton = A[0].Soluongton;
	for (int i = 1; i < n; i++)
	{
		if (A[i].Soluongton > maxton)
		{
			maxton = A[i].Soluongton;
			chiso = i;
		}

	}
	for (int i = 1; i < n; i++)
	{
		if (A[i].Soluongton == maxton)
		{
			cout << "Max Ton la :";
			Xuat(A[i]); cout << endl;
		}
	}

}
void TimMHMinton(MH A[], int n)
{
	int chiso = 0;
	int minton = A[0].Soluongton;
	for (int i = 1; i < n; i++)
	{
		if (A[i].Soluongton < minton)
		{
			minton = A[i].Soluongton;
			chiso = i;
		}

	}
	for (int i = 1; i < n; i++)
	{
		if (A[i].Soluongton == minton)
		{
			cout << "Min Ton la :";
			Xuat(A[i]); cout << endl;
		}
	}

}


void TimMHMaxgiatien(MH A[], int n)
{
	int chiso = 0;
	int max = A[0].Dongia;
	for (int i = 1; i < n; i++)
	{
		if (A[i].Dongia > max)
		{
			max = A[i].Dongia;
			chiso = i;
		}

	}
	for (int i = 1; i < n; i++)
	{
		if (A[i].Dongia == max)
		{
			cout << "MAt hang Max gia tien la: ";
			Xuat(A[i]); cout << endl;
		}
	}
}
void Sapxeptheoslton(MH A[], int n)
{
	int max = A[0].Soluongton;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (A[i].Soluongton > max)
			{
				MH t = A[j];
				A[j] = A[i];
				A[i] = t;
			}

		}
}
