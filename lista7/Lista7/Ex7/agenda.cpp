#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "agenda.h"
#include "exceptions.h"

using namespace std;

void Agenda::insercao(Register *regis){
    map<string, Register*>::iterator it;
    try{        
        if (_cadastro.find(regis->get_name()) == _cadastro.end()){
            _cadastro.insert(pair<string, Register*>(regis->get_name(), regis));
        }else 
            throw InsertionException();        
    }catch(InsertionException& e){
        cout<<"ERRO: "<<e.what() << endl;
    }
}

Register* Agenda::obtencaodecadastro(string nome){//exceções: se posição for maior q o tamanho do vector ou negativa
    
        Register *regis;
        
        try {
            if (_cadastro.find(regis->get_name()) == _cadastro.end())
                throw GetException();
            else 
                _cadastro.insert(pair<string, Register*>(regis->get_name(), regis));
        } catch (GetException& e) {
            cout << e.what() << endl;
        }

        return regis;
}