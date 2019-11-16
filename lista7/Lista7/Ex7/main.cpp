#include <iostream>
#include "agenda.h"
#include <string>
#include "ProfessionalRegister.h"
#include "PersonalRegister.h"

using namespace std;

int main(){

   Agenda agenda;

    PersonalRegister *pers_1 = new PersonalRegister("Jorge", 17445236220, 22, "Avenida Sebastiao de Brito, 293", 34972624);
    agenda.insercao(pers_1);

    ProfessionalRegister *prof_1 = new ProfessionalRegister("Roberto", 18564594616, 25, "Programador Autonomo", "Computador");
    agenda.insercao(prof_1);

    PersonalRegister *pers_2 = new PersonalRegister("Geraldo", 16585375665, 52, "Avenida Jose Sarney, 65", 12664568);
    agenda.insercao(pers_2);
    
    Register *reg_1 = agenda.obtencaodecadastro("Geraldo");
    std::cout << reg_1->get_name() << '\n';
    std::cout << reg_1->get_cpf() << '\n';
    std::cout << reg_1->get_idade() << '\n';

    Register *reg_2 = agenda.obtencaodecadastro("Mario");
    std::cout << reg_2->get_name() << '\n';
    std::cout << reg_2->get_cpf() << '\n';
    std::cout << reg_2->get_idade() << '\n';

    delete pers_1;
    delete pers_2;
    delete prof_1;
}