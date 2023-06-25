#include<iostream>
using namespace std;
struct Ps
{
	int ts;
	int ms;
};

struct Hs
{
	int hs;
	Ps ps;


};
void NhapHs(Hs& x);
void XuatHs(Hs x);
Hs chuyenhs(Ps a);
Ps chuyenps(Hs x);
Hs tonghs(Hs a, Hs b);



void Nhap1Ps(Ps& x);
void Xuat1Ps(Ps x);
Ps Tong(Ps a, Ps b);
int UCNN(int a, int b);
void Rutgon(Ps x);
Ps Hieu(Ps a, Ps b);
int Thuong(Ps a, Ps b, Ps& thuong);
void Quydong(Ps& a, Ps& b);










int main()
{
	Hs a, b;
	NhapHs(a);
	NhapHs(b);
	Hs kq = tonghs(a, b);
	XuatHs(kq);

	return 0;
}
void NhapHs(Hs& x)
{
	cin >> x.hs;
	Nhap1Ps(x.ps);
}
void XuatHs(Hs x)
{
	cout << x.hs << " ";
	Xuat1Ps(x.ps);
}

Hs tonghs(Hs a, Hs b)
{
	Ps aa = chuyenps(a);
	Ps bb = chuyenps(b);
	Ps tt;
	tt = Tong(aa, bb);

	Hs t = chuyenhs(tt);

	return t;
}
Ps chuyenps(Hs x)
{
	Ps kq;
	kq.ts = x.hs * x.ps.ms + x.ps.ts;
	kq.ms = x.ps.ms;
	Rutgon(kq);

	return kq;
}
Hs chuyenhs(Ps a)
{
	Hs kq;
	kq.hs = a.ts / a.ms;
	kq.ps.ts = a.ts % a.ms;
	kq.ps.ms = a.ms;
	Rutgon(kq.ps);
	return kq;
}



















void Nhap1Ps(Ps& x)
{
	cin >> x.ts >> x.ms;
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