#pragma once
#include <iostream>
#include "Item.h"

class Pocao : public Item {
    private:
        std::string efeito;
    public:
        std::string getEfeito();
        void setEfeito(std::string efeito);
};