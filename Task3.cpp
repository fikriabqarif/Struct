#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama;
    int umur;
    float ipk;
};

mahasiswa kelasA[10];
int pilih, N, menu, temp = 0;
char ulang;

int main()
{
    do
    {
        cout << "Menu Pilihan :" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Edit Data" << endl;
        cout << "3. Lihat Data" << endl;
        cout << "4. Exit" << endl;
        cout << endl;
        cout << "Pilih Menu : ";
        cin >> menu;

        switch (menu){

        case 1: // tambah data
            cout << "Jumlah Data Yang Ingin Dimasukkan : ";
            cin >> N;

            for (int i = temp; i < temp + N; i++)
            {
                cout << "masukkan nama mahasiswa ke-" << i+1 << " : ";
                cin >> kelasA[i].nama;
                cout << "masukkan umur mahasiswa ke-" << i+1 << " : ";
                cin >> kelasA[i].umur;
                cout << "masukkan ipk mahasiswa ke-" << i+1 << " : ";
                cin >> kelasA[i].ipk;
                cout << "-----------------------------------------------" << endl;
                cout << endl;
            }

            temp += N;
            cout << "Data telah dimasukan ke database" << endl;
            cout << "-----------------------------------------------" << endl;
            break;

        case 2: // edit data
            int j;
            cout << "Urutan Data Yang Ingin Diedit : ";
            cin >> j;
            cout << "Menampilkan data ke-" << j << endl;
            cout << "nama mahasiswa : " << kelasA[j-1].nama << endl;
            cout << "umur mahasiswa : " << kelasA[j-1].umur << endl;
            cout << "ipk mahasiswa : " << kelasA[j-1].ipk << endl;
            cout << endl;
            cout << "masukkan nama mahasiswa ke-" << j << " : ";
            cin >> kelasA[j-1].nama;
            cout << "masukkan umur mahasiswa ke-" << j << " : ";
            cin >> kelasA[j-1].umur;
            cout << "masukkan ipk mahasiswa ke-" << j << " : ";
            cin >> kelasA[j-1].ipk;
            cout << "Data berhasil diedit" << endl;
            cout << "-----------------------------------------------" << endl;
            break;

        case 3: // lihat data
            cout << "Urutan data yang ingin dilihat : ";
            cin >> pilih;
            cout << "nama mahasiswa : " << kelasA[pilih-1].nama << endl;
            cout << "umur mahasiswa : " << kelasA[pilih-1].umur << endl;
            cout << "ipk mahasiswa : " << kelasA[pilih-1].ipk << endl;
            cout << "-----------------------------------------------" << endl;
            break;

        case 4: // exit
            break;

        default:
            break;
        }

    } while (menu != 4);
    return 0;
}