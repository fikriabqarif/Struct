#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama;
    int umur;
    float ipk;
};

mahasiswa kelasA[10];
int pilih, N, menu, temp=1;
char ulang;

int main()
{
    do {
        cout << "Menu Pilihan :" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Edit Data" << endl;
        cout << "3. Lihat Data" << endl;
        cout << "4. Lihat Data dengan range" << endl;
        cout << "5. Exit" << endl;
        cout << "Pilih Menu : ";
        cin >> menu;

        switch (menu){
        case 1: // tambah data
            cout << "Jumlah Data Yang Ingin Dimasukkan : ";
            cin >> N;

            for (int i = temp; i < temp+N; i++)
            {
                cout << "masukkan nama mahasiswa ke-" << i << " : ";
                cin >> kelasA[i].nama;
                cout << "masukkan umur mahasiswa ke-" << i << " : ";
                cin >> kelasA[i].umur;
                cout << "masukkan ipk mahasiswa ke-" << i << " : ";
                cin >> kelasA[i].ipk;
                cout << "-----------------------------------------------" << endl;
                cout << endl;
            }

            temp+=N;
            cout << "Data telah dimasukan ke database" << endl;
            cout << "-----------------------------------------------" << endl;
            break;

        case 2: // edit data
            int j;
            cout << "Urutan Data Yang Ingin Diedit : ";
            cin >> j;
            cout << "Menampilkan data ke-" << j << endl;
            cout << "nama mahasiswa : " << kelasA[j].nama << endl;
            cout << "umur mahasiswa : " << kelasA[j].umur << endl;
            cout << "ipk mahasiswa : " << kelasA[j].ipk << endl;
            cout << endl;
            cout << "masukkan nama mahasiswa ke-" << j << " : ";
            cin >> kelasA[j].nama;
            cout << "masukkan umur mahasiswa ke-" << j << " : ";
            cin >> kelasA[j].umur;
            cout << "masukkan ipk mahasiswa ke-" << j << " : ";
            cin >> kelasA[j].ipk;
            cout << "Data berhasil diedit" << endl;
            cout << "-----------------------------------------------" << endl;
            break;

        case 3: // lihat data
            cout << "Urutan data yang ingin dilihat : ";
            cin >> pilih;
            cout << "nama mahasiswa : " << kelasA[pilih].nama << endl;
            cout << "umur mahasiswa : " << kelasA[pilih].umur << endl;
            cout << "ipk mahasiswa : " << kelasA[pilih].ipk << endl;
            cout << "-----------------------------------------------" << endl;
            break;

        case 4: // lihat data dengan range
            int min, max;
            cout << "Masukkan Range data (1 5) untuk data dari 1 sampai 5" << endl;
            cin >> min >> max;
            for (int i = min; i <= max; i++)
            {
                cout << "nama mahasiswa ke-" << i << " : " << kelasA[i].nama << endl;
                cout << "umur mahasiswa ke-" << i << " : " << kelasA[i].umur << endl;
                cout << "ipk mahasiswa ke-" << i << " : " << kelasA[i].ipk << endl;
                cout << "-----------------------------------------------" << endl;
            }
            break;

        case 5: //exit
            break;

        default:
            break;
        }

    } while (menu != 5);
    return 0;
}