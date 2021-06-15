#include <iostream>
using namespace std;

//Maria Fernanda Damian
//A01251918
//22 nov 2020

class Box {
    public:
        double length;
        double breadth;
        double height;
    void myPrint(){
        cout<<"El volumen de esta caja es: "<<length*breadth*height<<endl;
    };
    double calculaVolumen(){
        return length*breadth*height;
    }
};


int main(){
    Box caja1;

    caja1.length = 5;
    caja1.breadth = 3;
    caja1.height = 3;
    caja1.myPrint();
    double volumen = caja1.calculaVolumen();
    cout<<volumen<<endl;
    return 0;
}