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
void Rutgon(Ps x);
Ps Hieu(Ps a, Ps b);
int Thuong(Ps a, Ps b, Ps& thuong);
void Quydong(Ps& a, Ps& b);
void Chuanhoa(Ps x);
int Sosanh(Ps a, Ps b);








int main()
{
	Ps a, b;

	Nhap1Ps(a);
	Nhap1Ps(b);
	Quydong(a, b);
	Xuat1Ps(a);
	Xuat1Ps(b);
	return 0;
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
	cout << x.ts << " / " << x.ms;
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
void Rutgon(Ps x)
{
	int uc = UCNN(x.ts, x.ms);
	x.ts = x.ts / uc;
	x.ms = x.ms / uc;
}
Ps Hieu(Ps a, Ps b)
{
	Ps hieu;
	hieu.ts = a.ts * b.ms - a.ms * b.ts;
	hieu.ms = a.ms * b.ms;
	Rutgon(hieu);
	return hieu;

}
int Thuong(Ps a, Ps b, Ps& thuong)
{

	if (b.ts == 0)
		return 0;
	thuong.ts = a.ts * b.ms;

	thuong.ms = a.ms * b.ts;
	Chuanhoa(thuong);
	Rutgon(thuong);
	return 1;
}
void Quydong(Ps& a, Ps& b)
{
	int mcnn = a.ms * b.ms / UCNN(a.ms, b.ms);
	a.ts = a.ts * mcnn / a.ms;
	a.ms = mcnn;
	b.ms = mcnn;
	b.ts = b.ts * mcnn / b.ms;

}