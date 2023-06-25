#include<iostream>
using namespace std;
struct SP
{
	int t;
	int p;
};
SP Tich(SP a, SP b);
void Nhapsp(SP& x);
void Xuatsp(SP x);
SP Tong(SP a, SP b);




int main()
{
	SP a, b;
	Nhapsp(a);
	Nhapsp(b);
	SP kq = Tich(a, b);
	Xuatsp(kq);




	return 0;
}
void Nhapsp(SP& x)
{
	cin >> x.t >> x.p;
}
void Xuatsp(SP x)
{
	cout << x.t << " " << x.p << "i";
}
SP Tong(SP a, SP b)
{
	SP tong;
	tong.t = a.t + b.t;
	tong.p = a.p + b.p;
	return tong;
}
SP Tich(SP a, SP b)
{
	SP tich;
	tich.t = a.t * b.t + a.p * b.p;
	tich.p = a.t * b.p + b.t * a.p;
	return tich;
}