#ifndef GETEXCEPTION
#define GETEXCEPTION
#ifndef INSERTEXCEPTION
#define INSERTEXCEPTION

#include <iostream>
#include <stdexcept>

using namespace std;


class GetException: public runtime_error{
    public:
        GetException()
        :runtime_error("Registro inexistente"){}
    
};

class InsertionException:public runtime_error{
    public:
        InsertionException()
        :runtime_error("Nome ja cadastrado"){}
};

#endif
#endif