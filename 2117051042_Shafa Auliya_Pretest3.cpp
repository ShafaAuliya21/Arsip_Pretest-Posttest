#include <iostream>
#include <cmath>
using namespace std;

int main(){
	//Nama  : Shafa Auliya
	//Kelas : A
	//NPM   : 2117051042
	
	cout << "Program Menentukan Jumlah Biaya Checkout Keranjang Online Shop" <<endl;
	
	int harga;
	
	//input
	cout << "Harga Belanja : ";
	cin >> harga;
	
	//output
	if (harga > 120000){
		cout << "Jumlah Harga Belanja : "<< (harga+0) <<endl;
	} else if (harga < 50000){
		cout << "Jumlah Harga Belanja : "<< (harga+41000) <<endl;	
	} else if (harga >= 50000){
		cout << "Jumlah Harga Belanja : "<< (harga+11000) <<endl;
	}		 
}
