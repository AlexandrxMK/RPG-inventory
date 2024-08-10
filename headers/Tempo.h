#pragma once
#include <iostream>

class Tempo {
    protected:
        int tempo;
    
    public:
        std::string getTempo();
        void setTempo(int tempo);
        std::string formatarTempo();
};
