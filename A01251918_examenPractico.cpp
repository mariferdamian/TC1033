#include <iostream>
#include <string>
#include <fstream>
#include <sstream>// for stringstream for tokenizing

using namespace std;

class Ciudad {
    private:
        string ciudad;
        int coordenadaX;
        int coordenadaY;
        int xo;
        int yo;
    public:
        void setDatos(string c, int x, int y){
            ciudad = c;
            coordenadaX = x;
            coordenadaY = y;
        }
        string getCiudad(){return ciudad;}
        int getX(){return coordenadaX;}
        int getY(){return coordenadaY;}
    
};

int leeArchivo(Ciudad arr[]){
    string palabra;
    string lineaFile;
    stringstream ss;
    string ciudad;
    string coordenadaX;
    string coordenadaY;
    int i = 0;
    

    ifstream inf("ciudadesDeRumania.csv");

    if (!inf) {
        cerr << "Uh oh, ciudadesDeRumania.csv could not be opened for reading!" <<endl;
        exit(1);
    }
    getline (inf, lineaFile); //skip first line
    
    

    while (getline (inf, lineaFile)){
        ss.clear();
        ss << lineaFile;
        
        

        getline(ss, ciudad, ',');
        getline(ss, coordenadaX, ',');
        getline(ss, coordenadaY, ',');
        

    
        arr[i].setDatos(ciudad, stoi(coordenadaX), stoi(coordenadaY));
        i = i + 1;
    }
    return i;
};

string ciudadMasCercana(int x0, int y0, Ciudad arr[]){
    float minDistancia = 87593842847848;
    string ciudadCercana;
    for (int i=0; i<8;i++){
        float distancia = pow((arr[i].getX()-x0),2)+ pow((arr[i].getY()-y0),2);
        if (distancia<minDistancia){
            minDistancia = distancia;
            ciudadCercana = arr[i].getCiudad();
        }
    }  
    return ciudadCercana;  
}

int main(){
    int contador;
    int x0;
    int y0;
    string ciudadCercana;
    Ciudad arr[8];
    contador = leeArchivo(arr);
    cout << "Ingresa coordenada x "; 
    cin >> x0; 
    cout << "Ingresa coordenada y "; 
    cin >> y0; 

    ciudadCercana = ciudadMasCercana(x0, y0, arr);
    cout<<"La ciudad más cercana es: "<<ciudadCercana<<endl;
/* Imprimir la tablita de ciudades
    cout<< "Ciudad" <<"\t"<<"X"<<"\t"<<"y"<<endl;
    for (int i=0; i<contador;i++){
        cout <<arr[i].getCiudad()<<"\t"
        <<arr[i].getX()<<"\t" 
        <<arr[i].getY()<<endl;
    }
*/
    return 0;
}