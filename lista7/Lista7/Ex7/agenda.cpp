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

/*Register Agenda::obtencaodecadastro(int posicao){//exceções: se posição for maior q o tamanho do vector ou negativa
    
    vector<Register>::iterator it;
    
    if(posicao > _num){
        throw overflow_error("Erro: impossivel encontrar o cadastro");
    }

    if(posicao < 0){
        throw invalid_argument("Erro: cadastro nao existente");
    }
    
    it = _registro->begin();
    for(int i = 0; i < posicao; i++){
        it++;
    }
    return *it;
}*/
