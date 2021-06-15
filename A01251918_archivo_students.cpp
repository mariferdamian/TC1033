#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Student {
    public:
        string nombre;
        string matricula;
        string equipo;
};


int main(){
    std::string strInput;
     ifstream inputfile("16_1_22_students.csv");
    if (!inputfile) {
        cerr << "Uh oh, Students.csv could not be opened for reading!" <<endl;
        exit(1);
    }
    while (inputfile){
        getline(inputfile, strInput);
        cout << strInput <<endl;
    }

    inputfile.close();

    strInput="Abraham Aldaco,Al525538,blue";
    ofstream outf ("16_1_22_students.csv", ios::app);
    outf <<strInput <<endl;
    outf.close();
    return 0;

}