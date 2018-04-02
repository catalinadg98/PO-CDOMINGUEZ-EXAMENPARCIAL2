//
// Created by Catalina Domínguez on 4/2/18.
//

#ifndef PO_CDOMINGUEZ_EXAMENPARCIAL2_PESO_H
#define PO_CDOMINGUEZ_EXAMENPARCIAL2_PESO_H
#include <iostream>

class Peso {

    friend Peso operator + (const Peso &p1, const Peso &p2);
    friend Peso operator - (const Peso &p1, const Peso &p2);
    friend bool operator < (const Peso &p1, const Peso &p2);
    friend bool operator > (const Peso &p1, const Peso &p2);
    friend bool operator <= (const Peso &p1, const Peso &p2);
    friend bool operator >= (const Peso &p1, const Peso &p2);
    friend bool operator == (const Peso &p1, const Peso &p2);
    friend bool operator != (const Peso &p1, const Peso &p2);

public:
    //Atributo
    double mxn;
    //Método to_String()
    std::string to_String();
    //Constructor
    Peso();
    Peso(double mxn);

    Peso(std::basic_ostream<char, std::char_traits<char>> ostream);
};


#endif //PO_CDOMINGUEZ_EXAMENPARCIAL2_PESO_H
