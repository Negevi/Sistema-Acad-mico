#include <cstring>

#include "disciplina.h"

Disciplina::Disciplina(int i, char* n, char* ac, Departamento* pDptoNovo, Disciplina* pProxNovo, Aluno* pAlunos):
    id(i), pDpto(pDptoNovo), pProx(pProxNovo), alunos(pAlunos), {
    std::strcpy(nome, n);
    std::strcpy(area_do_conhecimento, ac);
}

Disciplina::~Disciplina() {}

void Disciplina::setNome(char* n) {
    std::strcpy(nome, n);
}