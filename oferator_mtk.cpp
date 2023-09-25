#include <iostream>
using namespace std;
int main(){
  char operator;
  double nilai1, nilai2, nilai3;

  cout<<("Pilih operator matematika >>> (+, -, *, / ): ");
  cin>>operator;

  cout<<"Masukan operator anda: ";
  cin>>nilai1;

  switch(operator);
   {
        case '+' :
        hasil = angka1 + angka2;
        cout<<("Hasil penjumlahan dari ");
        cout<<("%.1lf + %.1lf = %.1lf\n", angka1, angka2, hasil);
        break;
        case '-' :
        hasil = angka1 - angka2;
        cout<<("Hasil pengurangan dari ");
        cout<<("%.1lf - %.1lf = %.1lf\n", angka1, angka2, hasil); 
        break;
        case '*' :
        hasil = angka1 * angka2;
        cout<<("Hasil perkalian dari ");
        cout<<("%.1lf * %.1lf = %.1lf\n", angka1, angka2, hasil);
        break;
        case '/' :
        hasil = angka1 / angka2;
        cout<<("Hasil pembagian dari ");
        cout<<("%.1lf / %.1lf = %.1lf\n", angka1, angka2, hasil);
        break;
        default:
        cout<<("Maaf, operator tidak tersedia atau salah, silahkan coba lagi ya.");
        break;
    }

            return 0;
}

