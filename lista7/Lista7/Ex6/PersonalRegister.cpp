#include <iostream>
#include <string>
#include "PersonalRegister.h"

using namespace std;

PersonalRegister::PersonalRegister(string name, int cpf, int idade, string endereco,int telefone):
    Register(name, cpf, idade), _endereco(endereco), _telefone(telefone) {}

string PersonalRegister::get_endereco(){
    return _endereco;
}

int PersonalRegister::get_telefone(){
    return _telefone;
}