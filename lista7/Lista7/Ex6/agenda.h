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
    int _num;

    public:
    Agenda(vector<Register> *registro, int num);
    ~Agenda();
    Agenda(int capacidade);
    void insercao(Register *registro);
    Register obtencaodecadastro(int posicao);
};

#endif