#include <iostream>
#include "PHANSO.h"
using namespace std;
int main()
{
    PHANSO a, b;
    cout << "nhap phan so thu nhat!!! " << endl;
    cin >> a;
    cout <<"---------------------" << endl;
    cout << "nhap phan so thu hai!!! " << endl;
    cin >> b;
    cout << "---------------------" << endl;
    cout << "xuat phan so thu nhat" << endl;
    cout << a;
    cout << "---------------------" << endl;
    cout << "xuat phan so thu hai" << endl;
    cout << b;
    cout << "---------------------" << endl;
    cout << "tu so cua phan so thu nhat: " << a.laytu() << endl;
    cout << "mau so cua phan so thu nhat: " << a.laymau() <<endl;
    cout << "---------------------" << endl;
    a.gantu();
    cout << "phan so thu nhat sau khi gan lai tu so" << endl;
    cout << a;
    cout << "---------------------" << endl;
    a.ganmau();
    cout << "phan so thu nhat sau khi gan lai mau so" << endl;
    cout << a;
    cout << "---------------------" << endl;
    cout << "phan so nghich dao cua phan so thu nhat" << endl;
    a.phansonghichdao();
    cout << a;
    cout << "---------------------" << endl;
    cout << "phan so thu nhat sau khi rut gon" << endl;
    a.thugonphanso();
    cout << a;
    cout << "---------------------" << endl;
    PHANSO temp;
    temp = a + b;
    cout << "tong 2 phan so: " << temp << endl;
    cout << "---------------------" << endl;
    temp = a - b;
    cout << "hieu 2 phan so: " << temp << endl;
    cout << "---------------------" << endl;
    temp = a * b;
    cout << "tich 2 phan so: " << temp << endl;
    cout << "---------------------" << endl;
    temp = a / b;
    cout << "thuong 2 phan so: " << temp << endl;
    //cout << "---------------------" << endl;
    return 0;
}

