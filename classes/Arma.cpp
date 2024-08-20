#include <iostream>
#include "../headers/Arma.h"

float Arma::getDano() {
    return dano;
}

void Arma::setDano(float dano) {
    this->dano = dano;
}

float Arma::getAlcance() {
    return alcance;
}

void Arma::setAlcance(float alcance){
    this->alcance = alcance;
}

int Arma::getTipoDano() {
    return tipoDano;
}

void Arma::setTipoDano(int tipoDano){
    this->tipoDano = tipoDano;
}
