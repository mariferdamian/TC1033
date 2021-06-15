#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float base = 0;
  float x;
  float exponente = 1.0;
  float mediaarmonica;
  int i = 0;
  while (x != 0) {
      cout << "Ingrese número ";
      cin >> x;
      if (x == 0) {
        break;
        }
      base = base + (1/x);
      i = i + 1;    
  }
  mediaarmonica = i/base ;
  cout<<mediaarmonica
    <<endl;         
  return 0;
}