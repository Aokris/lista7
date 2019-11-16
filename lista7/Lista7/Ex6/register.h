#ifndef REGISTER
#define REGISTER

#include <iostream>
#include <string>

using namespace std;

class Register{
    private:
        string _name;
        int _cpf;
        int _idade;
    public:
        Register(string name,int cpf, int idade);
        virtual ~Register(){}
        virtual string get_name();
        virtual int get_cpf();
        virtual int get_idade();
};

#endif