#pragma once
#include <iostream>
#include "Item.h"

class Anel : public Item {
    private:
        int buff;
        int debuff;
    public:
        Anel ();
        Anel (int buff, int debuff);
        int getBuff();
        int getDeBuff();

        void setBuff(int buff);
        void setDeBuff(int debuff);
};