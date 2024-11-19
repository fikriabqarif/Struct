#include <iostream>
using namespace std;

struct barang
{
    string kode;
    string nama;
    int harga;
    int jumlah;
};

barang databarang[50];
int pilih, N, jumlah;
float rata;

int main()
{
    cout << "Jumlah Data barang Yang Ingin Dimasukkan : ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cout << "masukkan kode barang ke-" << i + 1 << " : ";
        cin >> databarang[i].kode;
        cout << "masukkan nama barang ke-" << i + 1 << " : ";
        cin >> databarang[i].nama;
        cout << "masukkan harga barang ke-" << i + 1 << " : ";
        cin >> databarang[i].harga;
        cout << "masukkan jumlah barang ke-" << i + 1 << " : ";
        cin >> databarang[i].jumlah;
        cout << "-----------------------------------------------" << endl;
    }

    for (int i = 0; i < N; i++)
    {
        jumlah += databarang[i].jumlah;
        rata += databarang[i].harga;
    }

    cout << "jumlah semua barang : ";
    cout << jumlah << endl;
    cout << "Harga rata-rata semua barang : ";
    cout << rata / N << endl;
    return 0;
}