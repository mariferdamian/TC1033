#include <iostream>
using namespace std;


class Box {
    public:
        int m_Size;
        string m_Color;
        int i;

    string Paint(){
        string color;
        string colors[3] = {"Red", "Green", "Blue"};
        color = colors[i]; 
        cin >> i;
        return color;        
    }
    int Set_Size(){
        int size;
        int sizes[3] = {5, 15, 20};
        size = sizes[i]; 
        cin >> i;
        return size;        
    }
    void myPrint(){
        cout << "Box " << i+1 << "\n" << m_Size << "\n" << m_Color << "\n" <<endl;
        cin >> i;
    };
};

class Table {
    public:
        int m_Size;
        string m_Color;
        int i;

    string Paint(){
        string color;
        string colors[3] = {"Red", "Green", "Blue"};
        color = colors[i]; 
        cin >> i;
        return color;        
    }
    int Set_Size(){
        int size;
        int sizes[2] = {20, 30};
        size = sizes[i]; 
        cin >> i;
        return size;        
    }
    void myPrint(){
        cout << "Table " << i+1 << "\n" << m_Size << "\n" << m_Color << "\n" <<endl;
        cin >> i;
    };
};

int main(){
    Box caja1;
    Box caja2;
    Box caja3;
    
    //caja 1
    caja1.i = 0;
    string color = caja1.Paint();
    caja1.m_Color = color;
    int size = caja1.Set_Size();
    caja1.m_Size = size;
    caja1.myPrint();

    //caja 2
    caja2.i = 1;
    string color2 = caja2.Paint();
    caja2.m_Color = color2;
    int size2 = caja2.Set_Size();
    caja2.m_Size = size2;
    caja2.myPrint();

    //caja 3
    caja3.i = 2;
    string color3 = caja3.Paint();
    caja3.m_Color = color3;
    int size3 = caja3.Set_Size();
    caja3.m_Size = size3;
    caja3.myPrint();

    Table mesa1;
    Table mesa2;

    //Mesa 1
    mesa1.i = 0;
    string tcolor = mesa1.Paint();
    mesa1.m_Color = tcolor;
    int tsize = mesa1.Set_Size();
    mesa1.m_Size = tsize;
    mesa1.myPrint();

    mesa2.i = 1;
    string tcolor2 = mesa2.Paint();
    mesa2.m_Color = tcolor2;
    int tsize2 = mesa2.Set_Size();
    mesa2.m_Size = tsize2;
    mesa2.myPrint();
    
    return 0;
}