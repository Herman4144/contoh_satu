#include <iostream>
using namespace std;
int main()
{ 
  int uang, harga, kembalian;
  cout<<"nominal uang :";
  cin>>uang;
  cout<<"harga barang:";
  cin>>harga;
  if (uang > harga)
  {
    kembalian = uang - harga;
    cout <<"kembalian = "<<kembalian;
  }
  else
  {
    cout << "terimakasih sudah belanja";
  }   
}
