#include <cstring>
#include <iostream>>
#include "disciplina.h"
#include "aluno.h"

Disciplina::Disciplina(int id, char* nome, char* ac, Departamento* pDpto, 
    Disciplina* pDisciplinaAnte, Disciplina* pDisciplinaProx,
    Aluno* pAlunoProx, Aluno* pAlunoAnte, int n_alunos, int lim_alunos): 
    id(id), pDpto(pDpto), pDisciplinaAnte(pDisciplinaAnte), pDisciplinaProx(pDisciplinaProx), 
    pAlunoPrim(pAlunoPrim), pAlunoAtual(pAlunoAtual), n_alunos(n_alunos), lim_alunos(lim_alunos)   {
}

Disciplina::~Disciplina() {} // TODO

void Disciplina::setNome(char* n) {
    std::strcpy(nome, n);
}

void Disciplina::incluaAluno(Aluno* include) {
    if(lim_alunos >= n_alunos) {
        if(pAlunoAtual == NULL) {
            pAlunoAtual = include;
            pAlunoPrim = include;
        } else {
            pAlunoAtual->pProx = include;
            include->pAnte = pAlunoAtual;
            pAlunoAtual = include;
        }
        n_alunos++;
    } else {
        std::cout << "Disciplina cheia!" << std::endl;
    }
}

void Disciplina::listeAlunos() {
    Aluno* aux = pAlunoPrim;
    std::cout << "Lista de alunos: " << std::endl;
    while(aux != NULL) {
        std::cout << aux->getNome() << std::endl;
        aux = aux->pProx;
    }
}