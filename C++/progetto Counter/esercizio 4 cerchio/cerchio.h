#ifndef CERCHIO_H
#define CERCHIO_H

class cerchio{

    private:
        int raggio;

    public:
        cerchio();
        int circonferenza();
        int area();
        void setRaggio(int _raggio);
        int getRaggio();
};
#endif