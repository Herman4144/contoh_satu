#include <iostream> // perepustakaan 
using namespace std; // untuk mempersingkat kodingan 
int main() // pungsi utama dalam program 
{ 
int a,b;
a=10; // karna a yg di exsekusi lebih awal 
b=4;
b=a;
a=b;
cout<<"a = " <<a<<endl;
cout<<"b = "<<b<<endl;

}