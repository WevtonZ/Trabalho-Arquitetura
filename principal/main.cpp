#include <iostream>
#include <string>
#include "comp.hpp"

using namespace std;

int main(int argc, char * argv[]) {
    string nome = getNome(); // pegar o nome do usuário.
    introTela(nome); // Introduzir o usuário ao sistema.
    montarComputador(); // arrumar essa função ainda.
    return 0;
}