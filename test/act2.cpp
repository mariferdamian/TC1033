#include <iostream>
using namespace std;
int calculaSuma(int a, int b){
    int suma=a+b;return suma;
    }
int main(){    
    int x=5, y=10;    
    cout<<"El resultado de sumar "    
    <<x<<" + "    
    <<y<<" es: "    
    <<calculaSuma(x,y)    
    <<endl;    
    return 0;}