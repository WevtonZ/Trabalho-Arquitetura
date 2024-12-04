#include <iostream>
#include <chrono>
#include <thread>
#include "comp.hpp"

#warning Para fins de teste, usar MS = 2. Ao acabar, usar 22.
const int MS = 2;

using namespace std;

void delayTexto(const string& texto, int delayMs = MS) {
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
        "As vezes, fazer essa montagem pode ser um pouco confuso, pois há muitas peças diferentes que podem ser escolhidas, "
        "e cada conjunto delas, quando escolhidas de forma diferente, acabam sendo melhores ou piores, dependendo da qualidade "
        "de cada uma. Por isso eu estou aqui, para te ajudar nessa jornada para montar o computador que você desejar!"
        " Espero poder ser de alguma ajuda para você amigo!\n"
        "Eu sou uma aplicação limitada, incapaz de entender ainda tudo o que você escrever para mim, por isso, eu trabalho com "
        "opções. Você como usuário, irá escolher algumas opções que eu disponibilizar a ti, e assim eu conseguirei fazer escolhas "
        "baseadas nelas. Espero que possamos nos comunicar bem!\n\n"
    );

    delayTexto(
        "Para dar início a nossa conversa, pressione a tecla \"Enter\"."
    );
    string enter;
    getline(cin, enter);
    cout.flush();
}

void limpaTela() {
    system("clear");
}

void computadorGenerico() {
    
}

void montarComputador() {
    string teste;
    int option;
    voltando:

    delayTexto("Por último, para qual finalidade você procura um computador? (Por favor, insira um valor numérico no intervalo entre 1 a 5.\n");
    delayTexto("Digite 6 caso você não queira mais montar um computador :(");
    cout << endl;

    cout << "1. Jogos eletrônicos." << endl;
    cout << "2. Edição de vídeos e imagens." << endl;
    cout << "3. Estudos." << endl;
    cout << "4. Pesquisas científicas." << endl;
    cout << "5. Inteligência Artificial." << endl;

    getline(cin, teste);
    
    if(!verificaNumero(teste)) { // caso a string lida não seja numérica, retorne que deu errado.
        delayTexto("Esse não é um valor numérico válido. Vamos tentar denovo.");
        cout << endl;
        goto voltando;
    }
    option = stoi(teste);
    
    if(option <= 5 && option >= 1) limpaTela(); // limpar a tela caso o cara tenha escolhido uma opção válida.

    switch(option) {
        case 1:
            delayTexto("Você escolheu montar um computador voltado para jogos. Aguarde um instante");
            delayTexto(".....", 350);
            montaJogos();       // leva para a montagem de um computador voltado para jogos.
            break;

        case 2:
            delayTexto("Você escolheu montar um computador voltado para edição de imagens. Aguarde um instante");
            delayTexto(".....", 350);
            montaEdicao();      // leva para a montagem de um computador voltado para edição de imagens, vídeos, entre outras edições.
            break;

        case 3:
            delayTexto("Você escolheu montar um computador voltado para estudos. Aguarde um instante");
            delayTexto(".....", 350);
            montaEstudos();     // Leva para a montagem de um computador voltado para estudos no geral.
            break;

        case 4:
            delayTexto("Você escolheu montar um computador voltado para pesquisas científicas. Aguarde um instante");
            delayTexto(".....", 350);
            montaPesquisa();    // leva para a montagem de um computador para pesquisas científicas.
            break;

        case 5:
            delayTexto("Você escolheu montar um computador voltado para o uso de Inteligência Artificial. Aguarde um instante");
            delayTexto(".....", 350);
            montaIA();          // leva para a montagem de um computador voltado para Inteligencia Artificial.
            break;

        case 6:                 // sair desse programa.
            delayTexto("Saindo do programa. Por favor, aguarde");
            delayTexto(".....", 200);
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
    delayTexto("Montar um computador voltado para jogos é o mesmo que montar um quebra cabeça: "
        "vamos escolher as peças que melhor se encaixam para que assim a nossa máquina se torne bastante promissora. "
        "O mais importante quando se trata de montar um computador para jogos é ter um bom processador e uma boa placa de vídeo, "
        "pois assim os jogos podem rodar sem travar muito. Além disso, é necessário ter uma boa quantidade de memória RAM, para "
        "assim obter carregamentos mais rápidos do jogo pra memória. (Pressione Enter para continuar).\n"
    );
    string enter;
    getline(cin, enter);
    delayTexto("Dito isso, vamos iniciar o processo de montagem por decidir");
}

void montaEstudos() {

}

void montaEdicao() {

}

void montaPesquisa() {

}

void montaIA() {

}

bool verificaNumero(string const & s) {
    for(auto c: s) {
        if(c < '0' || c > '9'){
            return false;
        }
    }
    return true;
}