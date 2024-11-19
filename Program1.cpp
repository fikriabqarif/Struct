#include <iostream>
using namespace std;

struct mahasiswa{
string nama;
int umur;
float ipk;
};

mahasiswa kelasA[6];
int pilih;

int main() {
cout<<"masukkan nama mahasiswa pertama: ";
cin>>kelasA[0].nama;
cout<<"masukkan umur mahasiswa pertama: ";
cin>>kelasA[0].umur;
cout<<"masukkan ipk mahasiswa pertama : ";
cin>>kelasA[0].ipk;
cout<<"----------------------------------------"<<endl;
cout<<"masukkan nama mahasiswa kedua: ";
cin>>kelasA[1].nama;
cout<<"masukkan umur mahasiswa kedua: ";
cin>>kelasA[1].umur;
cout<<"masukkan ipk mahasiswa kedua: ";
cin>>kelasA[1].ipk;
cout<<"----------------------------------------"<<endl;
cout<<"anda ingin melihat data mahasiswa dengan urutan ke berapa?";
cin>>pilih;
cout<<"nama mahasiswa : "<<kelasA[pilih].nama<<endl;
cout<<"umur mahasiswa : "<<kelasA[pilih].umur<<endl;
cout<<"ipk mahasiswa : "<<kelasA[pilih].ipk<<endl;
return 0;
}