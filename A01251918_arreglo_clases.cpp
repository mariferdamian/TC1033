#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Student {
    private:
        string nombre;
        string matricula;
        string equipo;
    public:
        string getNombre(){
            return nombre;
        }
        string getMatricula(){
            return matricula;
        }
        string getEquipo(){
            return equipo;
        }
        void putDatos(string n, string m, string e){
            nombre = n;
            matricula = m;
            equipo = e;
        }
};
int main(){
    Student s1, s2, s3;
    s1.putDatos("Beltran Acosta Hilda Olivia","A01251916","blue");
    s2.putDatos("Aguirre Gomez del Campo Santiago","A01253681","red");
    s3.putDatos("Ibarra Vasquez Maria Carelia","A01251463","green");

    Student arrSt[3];
    arrSt[0] = s1;
    arrSt[1] = s2;
    arrSt[2] = s3;

    for (int i=0; i<sizeof(arrSt)/sizeof(arrSt[0]);i++) {
        cout <<arrSt[i].getNombre()<<"\n"<<arrSt[i].getMatricula()<<"\n"<<arrSt[i].getEquipo()<<endl;
    }
    return 0;

}