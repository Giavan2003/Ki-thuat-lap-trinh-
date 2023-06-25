#include<iostream>
using namespace std;
struct Ps
{
	int ts;
	int ms;
};

void Nhap1Ps(Ps& x);
void Xuat1Ps(Ps x);
Ps Tong(Ps a, Ps b);
int UCNN(int a, int b);
void Rutgon(Ps& x);

void Quydong(Ps& a, Ps& b);
void Chuanhoa(Ps x);
int Sosanh(Ps a, Ps b);
void Nhapmangps(Ps A[], int& n);
void Xuatmang(Ps A[], int n);
Ps tongtatcaPs(Ps A[], int n);
Ps Maxmang(Ps A[], int n);


int main()
{


	Ps A[100];
	int n;
	Nhapmangps(A, n);
	

	Xuatmang(A, n);

	return 0;
}
void Nhapmangps(Ps A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		Nhap1Ps(A[i]);
	}
}
void Xuatmang(Ps A[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat1Ps(A[i]);
}
Ps tongtatcaPs(Ps A[], int n)
{
	Ps tong = A[0];
	for (int i = 1; i < n; i++)
		tong = Tong(tong, A[i]);
	return tong;

}
Ps Maxmang(Ps A[], int n)
{
	Ps max = A[0];
	for (int i = 1; i < n; i++)
		if (Sosanh(A[i], max) > 0)
			max = A[i];
	return max;

}


int Sosanh(Ps a, Ps b)
{
	Chuanhoa(a);
	Chuanhoa(b);
	if (a.ts * b.ms > a.ms * b.ts)
		return 1;
	else
	{
		if (a.ts * b.ms < a.ms * b.ts)
			return 0;
		else
			return -1;
	}



}

void Chuanhoa(Ps x)
{
	if (x.ms < 0)
	{
		x.ts = -x.ts;
		x.ms = -x.ms;
	}
}
void Nhap1Ps(Ps& x)
{
	cin >> x.ts >> x.ms;
	Chuanhoa(x);
}
void Xuat1Ps(Ps x)
{
	cout << x.ts << "/" << x.ms << " ";
}
Ps Tong(Ps a, Ps b)
{
	Ps tong;
	tong.ts = a.ts * b.ms + a.ms * b.ts;
	tong.ms = a.ms * b.ms;
	Rutgon(tong);
	return tong;
}
int UCNN(int a, int b)
{
	if (a == 0 || b == 0)
		return a + b;
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}
void Rutgon(Ps& x)
{
	int uc = UCNN(x.ts, x.ms);
	x.ts = x.ts / uc;
	x.ms = x.ms / uc;
}


void Quydong(Ps& a, Ps& b)
{
	int mcnn = a.ms * b.ms / UCNN(a.ms, b.ms);
	a.ts = a.ts * mcnn / a.ms;
	a.ms = mcnn;
	b.ms = mcnn;
	b.ts = b.ts * mcnn / b.ms;

}