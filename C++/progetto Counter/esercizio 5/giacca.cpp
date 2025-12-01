#include "giacca.h"
#include <iostream>

using namespace std;

giacca::giacca(){
    taglia = 50;
    percentuale = 100;
}
void giacca::setTaglia(int _taglia){
    if(_taglia >= 30 && _taglia <= 60){
        taglia = _taglia;
    }
    else{
        cout << "errore";
    }
}
void giacca::setPercentuale(int _percentuale){
    if(_percentuale >= 0 && _percentuale <= 100){
        percentuale = _percentuale;
    }
    else{
        cout << "errore";
    }
}
int giacca::getPercentuale(){
    return percentuale;
}
int giacca::getTaglia(){
    return taglia;
}
int giacca::apri(int _percentuale){
    return setPercentuale(getPercentuale()+_percentuale);
}
int giacca::chiudi(int _percentuale){
    setPercentuale(getPercentuale()-_percentuale);
}
int giacca::apriTot(){
    setPercentuale(100);
}
int giacca::chiudiTot(){
    setPercentuale(0);
}