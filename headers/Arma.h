#pragma once
#include <iostream>
#include "Item.h"

class Arma : public Item {
    private:
        float dano;
        float alcance;
        int tipoDano;
    public:
        float getDano();
        float getAlcance();
        int getTipoDano();

        void setDano(float dano);
        void setAlcance(float alcance);
        void setTipoDano(int tipoDano);
};
