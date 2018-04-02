//
// Created by Catalina Domínguez on 4/2/18.
//

#include "Peso.h"

Peso::Peso() {
    this->mxn = 0;
}

Peso::Peso(double mxn){
    this->mxn=mxn;
}

Peso operator + (const Peso &p1, const Peso &p2){
    Peso totalmxn;
    totalmxn = p1.mxn + p2.mxn;
    return totalmxn;
}

Peso operator - (const Peso &p1, const Peso &p2){
    Peso totalmxn;
    totalmxn = p1.mxn - p2.mxn;
    return totalmxn;
}

bool operator < (const Peso &p1, const Peso &p2){
    bool res = (p1 < p2);
    return res;
    //True
}

bool operator > (const Peso &p1, const Peso &p2){
    bool res = (p1 > p2);
    return res;
    //True
}

bool operator <= (const Peso &p1, const Peso &p2){
    bool res = (p1 <= p2);
    return res;
    //True
}

bool operator >= (const Peso &p1, const Peso &p2){
    bool res = (p1 >= p2);
    return res;
    //True
}

bool operator == (const Peso &p1, const Peso &p2){
    bool res = (p1 == p2);
    return res;
    //True
}

bool operator != (const Peso &p1, const Peso &p2){
    bool res = (p1 != p2);
    return res;
    //True
}

std::string Peso::to_String() {
    return "$" + std::to_string(mxn) + " MXN";
}
