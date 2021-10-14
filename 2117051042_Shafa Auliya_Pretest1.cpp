#include <iostream>
using namespace std;

int main(){
	string nama;
	string jumlah;
	string lama;
	string suku;
	
	//input
	cout<< "Nama : ";
	getline(cin,nama);
	cout<< "Jumlah Pinjaman : ";
	getline(cin,jumlah);
	cout<< "Lama Pinjaman : ";
	getline(cin,lama);
	cout<< "Suku Bunga Pertahun : ";
	getline(cin,suku);
	
	//output
	cout<< "Nama : "<< nama << endl;
	cout<< "Jumlah Pinjaman : " << " Rp. " << jumlah << endl;
	cout<< "Lama Pinjaman : " << lama << " tahun " << endl;
	cout<< "Suku Bunga Per-tahun : " << suku << "%" << endl;
	return 0;
}
