#include <iostream>
using namespace std;


int main() {
  int suma = 0;
  int x;
  float promedio;
  int i = 0;
  while (x != 0) {
      cout << "Ingrese número ";
      cin >> x;
      suma = suma + x;
      i = i + 1; 
      
  }
  i = i - 1;
  promedio = suma/i;
  cout<<promedio
  <<endl;        
  return 0;
}