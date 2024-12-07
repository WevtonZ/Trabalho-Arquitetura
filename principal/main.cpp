#include <iostream>
#include <string>
#include "comp.hpp"

using namespace std;

int main() {
    string nome = getNome(); // pegar o nome do usuário.
    introTela(nome); // Introduzir o usuário ao sistema.
    montarComputador(); // arrumar essa função ainda.
    delayTexto("Obrigado por testar nossos serviços, Sr.(a) " + nome + "! Qualquer feedback é bem vindo!\n", 2);
    return 0;
}