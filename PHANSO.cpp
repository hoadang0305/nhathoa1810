#include "PHANSO.h"


void PHANSO::nhap(int tu, int mau)
{
	tuso = tu;
	mauso = mau;
}
int PHANSO::laytu()
{
	return tuso;
}
int PHANSO::laymau()
{
	return mauso;
}
istream& operator >> (istream& inDevice, PHANSO& ps)
{
	int tu, mau;
	cout << "Nhap tu so: ";
	inDevice >> tu;
	cout << "Nhap mau so: ";
	do {
		inDevice >> mau;
		if (mau == 0) cout << "Nhap lai mau so: ";
	} while (mau == 0);
	ps.nhap(tu, mau);
	return inDevice;
}
ostream& operator << (ostream& outDevice, PHANSO& ps)
{
	int tu = ps.laytu();
	int mau = ps.laymau();
	if ((tu * mau < 0 && mau < 0) || (tu * mau > 0 && mau < 0))
	{
		mau *= -1;
		tu *= -1;
	}
	outDevice << "Phan so da nhap la: " << tu << "/" << mau << endl;
	return outDevice;
}
void PHANSO::gantu()
{
	int tu;
	cout << "Nhap tu so can gan: ";
	cin >> tu;
	tuso = tu;
}
void PHANSO::ganmau()
{
	int mau;
	cout << "Nhap mau so can gan: ";
	cout << "Nhap mau so: ";
	do {
		cin >> mau;
		if (mau == 0) cout << "Nhap lai mau so: ";
	} while (mau == 0);
	mauso = mau;
}
void PHANSO::phansonghichdao()
{
	int temp = this->tuso;
	this->tuso = this->mauso;
	this->mauso = temp;
}

int PHANSO::UCLN(int a, int b) {
	if (a % b != 0) return UCLN(b, a % b);
	else return b;
}
void PHANSO::thugonphanso() {
	int ucln = UCLN(this->tuso, this->mauso);
	this->tuso = this->tuso / ucln;
	this->mauso = this->mauso / ucln;
}
PHANSO PHANSO::operator+(const PHANSO& a)
{
	PHANSO temp;
	temp.tuso = this->tuso * a.mauso + this->mauso * a.tuso;
	temp.mauso = this->mauso * a.mauso;
	temp.thugonphanso();
	return temp;
}

PHANSO PHANSO::operator-(const PHANSO& a)
{
	PHANSO temp;
	temp.tuso = this->tuso * a.mauso - this->mauso * a.tuso;
	temp.mauso = this->mauso * a.mauso;
	temp.thugonphanso();
	return temp;
}
PHANSO PHANSO::operator*(const PHANSO& a)
{
	PHANSO temp;
	temp.tuso = this->tuso * a.tuso;
	temp.mauso = this->mauso * a.mauso;
	temp.thugonphanso();
	return temp;
}
PHANSO PHANSO::operator/(const PHANSO& a)
{
	PHANSO temp;
	temp.tuso = this->tuso * a.mauso;
	temp.mauso = this->mauso * a.tuso;
	temp.thugonphanso();
	return temp;
}
