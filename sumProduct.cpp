#include <iostream>
using namespace std;

class operation{
    public:
    void operations(){
        int b;
        long long a;
        a = 1; //Neutral elemente of product
        b = 0; //Neutral element of sum 
        for (int i = 1; i <= 30; i++){
            if (i % 2 == 0){ //If i is even 
                a *= i;
                std::cout<<"a: " << a<<endl;
                }
            else {
                b += i;
                std::cout<<"b: " << b<<endl;
                }
            }
        b-=1; //As i starts by 1, it need to subtract 1
/*         std::cout<<a<<endl;
        std::cout<<b<<endl; */
    }
};

