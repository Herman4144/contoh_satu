#include <iostream>
using namespace std; 
int main()
{
   int nilai, predikat;
 
  cout << "Input Nilai Anda (0 - 100): ";
  cin >> nilai;
 
  if (nilai >= 90 ) 
  {
    cout << "MAKA PREDIKAT A" << endl;
  }
  else if (nilai >= 90 && nilai < 100) 
  {
    cout << "MAKA PREDIKAT B" << endl;
  }
  else if (nilai >= 80 && nilai < 90) 
  {
    cout << "MAKA PREDIKAT C" << endl;
  }
  else if (nilai >= 70 && nilai <80)
  {
    cout << "MAKA PREDIKAT D" << endl;;
  }
  else if (nilai >= 50 && nilai < 90) 
  {
    cout << "MAKA PREDIKAT E" << endl;
  }
  else 
  {
    cout << "Maaf, format nilai tidak sesuai" << endl;
  }
  
    return 0;
}
