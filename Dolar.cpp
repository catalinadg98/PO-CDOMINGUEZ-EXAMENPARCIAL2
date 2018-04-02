//
// Created by Catalina Domínguez on 4/2/18.
//

#include "Dolar.h"

Dolar::Dolar() {
    this->dls = 0;
}

Dolar::Dolar(double dls){
    this->dls=dls;
}

Dolar operator + (const Dolar &n1, const Dolar &n2){
    Dolar totaldls;
    totaldls = n1.dls + n2.dls;
    return totaldls;
}

Dolar operator - (const Dolar &n1, const Dolar &n2){
    Dolar totaldls;
    totaldls = n1.dls - n2.dls;
    return totaldls;
}

bool operator < (const Dolar &n1, const Dolar &n2){
    bool res = (n1 < n2);
    return res;
    //True
}

bool operator > (const Dolar &n1, const Dolar &n2){
    bool res = (n1 > n2);
    return res;
    //True
}

bool operator <= (const Dolar &n1, const Dolar &n2){
    bool res = (n1 <= n2);
    return res;
    //True
}

bool operator >= (const Dolar &n1, const Dolar &n2){
    bool res = (n1 >= n2);
    return res;
    //True
}

bool operator == (const Dolar &n1, const Dolar &n2){
    bool res = (n1 == n2);
    return res;
    //True
}

bool operator != (const Dolar &n1, const Dolar &n2){
    bool res = (n1 != n2);
    return res;
    //True
}

std::string Dolar::to_String() {
    return "$" + std::to_string(dls) + " USD";
}