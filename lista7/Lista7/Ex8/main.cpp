#include <iostream>
#include "poupanca.h"

using namespace std;

int main(){
    
    Poupanca p1(0.003, 2000);
    Poupanca p2(0.003, 3000);


    float juros1 = p1.jurosmensais();
    float juros2 = p2.jurosmensais();

    p1.set_saldo(juros1);
    p2.set_saldo(juros2);

    cout<<p1.get_saldo<<endl;
    cout<<p2.get_saldo<<endl;

    Poupanca::set_taxa(0.004);
    

    float juros1 = p1.jurosmensais();
    float juros2 = p2.jurosmensais();

    p1.set_saldo(juros1);
    p2.set_saldo(juros2);

    cout<<p1.get_saldo<<endl;
    cout<<p2.get_saldo<<endl;
}