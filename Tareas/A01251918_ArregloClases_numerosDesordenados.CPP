#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream> 
#include <vector>
using namespace std;


int leeNumeros(vector <int> &vecN, int arregloN[]){
    string palabra;
    int i = 0;

    ifstream inf("numeros_desordenados.txt");

    if (!inf) {
        cerr << "Uh oh, numeros_desordenados.txt could not be opened for reading!" <<endl;
        exit(1);
    }
    
    while (inf>> palabra){
        arregloN[i]=stoi(palabra);
        i++;
        vecN.push_back(stoi(palabra));
    }
    inf.close(); 
    return i;
}

void ordenaNumeros(vector <int> &vecN, int arregloN[], int cont){
    sort(vecN.begin(), vecN.end());
    sort(arregloN,arregloN+cont);
    for (int i=0; i<cont;i++) {
        cout<< vecN[i]<<endl;
    }
    ofstream outputfile("numeros_desordenados.txt", ios::app);
    outputfile<<endl;
    for (int i=0; i<cont;i++) {
        outputfile<<vecN[i]<<" ";
    }
}


int main(){
    
    vector <int> Numeros;
    int arregloN[100];
    int n;
    n = leeNumeros(Numeros, arregloN);
    ordenaNumeros(Numeros, arregloN, n);

    return 0;
}