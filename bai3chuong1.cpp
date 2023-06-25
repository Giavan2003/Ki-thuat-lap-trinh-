#include<iostream>
using namespace std;
struct Time
{
	int hout;
	int munite;
	int sec;

};

void Ktrahople(Time x);

void Nhap(Time& x);
Time Khoangcach(Time a, Time b);
void Xuat(Time x);

int main()
{
	Time a, b;
	Nhap(a);
	Ktrahople(a);
	Nhap(b);
	Ktrahople(b);
	Time kq = Khoangcach(a, b);
	cout << " khoang cach la : ";
	Xuat(kq);
	
	return 0;
}


void Nhap(Time &x)
{
	cout << "nhap hout : munite : sec :  ";
	cin >>x.hout >> x.munite>> x.sec;

}
void Ktrahople(Time x)
{
	if (x.hout < 0 || x.hout>24 || x.munite < 0 || x.munite>60 || x.sec < 0 || x.sec>60)
	{
		cout << "khong hop le"<< endl;
		return;
	}
	else
		cout << " hop le "<< endl;
}
void Xuat(Time x)
{
	cout << x.hout << ":" << x.munite << ":" << x.sec;
}
Time Khoangcach(Time a, Time b)
{
	int t1, t2;
	t1 =a.hout * 60 * 60 + a.munite * 60 + a.sec;
	t2 = b.hout * 60 * 60 + b.munite * 60 + b.sec;
	int m = abs(t1 - t2);
	Time kq;
	kq.hout = m / 3600;
	kq.munite = (m - kq.hout * 3600) / 60;
	kq.sec = m - kq.hout * 3600 - kq.munite * 60;
	return kq;



}