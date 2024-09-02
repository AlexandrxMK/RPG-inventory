#pragma once
#include <iostream>
#include "Item.h"

class Anel : public Item {
    private:
        long long buff;
        long long debuff;
        std::string efeito;
    public:
        Anel ();
        Anel (int tipo, std::string nome, Tempo duracao, long double preco, long long quantidade, bool equipado, long long buff, long long debuff, std::string efeito);
        long long getBuff();
        long long getDeBuff();
        std::string getEfeito();

        void setBuff(long long buff);
        void setDeBuff(long long debuff);
        void setEfeito(std::string& efeito);
        void toString();
};