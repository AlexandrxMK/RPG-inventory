#include <iostream>
#include <string>
#include "../headers/Anel.h"

Anel::Anel() {
    this->buff=0;
    this->debuff=0;
    this->efeito = "";
}

Anel::Anel(int tipo, std::string nome, Tempo duracao, long double preco, long long quantidade, bool equipado, long long buff, long long debuff, std::string efeito) 
: Item(tipo, nome, duracao, preco, quantidade, equipado) {
    this->buff=buff;
    this->debuff=debuff;
    this->efeito=efeito;
}

std::string Anel::getEfeito() {
    return this->efeito;
}

long long Anel::getBuff() {
    return this->buff;
}

long long Anel::getDeBuff() {
    return this->debuff;
}

void Anel::setBuff(long long buff) {
    this->buff=buff;
}

void Anel::setDeBuff(long long debuff) {
    this->debuff=debuff;
}

void Anel::setEfeito(std::string& efeito) {
    this->efeito = efeito;
}

void Anel::toString() {
    const std::string types[] = TYPES_D;
    const std::string types_[] = TYPES_;
    std::cout << "Tipo: " << this->tipo << " - " << types_[this->tipo] << std::endl;
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Duracao (s): " << this->duracao.formatarTempo() << std::endl;
    std::cout << "Quantidade: " << this->quantidade << std::endl;
    std::cout << "Equipado: " << this->equipado << std::endl;
    std::cout << "Buff: " << types[this->buff] << std::endl;
    std::cout << "DeBuff: " << types[this->debuff] << std::endl;
    std::cout << "Efeito: " << this->efeito << std::endl;
}

