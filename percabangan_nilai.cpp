#include <iostream>
using namespace std;
int main()
{
    char nilai;
    cout<<"imput nilai anda (A-E)";
    cin>> nilai;
    switch (nilai)
    {
        // case > bukan hanya untuk menampilkan hurup tapi angka juga bisa
        // break > untuk menghentikan cout yang di atas 
        case 'A':
        cout <<"pertahankan!"<<endl;
        break;
        case 'B':
        cout <<"harus lebiah baik lagi"<<endl;
        break;
        case 'C':
        cout <<"perbanyak belajar"<<endl;
        break;
        case 'D':
        cout <<"jarang keseringan main!"<<endl;
        break;
        case 'E':
        cout <<"kebanyakan bolos"<<endl;
        break;
        default:
        cout << "maaf,format nilai tidak sesuai"<<endl;
    }
        return 0;

}