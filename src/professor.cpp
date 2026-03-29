#include "professor.h"

Professor::Professor(Mdy mdy, char* nome, int idade, int id,
                     Universidade* pUniv,
                     Departamento* pDpto) : Pessoa(mdy, nome, idade, id) {
    univFiliado = pUniv;
    dptoAfiliado = pDpto;
}