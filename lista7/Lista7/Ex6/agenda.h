#ifndef AGENDA
#define AGENDA

#include <iostream>
#include <string>
#include <vector>
#include "register.h"

using namespace std;

class Agenda {
    private:
    std::vector<Register*> _cadastros;
    int _num_cad;
    

    public:
    Agenda(int capacidade);
    ~Agenda();
    void insercao(Register *registro);
    Register* obtencaodecadastro(int posicao);
};

#endif