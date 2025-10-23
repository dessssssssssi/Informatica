#include "rettangolo.h"

using namespace std;

rettangolo::rettangolo(){
    base = 1;
    altezza = 2;
}
int rettangolo::perimetro(){
    return (base+altezza)*2;
}
int rettangolo:: area(){
    return base*altezza;
}
void rettangolo::setBase(int _base){
    base = _base;
}
void rettangolo::setAltezza(int _altezza){
    altezza = _altezza;
}
int rettangolo::getBase(){
    return base;
}
int rettangolo::getAltezza(){
    return altezza;
}