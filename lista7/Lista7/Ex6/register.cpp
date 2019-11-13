#include <iostream>
#include <string>
#include "register.h"

using namespace std;

Register::Register(string name, int cpf, int idade){
    _name = name;
    _cpf = cpf;
    _idade = idade;
}

string Register::get_name(){
    return _name;
}

int Register::get_cpf(){
    return _cpf;
}

int Register::get_idade(){
    return _idade;
}
