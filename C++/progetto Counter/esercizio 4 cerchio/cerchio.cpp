#include "cerchio.h"
#include <cmath>


cerchio::cerchio(){
    raggio = 1;
}
int cerchio::circonferenza(){
    return M_PI*2*raggio;
}
int cerchio::area(){
    return M_PI*(raggio*raggio);
}
void cerchio::setRaggio(int _raggio){
    raggio = _raggio;
}
int cerchio::getRaggio(){
    return raggio;
}