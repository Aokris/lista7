#ifndef POUPANCA
#define POUPANCA

#include <iostream>

using namespace std;

class Poupanca{
    private:
        static float _taxa;
        float _saldo;
    
    public:
        Poupanca(float taxa, float saldo);
        float get_saldo();
        static float get_taxa();
        float jurosmensais();
        static void set_taxa(float newtax);
        void set_saldo(float jurosmensais); 


};

#endif