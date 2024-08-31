#pragma once
#include <iostream>
#include "Item.h"

class Arma : public Item {
    private:
        float dano;
        float alcance;
        int tipoDano;
    public:
        Arma();
        Arma(int tipo, std::string nome, Tempo duracao, float preco, int quantidade, bool equipado, float dano, float alcance, int tipoDano);
    
        float getDano();
        float getAlcance();
        int getTipoDano();

        void setDano(float dano);
        void setAlcance(float alcance);
        void setTipoDano(int tipoDano);
        void toString();
};
