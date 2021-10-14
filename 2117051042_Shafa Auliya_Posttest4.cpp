#include <iostream>
using namespace std;

int main(){
	
	//Nama  : Shafa Auliya
	//Kelas : A
	//NPM   : 2117051042
	
	cout << "Program Mencetak Nilai Siswa Beserta Rata Rata" << endl;
	
	int Nilai, arr[Nilai], hasil=0, r;
	
	//input
	cout << "Nilai : "; 
	cin >> Nilai;
	cout << "Semua Nilai Siswa : ";
	for(int j = 0; j < Nilai; j++){
		cin >> arr[j];
    }
    
    //output
    for(int j = 0; j < Nilai; j++){
    	cout << arr[j] << endl;
	} 
	cout << "Rata Rata Nilai Siswa : ";
	for(int j = 0; j < Nilai; j++){
		hasil = hasil+arr[j];	
	}
	    r = (hasil/Nilai);
		cout << r;
			
	return 0;
}
