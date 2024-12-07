#include<iostream>
using namespace std;


class decreaser{
    public:
    void function(int v){
        for (int i = v; i > 0; i--) std::cout<< i<< endl;
    };
};

