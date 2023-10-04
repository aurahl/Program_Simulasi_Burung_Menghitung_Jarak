
#include<bits/stdc++.h>
using namespace std;
// jarak = (v * v * sin(s) ) / 10

int main()
{
	cout << "Masukkan sudut peluncuran: ";
	double s ;
	cin >> s;
	cout << "Masukkan kecepatan: ";
	double v;
	cin >> v;
	v = v * v;
	float jarak;
	float sinA = sin(2 * s * 3.141 / 180);
	jarak = (v * sinA) / 10;
	cout << "Jarak Horizontal Terjauh: ";
	cout << setprecision(2) << jarak;
}
