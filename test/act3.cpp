#include <iostream>
using namespace std;

void swap(int x, int y);    // function declaration
void swap(int x, int y) {   // function definition   
int temp;   temp = x;  /* save the value of x */   
x = y;     /* put y into x */   
y = temp;  /* put x into y */    
 return;}
 int main (){int a = 100;         // local variable declaration
 int b = 200;cout << "Before swap, value of a :" << a << endl;
 cout << "Before swap, value of b :" << b << endl;
 swap(a, b); // calling a function to swap the values.
 cout << "After swap, value of a :" << a << endl;
 cout << "After swap, value of b :" << b << endl;
 return 0; }
