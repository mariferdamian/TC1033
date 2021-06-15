#include <iostream>
//Hola mundo
int areatriangulo() {
  float base;
  float altura;
  float area;
  std::cout << "Ingresa base ";
  std::cin >> base;
  std::cout << "Ingresa altura ";
  std::cin >> altura;
  area = base * altura;
  std::cout << "El área de tu triángulo es: "<< area;
}
