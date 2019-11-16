#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "agenda.h"

using namespace std;

Agenda::Agenda(map<Register, int> cadastro){
    _cadastro = cadastro;
}

Agenda::~Agenda(){
	_cadastro.clear();
}

void Agenda::insercao(Register regis){
    
    try{

    _cadastro[regis]++;

    }catch(exception& e){
        cout<<"ERRO: "<<e.what() << endl;
    }
}

Register Agenda::obtencaodecadastro(Register regis){//exceções: se posição for maior q o tamanho do vector ou negativa
    
    map<Register,int>::iterator it;

    for(it = _cadastro.begin();it != _cadastro.end();it++){
        if(it->first == regis.get_name()){
            return it->first;
        }
    }
    throw invalid_argument("Erro: cadastro nao existente");
}