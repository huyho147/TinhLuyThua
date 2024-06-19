#include <iostream>
using namespace std;


double tinhluythua(double a, double b)
{
	double giatri = 1;
	for (int i = 1; i <= b; i++)
	{
		giatri *= a;
	}
	return giatri;
}
int main()
{
	int a, n;
	cout << "Tinh Luy Thua !!! a^n \n";
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so mu n: ";
	cin >> n;
	
	cout << "Ket qua la : " << tinhluythua(a,n);
}

