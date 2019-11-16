#ifndef PERSONALREGISTER
#define PERSONALREGISTER

#include <iostream>
#include <string>
#include "register.h"

using namespace std;

class PersonalRegister : public Register{
    private:
        string _endereco;
        int _telefone;
    public:
        PersonalRegister(string name, int cpf, int idade, string endereco, int telefone);
        ~PersonalRegister(){}
        string get_endereco();
        int get_telefone();

};

#endif