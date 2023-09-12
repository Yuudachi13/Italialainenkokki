#include "italianchef.h"


int main()
{
    Chef kokkiolio("Gordon Ramsay");
    kokkiolio.makeSoup();
    kokkiolio.makeSalad();

    ItalianChef itakokkiolio("Anthony Bourdain");
    itakokkiolio.makeSoup();
    itakokkiolio.makeSalad();

    return 0;
}
