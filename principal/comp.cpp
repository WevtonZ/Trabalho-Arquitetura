#include <iostream>
#include <chrono>
#include <thread>
#include "comp.hpp"

using namespace std;

void delayTexto(const string& texto, int delayMs = 35) {
    for (char c : texto) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delayMs));
    }
}

string getNome() {
    delayTexto("Por favor, insira o seu nome para melhor lhe atender: ");
    string nome;
    getline(cin, nome);
    return nome;
}

void introTela(const string& nome) {
    cout << "\n";
    delayTexto("Olá " + nome + ", tudo bem?\n\n");
    
    delayTexto(
        "Eu sou a Tela, e estou aqui para te ajudar nas suas compras! "
        "Se você está aqui, quer dizer que está à procura de montar o computador dos seus sonhos. "
        "Às vezes isso não é uma tarefa fácil, pois existem tantas peças diferentes por aí. "
        "As pessoas podem acabar sendo enganadas e comprando peças que nem servem para o que elas precisam.\n\n"
        "Me deixe fazer parte da sua jornada! Eu conheço muito sobre hardware e posso te indicar as melhores peças "
        "para as suas necessidades.\n\n"
    );

    delayTexto(
        "Para continuarmos, por favor, me diga o que você procura em um computador. "
        "Eu sou uma aplicação limitada, então ainda não consigo entender tudo o que você digitar :(. "
        "Vamos fazer o seguinte: te darei algumas opções, e você escolhe a que mais se aproxima dos seus interesses, combinado, "
        + nome + "?\n\n"
    );
    delayTexto(
        "Para começar, faremos algumas perguntas sobre o tipo de máquina que você procura.\n"
        "(Pressione a tecla \"Enter\" quando estiver pronto(a)).\n\n"
    );
}

void limpaTela() {
    system("clear");
}

int respostaComputador(const int opt) {

}

void montarComputador() {
    cout << "Primeiro, para qual finalidade você procura um computador?";
    int option;
    cout << "1. Jogos.\n";
    cout << "2. \n";
    cout << "3. \n";
    cout << "4. \n";
    cout << "5. \n";
    cout << "6. \n";
    cout << "7. \n";
}