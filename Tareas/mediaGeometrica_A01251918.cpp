#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int base = 1;
  int x;
  float exponente = 1.0;
  float mediageo;
  int i = 0;
  while (x != 0) {
      cout << "Ingrese número ";
      cin >> x;
      if (x == 0) {
        break;
        }
      base = base * x;
      i = i + 1;    
  }
  exponente = exponente/i;
  mediageo = pow(base,exponente);
  cout<<"El resultado de sumar "    
    <<base<<" + "   
    <<i<<" + " 
    <<exponente 
    <<" es: " 
    <<mediageo
    <<endl;         
  return 0;
}