#pragma once
#include <iostream>
#include "Item.h"

class Pocao : public Item {
    private:
        std::string efeito;
    public:
        Pocao(){};
        Pocao(std::string efeito);
        std::string getEfeito();
        void setEfeito(std::string efeito);
};