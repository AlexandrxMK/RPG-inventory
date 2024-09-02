#include <iostream>
#include <string>
#include "../headers/Tempo.h"

Tempo::Tempo() {}

Tempo::Tempo(long long tempo) {
    this->tempo = tempo;
}

std::string Tempo::getTempo() {
    std::string tempo = this->formatarTempo();
    return tempo;
}

long long Tempo::getSecTempo() {
    return this->tempo;
}

void Tempo::setTempo(long long tempo) { 

    if ( tempo < 0) {
        std::cout << "Tempo invalido!" << std::endl;
        this->tempo = 0;
        return;
    }
    this->tempo = tempo;
    return;
}

std::string Tempo::formatarTempo() {
    int segundos, minutos, horas;

    horas = this->tempo/3600;
    minutos = this->tempo%3600/60;
    segundos = this->tempo%3600%60;

    return std::to_string(horas) + ":" + std::to_string(minutos) + ":" + std::to_string(segundos);
}
