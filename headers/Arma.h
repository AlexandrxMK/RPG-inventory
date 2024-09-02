#pragma once
#include <iostream>
#include "Item.h"

class Arma : public Item {
    private:
        long double dano;
        long double alcance;
        int tipoDano;
    public:
        Arma();
        Arma(int tipo, std::string nome, Tempo duracao, long double preco, long long quantidade, bool equipado, long double dano, long double alcance, int tipoDano);
    
        long double getDano();
        long double getAlcance();
        int getTipoDano();

        void setDano(long double dano);
        void setAlcance(long double alcance);
        void setTipoDano(int tipoDano);
        void toString();
};
