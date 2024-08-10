#pragma once
#include <iostream>
#include "Item.h"

class Arma : public Item {
    private:
        float dano;
        float alcance;
        int tipo_dano;
    public:
        float getDano();
        float getAlcance();
        int getTipoDano();

        void setAlcance(float alcance);
        void setTipoDano(int tipo_dano);
        void setDano(float dano);
};
