#include <iostream>
using namespace std;
class FlixNet {
public:
    string tipo;  // pelicula | serie
    double duracion;   // duracion en minutos
    int clasificacion; // 1-Family, 2-Adults, 3-NoSe
};

/* 
assume que la siguiente función te regresa el tipo, duracion y classificacion

t, d, c = PELICULAS(){ .... }

una pelicula a la vez,
de una lista de 100 películas que se encuentran contenidas en un archivo
*/


int main(){
    FlixNet s1;
    s1.PELICULAS("pelicula","120","1");
   
    FlixNet arrM[100];
    

    for (int i=0; i<sizeof(arrM)/sizeof(arrM[0]);i++) {
       arrM[i] = PELICULAS(t,c,d)<<endl;
    }
    return 0;


}
int main(){
    int contador;
    FlixNet arr[50];
    contador = PELICULAS(arr);

    cout<< "Tipo" <<"\t"<<"Duracion"<<"\t"<<"Classificacion"<<endl;
    for (int i=0; i<contador;i++){
        cout <<arr[i].getNombre()<<"\t"
        <<arr[i].getMatricula()<<"\t" 
        <<arr[i].getEquipo()<<endl;
    }
    FlixNet movies;    
    FlixNet arrP[100];    
    
    for(int i = 0; i < sizeof(arrM)/sizeof(arrM[0]); i++){        
        arrM[i] = PELICULAS(t, c, d);
        return 0;
    }