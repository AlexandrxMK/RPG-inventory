#include <iostream>
#include <string>
#include "../headers/Anel.h"

Anel::Anel() {
    this->buff=0;
    this->debuff=0;
}

Anel::Anel(int buff, int debuff) {
    this->buff=buff;
    this->debuff=debuff;
}

int Anel::getBuff() {
    return this->buff;
}

int Anel::getDeBuff() {
    return this->debuff;
}

void Anel::setBuff(int buff) {
    this->buff=buff;
}

void Anel::setDeBuff(int debuff) {
    this->debuff=debuff;
}
