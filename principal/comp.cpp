#include <iostream>
#include <chrono>
#include <thread>
#include "comp.hpp"

#warning Para fins de teste, usar ms = 1. Ao acabar, usar 22.

using namespace std;

void delayTexto(const string& texto, int delayMs = 1) {
    for (char c : texto) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delayMs));
    }
}
string getNome() {
    delayTexto("Por favor, insira o seu nome para melhor lhe atender: ");
    string nome;
    getline(cin, nome);
    cout << flush;
    return nome;
}
void introTela(const string& nome) {
    cout << endl;
    delayTexto("Olá " + nome + ", tudo bem?\n\n");
    
    delayTexto(
        "Eu sou a Tela, e estou aqui para te ajudar na montagem do seu computador! "
        "Se você está aqui, quer dizer que está à procura de montar o computador dos seus sonhos. "
        "Às vezes isso não é uma tarefa fácil, pois existem tantas peças diferentes por aí que tudo pode ficar muito confuso. "
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
        "(Pressione a tecla \"Enter\" quando estiver pronto(a)).\n"
    );
    string enter;
    getline(cin, enter);
    cout.flush();
}
void limpaTela() {
    system("clear");
}
void montarComputador() {
    string teste;
    int option;
    voltando:

    delayTexto("Primeiro, para qual finalidade você procura um computador?\n(Por favor, insira um valor numérico no intervalo entre 1 a 5.");
    delayTexto("Digite 6 caso você queira sair do programa.");
    cout << endl;

    cout << "1. Jogos eletrônicos." << endl;
    cout << "2. Edição de vídeos e imagens." << endl;
    cout << "3. Estudos." << endl;
    cout << "4. Pesquisas científicas." << endl;
    cout << "5. Inteligência Artificial." << endl;
    cout << "6. Sair do programa." << endl;

    getline(cin, teste);
    
    if(!verificaNumero(teste)) { // caso a string lida não seja numérica, retorne que deu errado.
        delayTexto("Esse não é um valor numérico válido. Vamos tentar denovo.");
        cout << endl;
        goto voltando;
    }
    option = stoi(teste);

    switch(option) {
        case 1:
            montaJogos();       // leva para a montagem de um computador voltado para jogos.
            break;

        case 2:
            montaEdicao();      // leva para a montagem de um computador voltado para edição de imagens, vídeos, entre outras edições.
            break;

        case 3:
            montaEstudos();     // Leva para a montagem de um computador voltado para estudos no geral.
            break;

        case 4:
            montaPesquisa();    // leva para a montagem de um computador para pesquisas científicas.
            break;

        case 5:
            montaIA();          // leva para a montagem de um computador voltado para Inteligencia Artificial.
            break;

        case 6:                 // sair desse programa.
            delayTexto("Você decidiu sair do programa. Saindo");
            delayTexto(".....", 120);
            limpaTela();
            return;

        default:
            delayTexto("Oops! Essa opção não é válida! Tente novamente com uma outra opção.");
            cout.flush();
            limpaTela();
            goto voltando;
    }
}
void montaJogos() {

}
void montaEstudos() {

}
void montaEdicao() {

}
void montaPesquisa() {

}
void montaIA() {

}
int eficiencia() {

}
bool verificaNumero(string const & s) {
    for(auto c: s) {
        if(c < '0' || c > '9'){
            return false;
        }
    }
    return true;
}
