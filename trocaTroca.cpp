#include<iostream>
using namespace std;

class trocaTrocaInt{
    public: 
    int a, b;
    string x, y;
    void  trocaTempInt(){
        int temp = a;
        a = b;
        b = temp; 
    }  
    void trocaSTempInt(){
        a = a + b;
        b = a - b;
        a = a - b;
    }
    void trocaTempStr(){
        string temp = x;
        x = y;
        y = temp;
    }
};
