#include "italianchef.h"

ItalianChef::ItalianChef(string nimi2) : Chef(nimi2)
{
    name = nimi2;
    cout <<"Chef " << name <<" konstruktori "<< endl;
}

ItalianChef::~ItalianChef()
{
    cout <<"Chef " << name <<" destruktori "<< endl;
}


void ItalianChef::makePasta()
{
    cout<<"Chef " << name <<" makes Pasta " << endl;
}

string ItalianChef::getName()
{
    return name;
}
