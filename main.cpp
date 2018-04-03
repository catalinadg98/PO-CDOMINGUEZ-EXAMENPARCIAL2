#include <iostream>
#include "Peso.h"
#include "Dolar.h"

int main() {
    Peso m1 (100);
    Peso m2 (250.50);
    Dolar d1 (17.25);
    Dolar d2 (9.25);

    bool condicion;

    Peso sumap = m1 + m2;
    //Peso restap = m1 - m2;
    Dolar sumad = d1 + d2;
    //Dolar sumapd = m1 + d2;
    Dolar sumadp = d1 + m2;
    //Pesp sumadp2 = d1 + m2;
    Peso sumapd2 = m1 + d2;

    std::cout<<"Cantidad 1 en pesos: " << m1.to_String()<<"\n";
    std::cout<<"Cantidad 2 en pesos: " << m2.to_String()<<"\n";
    std::cout<<"\n";
    std::cout<<"Cantidad 1 en dólares: " << d1.to_String()<<"\n";
    std::cout<<"Cantidad 2 en dólares: " << d2.to_String()<<"\n";
    std::cout<<"\n";
    std::cout<<"Suma de cantidades en pesos: " <<sumap.to_String()<<"\n";
    std::cout<<"\n";
    std::cout<<"Suma de cantidades en dólares: " <<sumad.to_String()<<"\n";
    std::cout<<"\n";
    //std::cout<<"Suma en dólares de peso#1 a dólares#2: " <<sumapd.to_String()<<"\n";
    //std::cout<<"\n";
    std::cout<<"Suma en dólares de de dólar#1 y peso#2: " <<sumadp.to_String()<<"\n";
    std::cout<<"\n";
    //std::cout<<"Suma en pesos de dólares#1 y peso#2: " <<sumad.to_String()<<"\n";
    //std::cout<<"\n";
    std::cout<<"Suma en pesos de peso#1 y dólares#2: " <<sumapd2.to_String()<<"\n";
    std::cout<<"\n";
    /*std::cout<<"El total de pesos es menor que el total de dólares? ";
    if (sumap < sumad){
        bool condicion = true;
        std::cout<<"Sí"<<"\n";
    } else {
        std::cout<<"No"<<"\n";
    }
    std::cout<<"El total de pesos es mayor que el total de dólares? ";
    if (sumap > sumad){
        bool condicion = true;
        std::cout<<"Sí"<<"\n";
    } else {
        std::cout<<"No"<<"\n";
    }
    std::cout<<"El total de pesos es menor o igual que el total de dólares? ";
    if (sumap <= sumad){
        bool condicion = true;
        std::cout<<"Sí"<<"\n";
    } else {
        std::cout<<"No"<<"\n";
    }
    std::cout<<"El total de pesos es mayor o igual que el total de dólares? ";
    if (sumap >= sumad){
        bool condicion = true;
        std::cout<<"Sí"<<"\n";
    } else {
        std::cout<<"No"<<"\n";
    }
    std::cout<<"El total de pesos es igual que el total de dólares? ";
    if (sumap == sumad){
        bool condicion = true;
        std::cout<<"Sí"<<"\n";
    } else {
        std::cout<<"No"<<"\n";
    }
    std::cout<<"El total de pesos es diferente que el total de dólares? ";
    if (sumap != sumad){
        bool condicion = true;
        std::cout<<"Sí"<<"\n";
    } else {
        std::cout<<"No"<<"\n";
    }*/

}
