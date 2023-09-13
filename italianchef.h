#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"


class ItalianChef:public Chef
{
public:
    ItalianChef(string,int,int);

    ~ItalianChef();
    void makePasta(int,int);


    string getName();

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
