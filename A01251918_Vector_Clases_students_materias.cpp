/*
María Fernanda Damian
A01251918
26 de Noviembre de 2020
Curso: TC1033 Pensamiento computacional orientado a objetos
*/
#include <iostream>
#include <string>
#include <sstream> // for stringstream for tokenizing
#include <fstream>  // file
#include <vector>
using namespace std;

class Student{
private:
    string Nombre;
    string Matricula;
    string Equipo;

public:
    void Set_Datos(string n, string m, string e){
        Nombre= n;
        Matricula= m;
        Equipo= e;
    }    
    string Get_Nombre(){return Nombre;}
    string Get_Matricula(){return Matricula;}
    string Get_Equipo(){return Equipo;}
};

class Materia{
private:
    string clave;
    string descripcion;
    string horario;

public:
    void Set_Datos(string c, string d, string h){
        clave= c;
        descripcion= d;
        horario= h;
    }    
    string Get_clave(){return clave;}
    string Get_descripcion(){return descripcion;}
    string Get_horario(){return horario;}
};

class MateriaCursando{
private:
    string matricula;
    string clave;
   
    
public:
    void Set_Datos(string m, string c){
        matricula= m;
        clave= c;  
    }
    
    string Get_matricula(){return matricula;}    
    string Get_clave(){return clave;}
};


int leeArchivoStudent(vector <Student> &vecS){
    string lineaFile;
    string nombre, matricula, equipo;
    stringstream ss;
    int i=0;

    Student st;
    ifstream inputFile("16_1_22_students.csv");


    if (!inputFile)    
    { // if not able to read the file        
    cerr << "Uh oh, students.csv could not be opened for reading!" << endl;        
    exit(1);    
    }

    //skipping first line
    getline(inputFile, lineaFile);

    while (getline(inputFile, lineaFile)){
        ss.clear();
        ss<<lineaFile;
        getline(ss,nombre, ',');
        getline(ss,matricula, ',');
        getline(ss,equipo, ',');
        st.Set_Datos(nombre,matricula,equipo);

        vecS.push_back(st);

        i=i+1;
    }

    return i;
}

int leeArchivoMateria(vector <Materia> &vecM){
    string lineaFile;
    string clave, descripcion, horario;
    stringstream ss;
    int i=0;

    Materia st;
    ifstream inputFile("16_2_42_materias.csv");


    if (!inputFile)    
    { // if not able to read the file        
    cerr << "Uh oh, 16_2_42_materias.csv could not be opened for reading!" << endl;        
    exit(1);    
    }

    //skipping first line
    getline(inputFile, lineaFile);

    while (getline(inputFile, lineaFile)){
        ss.clear();
        ss<<lineaFile;

        getline(ss,clave, ',');
        getline(ss,descripcion, ',');
        getline(ss,horario, ',');

        st.Set_Datos(clave,descripcion,horario);

        vecM.push_back(st);

        i=i+1;
    }

    return i;
}

int leeArchivoMateriaCursando(vector <MateriaCursando> &vecMC){
    string lineaFile;
    string matricula,clave;
    stringstream ss;
    int i=0;

    MateriaCursando st;
    ifstream inputFile("16_2_43_materias_cursando.csv");


    if (!inputFile)    
    { // if not able to read the file        
    cerr << "Uh oh, 16_2_43_materias_cursando.csv could not be opened for reading!" << endl;        
    exit(1);    
    }

    //skipping first line
    getline(inputFile, lineaFile);

    while (getline(inputFile, lineaFile)){
        ss.clear();
        ss<<lineaFile;
        getline(ss,matricula, ',');
        getline(ss,clave, ',');
       
   
        st.Set_Datos(matricula, clave);

        vecMC.push_back(st);

        i=i+1;
    }

    return i;
}

void Kardex(vector <Student> &vecS,
vector <Materia> &vecM,
vector <MateriaCursando> &vecMC,
int contador,int contador1, int contador2){
     
    for(int i=0;i<contador;i++){
        cout<<vecS[i].Get_Matricula()<<" "
        <<vecS[i].Get_Nombre()<<endl;
        for(int j=0;j<contador2; j++){
            if (vecS[i].Get_Matricula()==vecMC[j].Get_matricula()){
                
                for( int k=0; k<contador1; k++){
                    if (vecMC[j].Get_clave()==vecM[k].Get_clave())
                    cout<<"\t"<<vecMC[j].Get_clave()<<" "
                    <<vecM[k].Get_descripcion()<<endl;
                }
            }

        }
    }


}

int main(){
    int contador;
    int contador1;
    int contador2;
    vector<Student>myvectorStudent;
    vector<Materia>myvectorMateria;
    vector<MateriaCursando>myvectorMateriaCursando;

    contador= leeArchivoStudent(myvectorStudent);
    contador1= leeArchivoMateria(myvectorMateria);
    contador2= leeArchivoMateriaCursando(myvectorMateriaCursando);
    Kardex(myvectorStudent,myvectorMateria, myvectorMateriaCursando,contador,contador1,contador2);

    return 0;
}