/*
Nama        : Natasya Rizky Maharani
NPM         : 140810180004
Kelas       : B
Tanggal     : 13 Maret 2019
*/

#include <iostream>
#include <conio.h>

using namespace std;
struct mahasiswa {
 char NPM[14] ;
 char nama[40];
 int ipk;
};

typedef  mahasiswa LarikMhs[20];
LarikMhs  mhs;

void banyakData(int& n);
void inputMahasiswa (LarikMhs& Mhs, int n);
void cetakMahasiswa(LarikMhs Mhs, int n);
void sortNama (LarikMhs& mhs, int n);
main(){
    LarikMhs mhs;
    int n;
    banyakData(n);
    inputMahasiswa(mhs,n);
    cetakMahasiswa(mhs,n);
    getch();
}

void banyakData(int& n){
   cout<<"Banyak data : "; cin>>n;
}
void inputMahasiswa (LarikMhs& Mhs, int n) {
for (int i=0;i<n;i++) {
    cout<<"masukan data mahasiswa : "<<(i+1)<<endl;
    cout<<"NPM    :  "; cin>>Mhs[i].NPM;
    cout<<"Nama   :  "; cin>>Mhs[i].nama;
    cout<<"IPK    :  "; cin>>Mhs[i].ipk;
    }
}
void cetakMahasiswa(LarikMhs Mhs, int n){
   cout<<"PENCETAKAN DATA MAHASISWA  "<<endl;
   for (int i=0;i<n;i++) {
 cout<<Mhs[i].NPM<<" "<<Mhs[i].nama<<" "<<Mhs[i].ipk<<endl;
   }
}
