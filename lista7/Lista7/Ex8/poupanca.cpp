#include <iostream>
#include "poupanca.h"

using namespace std;

float Poupanca::_taxa;

Poupanca::Poupanca(float saldo){
    _saldo = saldo;
}

float Poupanca::jurosmensais(){
    float jurosmensais;
    jurosmensais = (_taxa * _saldo)/12;
    return jurosmensais;
}

void Poupanca::set_taxa(float newtax){
    _taxa = newtax;
}

void Poupanca:: set_saldo(float jurosmensais){
    _saldo = jurosmensais + _saldo;
}

float Poupanca::get_saldo(){
    return _saldo;
}

float Poupanca::get_taxa(){
    return _taxa;
}