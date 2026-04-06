#include "aluno.h"

Aluno::Aluno(Mdy mdy, char* nome, int idade, int id, int ra, Aluno* pProx, Aluno* pAnte): 
    Pessoa(mdy, nome, idade, id), ra(ra), pProx(pProx), pAnte(pAnte) {
}
 
Aluno::~Aluno() {}