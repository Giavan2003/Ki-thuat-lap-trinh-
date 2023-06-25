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
SP tongmang(SP S[], int n);



int main()
{
	SP a, b;
	int m;
	cout << "Nhap m ";
	cin >> m;
	SP S[100];
	for (int i = 0; i < m; i++)
		Nhapsp(S[i]);
	SP kq = tongmang(S, m);
	Xuatsp(kq);




	return 0;
}
SP tongmang(SP S[], int n)
{
	SP tong = S[0];
	for (int i = 1; i < n; i++)
		tong = Tong(tong, S[i]);
	return tong;

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