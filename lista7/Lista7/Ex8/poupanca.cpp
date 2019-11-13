#include <iostream>
#include "poupanca.h"

using namespace std;

Poupanca::Poupanca(float taxa, float saldo){
    _taxa = taxa;
    _saldo = saldo;
}

float Poupanca::jurosmensais(){
    float jurosmensais;
    jurosmensais = (_taxa*_saldo)/12;
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