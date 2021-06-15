#include <iostream>
using namespace std;

struct product {
    public:
        string fruta;
        int weight;
        double price;
};
/* void showProduct(product arrProduct[], int n){
    cout <<arrProduct<<endl;
    for (int i=0; i<3; i++) 
        cout << arrProduct[i].fruta<<" "<<arrProduct[i].weight<<" "<<arrProduct[i].price<<endl;
} */ 
int main(){  
    product apple, banana, melon;
    
    product arrP[3];

    apple.fruta = "APPLE";
    apple.weight = 5;
    apple.price = 10.50;

    banana.fruta = "BANANA";
    banana.weight = 6;
    banana.price = 11.50; 

    melon.fruta = "MELON";
    melon.weight = 7;
    melon.price = 12.50;  

    cout << apple.fruta<<" " << apple.weight<<" "<< apple.price<<endl;
    cout << banana.fruta<<" " << banana.weight<<" "<< banana.price<<endl;
    cout << melon.fruta<<" " << melon.weight<<" "<< melon.price<<endl;

    arrP[0]= apple;
    arrP[1]= banana;
    arrP[2]= melon;

   for (int i=0; i<3; i++) {
        cout << arrP[i].fruta<<" "<<arrP[i].weight<<" "<<arrP[i].price<<endl;
    }
      
    //showProduct(arrP,3);
    
    return 0;

    }