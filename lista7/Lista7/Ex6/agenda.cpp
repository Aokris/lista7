#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "agenda.h"

using namespace std;

Agenda::Agenda(int capacidade){
    _num_cad = 0;
    _capacidade.resize(capacidade);
}

Agenda::~Agenda(){
	_registro->clear();
}

void Agenda::insercao(Register *regis){
    
    try{
    if(_num_cad < _capacidade.size()){
        _registro->at(_num_cad) = *regis;
        _num_cad++;
    }

    }catch(exception& e){
        cout<<"ERRO: "<<e.what() << endl;
    }
}

Register Agenda::obtencaodecadastro(int posicao){//exceções: se posição for maior q o tamanho do vector ou negativa
    
    vector<Register>::iterator it;
    
    if(posicao > _capacidade.size()){
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
}
