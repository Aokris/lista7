#include <iostream>
#include <string>
#include "ProfessionalRegister.h"

using namespace std;

ProfessionalRegister::ProfessionalRegister(string name, int cpf, int idade, string profissao, string area):
    Register(name, cpf, idade), _profissao(profissao), _area(area) {}

string ProfessionalRegister::get_profissao(){
    return _profissao;
}

string ProfessionalRegister::get_area(){
    return _area;
}
