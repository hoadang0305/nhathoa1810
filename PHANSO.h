#pragma once
#include <iostream>
using namespace std;
class PHANSO
{
private:
	int tuso,mauso;
public:
	void nhap(int, int);
	int laytu();
	int laymau();
	void gantu();
	void ganmau();
	friend istream& operator >> (istream& inDevice, PHANSO& ps);
	friend ostream& operator << (ostream& outDevice, PHANSO& ps);
	void phansonghichdao();
	int UCLN(int, int);
	void thugonphanso();
	PHANSO operator +(const PHANSO&);
	PHANSO operator -(const PHANSO&);
	PHANSO operator *(const PHANSO&);
	PHANSO operator /(const PHANSO&);
};



