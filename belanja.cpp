#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // inisialisasi variable terlebih dahulu.
    int jumlah_beli, bayar, diskon, jumlah[100], harga[100],total[50];
    float total_semua;
    string nama_barang[100];

    cout<<"===========================\n";
    cout<<"Program C++ Kasir Sederhana\n";
    cout<<"===========================\n\n";

    cout<<"Masukan Jumlah Beli :";
    cin>> jumlah_beli; //pembeli dan jumlah barang yang di beli.

    for (int i=0;i<jumlah_beli;i++)
    {
        cout<<"\nMasukan Barang ke- "<<i+1<<"\n\n";
        cout<<"Nama Barang : ";
        cin>>nama_barang[i]; //input nama barang yang dibeli

        cout<<"Jumlah Barang : ";
        cin>>jumlah[i]; //input jumlah barang yang di b…
    }
}