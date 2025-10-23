#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class rettangolo{

    private:
        int base;
        int altezza;

    public:
        rettangolo();
        int perimetro();
        int area();
        void setBase(int _base);
        void setAltezza(int _altezza);
        int getBase();
        int getAltezza();
};
#endif