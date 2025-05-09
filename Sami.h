#include <iostream>
#include "Name.h"
using namespace std;

class Sami: public Name
{
    public:
        Sami(string = "Sami");
        virtual void setName(string);
        void Print() const;

    private:
        string name;
};
