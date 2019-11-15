#include <iostream>
#include "agenda.h"
#include <string>
#include "ProfessionalRegister.h"
#include "PersonalRegister.h"

using namespace std;

int main(){
    string name, profissao, area, endereco;
    int cpf, idade, telefone;

    name = "nome";
    profissao = "profissao";
    area = "area";
    endereco = "endereço";
    cpf = 122317;
    idade = 23;
    telefone = 984845626;

    Agenda agenda(2);

    ProfessionalRegister ProfessionalRegister( name, cpf, idade, profissao, area);
    PersonalRegister pessoal(name,cpf,idade, endereco,telefone);

    agenda.insercao(&ProfessionalRegister);
    agenda.insercao(&pessoal);
    
    PersonalRegister pessoal1(name,cpf,idade, endereco,telefone);
    agenda.insercao(&pessoal1);

    agenda.obtencaodecadastro(0);
    agenda.obtencaodecadastro(2);

    agenda.~Agenda();
}