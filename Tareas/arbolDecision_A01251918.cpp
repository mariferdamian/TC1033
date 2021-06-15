#include <iostream>
using namespace std;


int main() {
  int ingreso;
  string empleo;
  string respuesta;
  cout << "¿Ingreso? ";
  cin >> ingreso;
  cout << "¿Tiene empleo? ";
  cin >> empleo;
  if (ingreso>=500 && ingreso<=3000){
        if (empleo == "si"){
            respuesta = "SI ES SUJETO DE CREDITO";
        }
        else {
            respuesta = "NO ES SUJETO DE CREDITO";
        }
    }
    else {
       respuesta = "NO ES SUJETO DE CREDITO"; 
    }   
    cout<<respuesta
    <<endl;       
    return 0;
}
