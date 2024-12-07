#include<iostream>
#include <list>
using namespace std;

class compare{
public:
    int n1, n2;

    int result(int a, int b){
        if (a > b) return a;
        return b;
    }
};
