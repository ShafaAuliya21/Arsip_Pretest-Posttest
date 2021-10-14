#include <iostream>
#include <cmath>
using namespace std;

int main(){ 

// Nama   : Shafa Auliya
// Kelas  : A
// NPM    : 2117051042
   cout <<"Program Peminjaman Uang di Bank"<< endl;
  
   string a;
   float b;
   float c;
   float d; 
   float cicilan;
   
   //input
   cout<< "Nama            : ";
   getline(cin,a);
   cout<< "Jumlah Pinjaman : "<< "Rp. ";
   cin>>b;
   cout<< "Bunga Perbulan  : ";
   cin>>c;
   cout<< "Lama Peminjam   : ";
   cin>>d; 
        
   //output
   cout << "Nama : " << a << endl;
   cout << "Cicilan Perbulan : "<<(b/(d*12))+((c/100)*b);
   return 0;
}
