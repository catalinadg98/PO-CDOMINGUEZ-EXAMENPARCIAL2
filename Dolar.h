//
// Created by Catalina Domínguez on 4/2/18.
//

#ifndef PO_CDOMINGUEZ_EXAMENPARCIAL2_DOLAR_H
#define PO_CDOMINGUEZ_EXAMENPARCIAL2_DOLAR_H
#include <iostream>

class Dolar {

    friend Dolar operator + (const Dolar &n1, const Dolar &n2);
    friend Dolar operator - (const Dolar &n1, const Dolar &n2);
    friend bool operator < (const Dolar &n1, const Dolar &n2);
    friend bool operator > (const Dolar &n1, const Dolar &n2);
    friend bool operator <= (const Dolar &n1, const Dolar &n2);
    friend bool operator >= (const Dolar &n1, const Dolar &n2);
    friend bool operator == (const Dolar &n1, const Dolar &n2);
    friend bool operator != (const Dolar &n1, const Dolar &n2);

public:
    //Atributo
    double dls;
    //Método to_String()
    std::string to_String();
    //Constructor
    Dolar();
    Dolar(double dls);


};


#endif //PO_CDOMINGUEZ_EXAMENPARCIAL2_DOLAR_H
