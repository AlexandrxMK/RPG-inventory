#pragma once
#include <iostream>
#include "Item.h"

class Anel : public Item {
    private:
        int buff;
        int debuff;
    public:
        int getBuffo();
        int getDeBuff();

        void setBuff(int buff);
        void setDeBuff(int debuff);
};