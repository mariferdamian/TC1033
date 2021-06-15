/*#include <iostream>
using namespace std;
int g = 200;

int show(int&p){
  p = p +10;
  cout<<"In show: "<<p<<endl;
  cout<<"In show: "<<&p<<endl;
  cout<<"In show G: "<<g<<endl;
  return 0;
}

int main() {
  int x = 5;
  cout << "Valor x es: "<< x << endl;
  cout << "Valor x es: "<< &x << endl;
  cout << "Valor G es: "<< g << endl;
  show(x);
  cout << "Valor otra vez: "<<x<<endl;
  return 0;
}*/
#include <iostream>
using namespace std;
int g = 200;

int main() {

  int ar[5] = {1,2,3,4,5};
  int matriz[3][4];

  for (int i=0; i<sizeof(ar)/sizeof(ar[0]);i++)
  cout << "Valor: "<< ar[i] << endl;
  
  for (int n=0; n<3; n++) {
    for (int m=0; m<4; m++)
      matriz[n][m]= n*m;
  }
  for (int n=0; n<3; n++) {
    for (int m=0; m<4; m++)
      cout << matriz[n][m]<<" ";
    cout << endl;
  }

}