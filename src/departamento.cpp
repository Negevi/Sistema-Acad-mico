#include <iostream>
#include <cstring>

#include "departamento.h"
#include "disciplina.h"

Departamento::Departamento(int i, char* n): 
    id(i), pUniv(nullptr), pDisciplPrim(nullptr), pDiscAtual(nullptr) {
    std::strcpy(nome, n);
}
 
Departamento::~Departamento() {}
 
void Departamento::setNome(char* n) {
    std::strcpy(nome, n);
}

void Departamento::incluirDisciplina(Disciplina* include) {
    
}

void Departamento::listarDisciplinas () {
}