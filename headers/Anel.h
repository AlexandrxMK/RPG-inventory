#pragma once
#include <iostream>
#include "Item.h"

class Anel : public Item {
    private:
        int buff;
        int debuff;
        std::string efeito;
    public:
        Anel ();
        Anel (int tipo, std::string nome, Tempo duracao, float preco, int quantidade, bool equipado, int buff, int debuff, std::string efeito);
        int getBuff();
        int getDeBuff();
        std::string getEfeito();

        void setBuff(int buff);
        void setDeBuff(int debuff);
        void setEfeito(std::string& efeito);
        void toString();
};