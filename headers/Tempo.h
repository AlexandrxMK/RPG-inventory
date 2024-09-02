#pragma once
#include <iostream>

class Tempo {
    protected:
        long long tempo;
    
    public:
        Tempo();
        Tempo(long long tempo);
        std::string getTempo();
        long long getSecTempo();
        void setTempo(long long tempo);
        std::string formatarTempo();
};
