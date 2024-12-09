
#include <iostream>
#include <string>
#include "comp.hpp"

using namespace std;

int main() {
    string nome = getNome(); // pegar o nome do usuário.
    introTela(nome); // Introduzir o usuário ao sistema.
    Computador comp = montarComputador(); // função para arrumar o computador
    montarResposta(comp);
    delayTexto("Obrigado por testar nossos serviços, Sr.(a) " + nome + "! Qualquer feedback é bem vindo!\n", 22);
    return 0;
}
