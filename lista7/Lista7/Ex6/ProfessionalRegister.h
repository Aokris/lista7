#ifndef PROFESSIONALREGISTER
#define PROFESSIONALREGISTER

#include <iostream>
#include <string>
#include "register.h"

using namespace std;

class ProfessionalRegister : public Register{
    private:
        string _profissao;
        string _area;
    public:
        ProfessionalRegister(string name, int cpf, int idade, string profissao, string area);
        ~ProfessionalRegister(){}
        string get_profissao();
        string get_area();
};

#endif