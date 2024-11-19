#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama;
    int umur;
    float ipk;
};

mahasiswa kelasA[6];
int pilih, N, menu;
char ulang;

int main()
{
    do {
    cout << "Menu Pilihan :" << endl;
    cout << "1. Tambah Data" << endl;
    cout << "2. Edit Data" << endl;
    cout << "3. Lihat Data" << endl;
    cout << "4. Exit" << endl;
	cout << "Pilih Menu : ";
    cin >> menu;
    switch (menu)
    {
    case 1: //tambah data
        cout << "Jumlah Data Yang Ingin Dimasukkan : ";
        cin >> N;
        for (int i = 1; i <= N; i++)
        {
            cout << "masukkan nama mahasiswa ke-" << i << " : ";
            cin >> kelasA[i].nama;
            cout << "masukkan umur mahasiswa ke-" << i << " : ";
            cin >> kelasA[i].umur;
            cout << "masukkan ipk mahasiswa ke-" << i << " : ";
            cin >> kelasA[i].ipk;
            cout << "-----------------------------------------------" << endl;
        }
        cout << "Data telah dimasukan ke database";
        break;
    case 2: //edit data
    	cout << "Data Yang Ingin Diedit : ";
    	cin >> int i;
    	
        break;

    case 3: //lihat data
        cout << "anda ingin melihat data mahasiswa dengan urutan ke berapa?";
        cin >> pilih;
        cout << "nama mahasiswa : " << kelasA[pilih].nama << endl;
        cout << "umur mahasiswa : " << kelasA[pilih].umur << endl;
        cout << "ipk mahasiswa : " << kelasA[pilih].ipk << endl;
        break;
    case 4: //exit
        break;
    }
    }
    while (menu != 4);
    return 0;
}