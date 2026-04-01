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
    Disciplina* aux;
    include->setDpto(this);
    if(pDisciplPrim == nullptr) {
        pDiscAtual = include;
        pDisciplPrim = include;
    } else {
        aux = pDiscAtual;
        aux->pProx = include;
        pDiscAtual = include;
    }
}

void Departamento::listarDisciplinas () {
    Disciplina* aux = pDisciplPrim;
    while(aux != nullptr) {
        std::cout << aux->getNome() << std::endl;
        aux = aux->pProx;
    }
}