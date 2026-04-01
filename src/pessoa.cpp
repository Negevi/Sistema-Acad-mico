#include <cstring>
#include <ctime>

#include "pessoa.h"

Mdy::Mdy(int fdia, int fmes, int fano):
    dia(fdia), mes(fmes), ano(fano) {

}

Mdy::~Mdy() {}

void Mdy::mdyAtual() {
    std::time_t agora = std::time(nullptr);
    std::tm* agora_mdy = std::localtime(&agora);

    dia = agora_mdy->tm_mday;
    mes = agora_mdy->tm_mon + 1;
    ano = agora_mdy->tm_year + 1900;
}

Pessoa::Pessoa(Mdy nasc, char* nome, int idade, int id): 
    nascimento(nasc), idade(idade), id(id) {
    std::strcpy(this->nome, nome);
}

Pessoa::~Pessoa() {}

void Pessoa::setNome(char* n) {
    std::strcpy(nome, n); // needs handling of const char
}

void Pessoa::calcularIdade(Mdy atual) {
    idade = atual.getAno() - nascimento.getAno();
 
    if (atual.getMes() < nascimento.getMes() || 
       (atual.getMes() == nascimento.getMes() && atual.getDia() < nascimento.getDia())) {
        idade--;
    }
}


