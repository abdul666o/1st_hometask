#include <iostream>
#include "Name.h"
#include "Sami.h"

using namespace std;

Sami::Sami(string n)
{
    name = n;
}

void Sami::setName(string n)
{
    name = n;
}

void Sami::Print() const
{
    cout << name << endl;
}
