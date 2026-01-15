#include <iostream>

using namespace std;

class PowerDevice{
    public: 
        PowerDevice(int n){
            cout<<"PowerDevice:"<<n<<endl;
        }
};
class Scanner : public virtual PowerDevice{
    public:
        Scanner(int s, int n) : PowerDevice(n){
            cout<<"Scanner: "<<s<<endl;
        }
};
class Printer : public virtual PowerDevice{
    public:
        Printer(int q, int n) : PowerDevice(n){
            cout<<"Printer: "<<q<<endl;
        }
};
class Copier : public Scanner, public Printer{
    public:
        Copier(int n, int s, int p) : Scanner(s,n), Printer(p,n), PowerDevice(n){
        }
};


int main(){
    Copier (3,1,2);

    return 0;
}