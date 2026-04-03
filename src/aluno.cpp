#include "aluno.h"

Aluno::Aluno(Mdy mdy, char* nome, int idade, int id, int ra): 
    Pessoa(mdy, nome, idade, id), ra(ra) {
}
 
Aluno::~Aluno() {}