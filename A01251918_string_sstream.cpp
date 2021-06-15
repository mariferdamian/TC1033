#include <iostream>
#include <string>
#include <sstream> // for stringstream for tokenizing
using namespace std;

int main(){
    // string nombre = "TEC de Monterrey CSN";
    string oneWord;
    string cadena;
    int contador = 0;

    stringstream ss;
    cadena = "Tec de Monterrey CSN";
    ss<<cadena;
    while (ss >> oneWord)
        cout <<oneWord << endl;
    
    ss.clear();
    cadena = "Hermosillo Mexico";
    ss<<cadena;
    while (ss >> oneWord)
        cout << oneWord << endl;

      cadena ="Primera parte,Segunda Parte";
    ss.clear();
    ss<<cadena;
    while (getline(ss, oneWord, ','))
        cout << oneWord << endl;
      cadena ="UNO parte,DOS Parte,TRES Parte";

    ss.clear();
    ss<<cadena;
    getline(ss, oneWord, ',');
    cout <<"1 "<< oneWord << endl;

    getline(ss, oneWord, ',');
    cout <<"2 "<< oneWord << endl;

    getline(ss, oneWord, ',');
    cout <<"3 "<< oneWord << endl;

    return 0;
}