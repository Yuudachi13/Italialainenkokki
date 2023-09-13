#include "italianchef.h"

ItalianChef::ItalianChef(string nimi2, int litraa, int grammaa) : Chef(nimi2)
{
    name = nimi2;
    vesi = litraa;
    jauhot = grammaa;
    cout <<"Chef " << name <<" konstruktori "<< endl;
}

ItalianChef::~ItalianChef()
{
    cout <<"Chef " << name <<" destruktori "<< endl;
}


void ItalianChef::makePasta(int  , int  )
{

    cout<<"Chef " << name <<" makes Pasta with mama's special recippe " << endl;
    cout<<"Chef " << name <<" uses vesi = " << vesi << endl;
    cout<<"Chef " << name <<" uses jauhot = " << jauhot <<   endl;



}

string ItalianChef::getName()
{
    return name;
}
