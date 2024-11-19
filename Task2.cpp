#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama;
    int umur;
    float ipk;
};

mahasiswa kelasA[10];
int pilih, N;
char ulang;

int main()
{
    cout << "Jumlah Data Yang Ingin Dimasukkan : ";
    cin>>N;
    for(int i=0;i<N;i++){
    cout << "masukkan nama mahasiswa ke-" << i+1 <<" : ";
    cin >> kelasA[i].nama;
    cout << "masukkan umur mahasiswa ke-" << i+1 <<" : ";
    cin >> kelasA[i].umur;
    cout << "masukkan ipk mahasiswa ke-" << i+1 <<" : ";
    cin >> kelasA[i].ipk;
    cout << "-----------------------------------------------" <<endl;
    }

    ulang='Y';
    while(ulang == 'Y' || ulang == 'y'){
    cout << "anda ingin melihat data mahasiswa dengan urutan ke berapa?";
    cin >> pilih;
    cout << "nama mahasiswa : " << kelasA[pilih-1].nama << endl;
    cout << "umur mahasiswa : " << kelasA[pilih-1].umur << endl;
    cout << "ipk mahasiswa : " << kelasA[pilih-1].ipk << endl;
    cout << "Lihat data lagi <Y/N> " << endl;
    cin>>ulang;
    }
    return 0;
}