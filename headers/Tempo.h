#pragma once
#include <iostream>

class Tempo {
    protected:
        int tempo;
    
    public:
        int getTempo();
        void setTempo(int tempo);
        std::string formatarTempo();
};
