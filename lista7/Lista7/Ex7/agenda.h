#ifndef AGENDA
#define AGENDA

#include <iostream>
#include <string>
#include <map>
#include "register.h"

using namespace std;

class Agenda {
    private:
    map<Register,int> _cadastro;

    public:
    Agenda(map<Register, int> cadastro);
    ~Agenda();
    void insercao(Register regis);
    Register obtencaodecadastro(Register regis);
};

#endif