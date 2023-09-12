#include "italianchef.h"


int main()
{
    Chef kokkiolio("Jyrki");
    ItalianChef itakokkiolio("Mario");

    kokkiolio.makeSalad();
    itakokkiolio.makePasta();
    kokkiolio.makeSoup();


  //  cout<<"Italia kokin nimi on "<< itakokkiolio.getName()<<endl;
    // palauttaa kokin nimensyysta etta toisesta? mihin tata tarvittiin?

    return 0;
}
