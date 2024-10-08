#include <iostream>
#include "../headers/Arma.h"

Arma::Arma() {}

Arma::Arma(int tipo, std::string nome, Tempo duracao, long double preco, long long quantidade, bool equipado, long double dano, long double alcance, int tipoDano) 
:  Item (tipo, nome, duracao, preco, quantidade, equipado) {
    this->dano = dano;
    this->alcance = alcance;
    this->tipoDano = tipoDano;
}

long double Arma::getDano() {
    return dano;
}

void Arma::setDano(long double dano) {
    this->dano = dano;
}

long double Arma::getAlcance() {
    return alcance;
}

void Arma::setAlcance(long double alcance){
    this->alcance = alcance;
}

int Arma::getTipoDano() {
    return tipoDano;
}

void Arma::setTipoDano(int tipoDano){
    this->tipoDano = tipoDano;
}

void Arma::toString() {
    const std::string types[] = TYPES_D;
    const std::string types_[] = TYPES_;
    std::cout << "Tipo: " << this->tipo << " - " << types_[this->tipo] << std::endl;
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Duracao (s): " << this->duracao.formatarTempo() << std::endl;
    std::cout << "Quantidade: " << this->quantidade << std::endl;
    std::cout << "Equipado: " << this->equipado << std::endl;
    std::cout << "Dano: " << this->dano << std::endl;
    std::cout << "Alcance (m): " << this->alcance << std::endl;
    std::cout << "Tipo de Dano: " << types[this->tipoDano];
}
