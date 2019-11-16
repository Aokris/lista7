#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "agenda.h"

using namespace std;

Agenda::Agenda(int capacidade){
        _num_cad = 0;
        _cadastros.resize(capacidade);
}

Agenda::~Agenda(){
	_cadastros.clear();
}

void Agenda::insercao(Register *regis){
    
    try{
        if(_num_cad == _cadastros.size()){
            throw("Sem espaço disponivel na Agenda");
            }else{
            _cadastros.at(_num_cad) = regis;
            _num_cad++;
        }

    }catch(exception& e){
        cout<<"ERRO: "<<e.what() << endl;
    }
}

Register* Agenda::obtencaodecadastro(int posicao){//exceções: se posição for maior q o tamanho do vector ou negativa

        Register *regis;
        
        try {
            regis = _cadastros.at(posicao);
        } catch (exception& e) {
            cout << e.what() << endl;
        }

        return regis;
    }
