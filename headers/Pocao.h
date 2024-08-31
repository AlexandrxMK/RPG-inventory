#pragma once
#include <iostream>
#include "Item.h"

class Pocao : public Item {
    private:
        std::string efeito;
    public:
        Pocao();
        Pocao(int tipo, std::string nome, Tempo duracao, float preco, int quantidade, bool equipado, std::string efeito);
        std::string getEfeito();
        void setEfeito(std::string& efeito);

        void toString();
};