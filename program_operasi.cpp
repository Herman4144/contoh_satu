#include <iostream>
using namespace std;
int main()
{  
    int a, b, c, hasil1, hasil2, hasil3, hasilakhir;
    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    cout<<"!!!!!!!!!!!!!!!!! imput nilai !!!!!!!!!!!!!!!!!!!!"<<endl;
    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    cout<<"Masukkan Nilai A = ";cin>>a;
    cout<<"Masukkan Nilai B = ";cin>>b;
    cout<<"Masukkan Nilai C = ";cin>>c;
    
    hasil1 = a + 4 < 10;
    hasil2 = b < a + 5;
    hasil3 = c - 3 >= 4;

    cout<< "######## program operasi OR ########"<<endl;
    cout<< "===================================="<<endl;
    cout<< "Hasil dari Hasil1 = a + 4 > 10 adalah "<<hasil1<<endl;
    cout<< "Hasil dari Hasil2 = b > a + 5 adalah "<<hasil2<<endl;
    cout<< "Hasil dari Hasil3 = c - 3 >= 4 adalah "<<hasil3<<endl;
    cout<< "Hasil dari Hasil Akhir = d || e || f adalah "<<hasilakhir<<endl;

    return 0;
    


}