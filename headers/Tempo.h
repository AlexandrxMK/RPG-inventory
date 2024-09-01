#pragma once
#include <iostream>

class Tempo {
    protected:
        int tempo;
    
    public:
        Tempo();
        Tempo(int tempo);
        std::string getTempo();
        int getSecTempo();
        void setTempo(int tempo);
        std::string formatarTempo();
};
