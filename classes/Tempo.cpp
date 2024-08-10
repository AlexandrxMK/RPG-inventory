#include <iostream>
#include <string>
#include "./headers/Tempo.h"

/*#define typeof(var) _Generic( (var),\
char: "Char",\
int: "Integer",\
float: "Float",\
char *: "String",\
void *: "Pointer",\
default: "Undefined") */

std::string Tempo::getTempo() {
    std::string tempo = this->formatarTempo();
    return tempo;
}

void Tempo::setTempo(int tempo) {
    /*if (typeof(tempo) != "Integer" || tempo < 0) {
        std::cout << "Tempo inválido" << std::endl;
        this->tempo = 0;
        return;
    } */
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
