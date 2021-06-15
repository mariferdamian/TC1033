#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream> 
using namespace std;

class Articulo {
    private:
        int clave;
        string descripcion;
    public:
    void setInfo(int cve, string desc){
        clave = cve;
        descripcion = desc;
    }
    int getClave(){ return clave;}
    string getDescripcion(){return descripcion;}
};

int main(){
    Articulo a1;
    a1.setInfo(100, "Escritorio grande");

    Articulo a2;
    a2.setInfo(150, "Silla grande");

    Articulo a3;
    a3.setInfo(200, "Borrador grande");

    vector <Articulo> VectorArticulos;

    VectorArticulos.push_back(a1);

    for (int i=0; i<VectorArticulos.size(); i++)
        cout <<VectorArticulos[i].getClave()<<" "<<VectorArticulos[i].getDescripcion()<<endl;


    return 0;
}