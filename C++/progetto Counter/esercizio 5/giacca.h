#ifndef GIACCA_H
#define GIACCA_H

class giacca{

    private:
        int taglia;
        int percentuale;

    public:
        giacca();
        void setTaglia(int _taglia);
        void setPercentuale(int _percentuale);
        int getPercentuale();
        int getTaglia();
        int apri();
        int chiudi();
        int apriTot();
        int chiudiTot();

};
#endif