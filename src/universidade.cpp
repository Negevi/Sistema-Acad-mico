#include <cstring>

#include "universidade.h"

Universidade::Universidade() {
    strcpy(nome, "");
}

Universidade::~Universidade() {}

void Universidade::setNome(char* n) {
    strcpy(nome, n);
}

void Universidade::setDpto(Departamento* dpto, int index) {
    Universidade::pDpto[index] = dpto;
}  