#include <iostream>
#include <string>
#include <vector>
#include "agenda.h"

using namespace std;

Agenda::Agenda(vector<Register> *registro, int num){
    _registro = registro;
    _num = 0;
}

Agenda::~Agenda(){
	_registro->clear();
}

void Agenda::insercao(Register *regis){
    _num++;
    _registro->push_back(*regis);
}

Register Agenda::obtencaodecadastro(int posicao){//exceções: se posição for maior q o tamanho do vector ou negativa
    vector<Register>::iterator it;
    it = _registro->begin();
    for(int i = 1; i < posicao; i++){
        it++;
    }
    return *it;
}
