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

int main(){
    compare l;
    int x, y;
    x = 10;
    y = 20;
    l.result(x, y);
    std::cout<<l.result(x,y)<<endl;
}