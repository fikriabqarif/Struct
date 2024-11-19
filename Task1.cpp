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

    cout << "anda ingin melihat data mahasiswa dengan urutan ke berapa?";
    cin >> pilih;
    cout << "nama mahasiswa : " << kelasA[pilih-1].nama << endl;
    cout << "umur mahasiswa : " << kelasA[pilih-1].umur << endl;
    cout << "ipk mahasiswa : " << kelasA[pilih-1].ipk << endl;
    return 0;
}