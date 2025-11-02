#include <iostream>
using namespace std;

int main(){
	cout << "## Konversi Detik Ke Menit ##" << endl;
	cout << "==============================" << endl;
	cout << endl;
	
	int detik, menit, jam;
	
	cout << "Masukkan jumlah detik : ";
	cin >> detik;
	
	menit = detik / 60;
	detik = detik % 60;
	
	jam = menit / 60;
	menit = menit % 60;
	cout<<endl;
	
	cout << "Hasil Konversi : " << endl;
	cout << jam << " jam, " << menit << " menit, " << detik << " detik, " << endl;
	cout<< endl;
	
	cout << "==============================" << endl;
	cout << endl;
	
	return 0;
}
