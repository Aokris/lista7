#ifndef AGENDA
#define AGENDA

#include <iostream>
#include <string>
#include <vector>
#include "register.h"

using namespace std;

class Agenda {
    private:
    vector<Register> *_registro;
    vector<int> _capacidade;
    int _num_cad;

    public:
    Agenda(int capacidade);
    ~Agenda();
    void insercao(Register *registro);
    Register obtencaodecadastro(int posicao);
};

#endif