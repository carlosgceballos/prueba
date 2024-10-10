#include <iostream>

using namespace std;

int main(){
  cout << "Ingresa tu nombre: ";
  string c;
  cin >> c;
  cout << "Hola "<<c<<endl;
  int a = 0;
  int b = 1;
  cin >> a;
  cin >> b;
  cout << "Tu edad mas 1 es:" << a+b<< endl;

  return 0;
}