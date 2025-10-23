#include "Counter.h"
#include <iostream>

using namespace std;

int main(){

    Counter c1,c2;
    
    cout << "Contatore 1: "<< c1.getValue() <<"\n";
    cout << "Contatore 2: "<< c2.getValue() <<"\n";

    c1.increase(7);

    cout << "Contatore 1: "<< c1.getValue() <<"\n";
    cout << "Contatore 2: "<< c2.getValue() <<"\n";

    return 0;
}