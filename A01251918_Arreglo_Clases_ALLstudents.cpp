#include <iostream>
#include <string>
#include <fstream>
#include <sstream> // for stringstream for tokenizing
using namespace std;

class Student {
    private:
        string nombre;
        string matricula;
        string equipo;
    public:
        void setDatos(string n, string m, string e){
            nombre = n;
            matricula = m;
            equipo = e;
        }
        string getNombre(){return nombre;}
        string getMatricula(){return matricula;}
        string getEquipo(){return equipo;}
    
};

int readArchivoStudent(Student arr[]){
    string lineaFile;
    stringstream ss;
    string nombre, matricula, equipo; 
    int i = 0;

    ifstream inf("16_1_22_students.csv");

    if (!inf) {
        cerr << "Uh oh, Students.csv could not be opened for reading!" <<endl;
        exit(1);
    }
    getline (inf, lineaFile); //skip first line

    while (getline (inf, lineaFile)){
        ss.clear();
        ss << lineaFile;

        getline(ss, nombre, ',');
        getline(ss, matricula, ',');
        getline(ss, equipo, ',');


        arr[i].setDatos(nombre, matricula, equipo);
        i = i + 1;
    }
    return i;


};

int main(){
    int contador;
    Student arr[50];
    contador = readArchivoStudent(arr);

    cout<< "Nombre" <<"\t"<<"Matricula"<<"\t"<<"Equipo"<<endl;
    for (int i=0; i<contador;i++){
        cout <<arr[i].getNombre()<<"\t"
        <<arr[i].getMatricula()<<"\t" 
        <<arr[i].getEquipo()<<endl;
    }

    return 0;
}