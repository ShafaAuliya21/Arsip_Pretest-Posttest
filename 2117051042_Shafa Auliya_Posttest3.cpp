#include <iostream>
using namespace std;
int main (){
	
	//Nama  : Shafa Auliya
	//Kelas : A
	//NPM   : 2117051042
	
	cout << "Program Mengecek Bilangan 1 Sampai 9"<< endl;
	
	int bilangan;
	
	//input
	cout << "Masukan Angka : ";
	cin >> bilangan;
	
	//output
	switch (bilangan){
		case 1:
		    cout <<"Bilangan : "<< "Satu" << endl;
		    break;
		case 2:  
		    cout <<"Bilangan : "<< "Dua" << endl;
		    break;
		case 3:
		    cout <<"Bilangan : "<< "Tiga" << endl;
		    break;
		case 4: 
		    cout <<"Bilangan : "<< "Empat" << endl;
		    break;
		case 5:  
		    cout <<"Bilangan : "<< "Lima" << endl;
		    break;	    
		case 6: 
		    cout <<"Bilangan : "<< "Enam" << endl;
		    break;
		case 7: 
		    cout <<"Bilangan : "<< "Tujuh" << endl;
		    break; 
		case 8: 
		    cout <<"Bilangan : "<< "Delapan" << endl;
		    break;	
		case 9:  
		    cout <<"Bilangan : "<< "Sembilan" << endl;
		    break;
		default: 
		    cout <<"Bilangan : "<< bilangan << endl;	   
	}	
}
