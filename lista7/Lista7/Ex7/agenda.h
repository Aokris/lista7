#ifndef AGENDA
#define AGENDA

#include <iostream>
#include <string>
#include <map>
#include "register.h"

using namespace std;

class Agenda {
    private:
    map<string, Register*> _cadastro;

    public:
    void insercao(Register *regis);
    Register* obtencaodecadastro(string nome);
};

#endif