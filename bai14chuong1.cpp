#include<iostream>
using namespace std; 





struct May
{
	char loaimay[30];
	char noisanxuat[50];
	int timebaohanh;
};
void Nhap(May& x);
void Xuat(May x);
void Nhapnhieumay(May A[], int& n);
void DEMsomaybh1nam(May A[], int n);
bool SoSanh(char s1[], char s2[]);
void TimmayMy(May A[], int n);





int  main()
{
	May A[100];
	int n;
	Nhapnhieumay(A, n);
	DEMsomaybh1nam(A, n);
	TimmayMy(A, n);
	return 0;

}
void Nhap(May& x)
{
	cout << "Nhap loai may :";
	cin.getline(x.loaimay, 30);
	cout << " Nhap noi san xuat";
	cin.getline(x.noisanxuat, 30);
	cout << " Nhap time bao hanh (year)";
	cin >> x.timebaohanh;
	
}
void Xuat(May x)
{
	cout << "Loai may : "  << x.loaimay << endl;
	cout << "Noi san xuat : " << x.noisanxuat << endl;
	cout << " time Bao hanh : " << x.timebaohanh << endl;
}
void Nhapnhieumay(May A[], int& n)
{
	cout << "Nhap so may: ";
	cin >> n;
	
	
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		Nhap(A[i]);
		
	}
}
void DEMsomaybh1nam(May A[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i].timebaohanh == 1)
			dem++;
	}
	cout << " so may có time bh 1 nam la: " << dem << endl;
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
void TimmayMy(May A[], int n)
{
	char ten[] = "my";

	

	
	int a = 0;

	for (int i = 0; i < n; i++)

	{
		if (SoSanh(A[i].noisanxuat, ten))
		{
			Xuat(A[i]);
			a++;
		}
		if (a == 0)
			cout << " khong tim thay";
	}
}