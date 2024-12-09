#include <iostream>
#include <chrono>
#include <thread>
#include "comp.hpp"

int MS = 23;

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
    delayTexto("Decida a configuração de velocidade dos textos que vierem a seguir:\n\n");
    delayTexto(
        "1. Lento.\n"
        "2. Normal.\n"
        "3. Rápido.\n"
        "4. Muito rápido.\n"
        "5. Instantâneo.\n\n"
        "-> "
    );

    int velocidade;
    cin >> velocidade;

    switch(velocidade) {
        case 1:
            MS = 40;
            break;
        case 2:
            MS = 23;
            break;
        case 3:
            MS = 12;
            break;
        case 4:
            MS = 8;
            break;
        case 5:
            MS = 0;
    }

    cin.ignore();

    delayTexto("Vamos começar então. (Pressione Enter): ");
    string enter;
    getline(cin, enter);
    limpaTela();

    delayTexto("Olá " + nome + ", tudo bem?\n\n");

    delayTexto(
        "Eu sou a Tela, e estou aqui para te ajudar na montagem do seu computador! "
        "As vezes, fazer essa montagem pode ser um pouco confusa, pois há muitas peças diferentes que podem ser escolhidas, "
        "e cada conjunto delas, quando escolhidas de forma diferente, acabam sendo melhores ou piores, dependendo da qualidade "
        "de cada uma. Por isso eu estou aqui, para te ajudar nessa jornada para montar o computador que você desejar!\n"
        "Eu sou uma aplicação limitada, ainda incapaz de entender tudo o que você escrever para mim, e por isso eu trabalho com "
        "opções. Você, como usuário, irá escolher algumas opções que eu disponibilizar a ti, e assim eu conseguirei fazer escolhas "
        "baseadas nelas. Espero que possamos nos comunicar bem!\n\n"
    );

    delayTexto(
        "Para dar início a nossa conversa, pressione a tecla \"Enter\".\n"
    );
    getline(cin, enter);
}

void limpaTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

string perguntarCusto() {
    char peca;
    delayTexto(
        "Qual o orçamento que você pensa em investir em uma CPU?\n\n"
        "A. Custo benefício.\n"
        "B. Intermediário.\n"
        "C. Eficiente.\n"
    );

    cin >> peca;
    string custo, enter;
    peca = (char)(toupper(peca));
    if(peca == 'A') {
        custo = "Custo benefício";
    }
    else if(peca == 'B'){
        custo = "Intermediário";
    }
    else if(peca == 'C') {
        custo = "Eficiente";
    }
    else {
        delayTexto("Hmm, não entendi sua escolha. Por favor, selecione uma das opções apresentadas.\n");
        limpaTela();
        return "-1";
    }

    delayTexto("Processamento concluído! Pressione Enter para entrarmos na fase final.\n");
    cin.ignore();
    getline(cin, enter);
    limpaTela();
    return custo;
}

string perguntarMotivo() {
    char token;
    delayTexto("Por último, insira o porque você está montando um computador."
            " Escolha entre as opções abaixo e farei o possível para poder te auxiliar.\n\n"
            "A. Inteligência Artificial.\n"
            "B. Jogos eletrônicos.\n"
            "C. Uso pessoal / Trabalho.\n\n"
            "-> "
    );

    cin >> token;
    string motivo, enter;
    token = (char)(toupper(token));
    if(token == 'A') {
        motivo = "IA";
    }   
    else if(token == 'B') {
        motivo = "Jogos Eletrônicos";
    }
    else if(token == 'C') {
        motivo = "Uso pessoal / Trabalho";
    }
    else {
        delayTexto("Hmm, não sei se entendi. Poderia escolher uma das opções apresentadas?\n\n");
        limpaTela();
        return "-1";
    }

    delayTexto("Processamento concluído! Pressione Enter para entrarmos na fase final.\n");
    cin.ignore();
    getline(cin, enter);
    limpaTela();
    return motivo;
}

string perguntarProcessador() {
    char peca;
    string enter;
    string processador;
    delayTexto("Qual processador você deseja ter?\n\n"
        "A. Custo benefício.\n"
        "B. Eficiente.\n"
        "Insira qual das letras representa melhor o tipo de processador que você deseja.\n\n"
        "-> "
    );

    cin >> peca;
    peca = (char)(toupper(peca));
    delayTexto("Processando...\n\n");
    if(peca == 'A') {
        processador = "Custo Benefício";
    }
    else if(peca == 'B') {
        processador = "Eficiente";
    }
    else {
        delayTexto("Hmm, não sei se entendi. Poderia escolher uma das opções apresentadas?\n\n");
        limpaTela();
        return "-1";
    }
    delayTexto("Processamento concluído! Podemos para a próxima peça. (Pressione Enter).\n");
    cin.ignore();
    getline(cin, enter);
    limpaTela();
    return processador;
}

string perguntarEnergia() {
    char peca;
    string enter, energia;
    delayTexto(
        "Qual o consumo energético que você espera ter da sua máquina?\n"
        "A. Baixo.\n"
        "B. Mediano.\n"
        "C. Alto.\n\n"
        "-> "
    );

    cin >> peca;
    delayTexto("Processando...\n\n");
    if(peca == 'A' || peca == 'a') {
        energia = "Baixo";
    }
    else if(peca == 'B' || peca == 'b') {
        energia = "Mediano";
    }
    else if(peca == 'C' || peca == 'c') {
        energia = "Alto";
    }
    else {
        delayTexto("Hmm, não sei se entendi. Poderia escolher uma das opções apresentadas?\n\n");
        limpaTela();
        return "-1";
    }

    delayTexto("Processamento concluído! Podemos para a próxima peça. (Pressione Enter).\n");
    cin.ignore();
    getline(cin, enter);
    limpaTela();
    return energia;
}

Computador montarComputador() {
    Computador comp;
    string processador, motivo, energia, custo;
    limpaTela();
    delayTexto("Primeiro, precisamos decidir qual o tipo de computador esperado para você.\n");

    do{
        processador = perguntarProcessador();
    } while(processador == "-1");

    do{
        energia = perguntarEnergia();
    } while(energia == "-1");
    
    do {
        custo = perguntarCusto();
    } while(custo == "-1");

    do{
        motivo = perguntarMotivo();
    } while(motivo == "-1");

    comp.setProcessador(processador);
    comp.setEnergia(energia);
    comp.setCusto(custo);
    comp.setMotivo(motivo);

    delayTexto(
        "Ok. Vamos ver se essas respostas batem com o que você deseja:\n\n"
        "Processador: " + comp.getProc() + ".\n"
        "Consumo energético: " + comp.getEnergia() + ".\n"
        "Investimento: " + comp.getCusto() + ".\n"
        "Motivação: " + comp.getMotivo() + "\n"
    );
    char decisao;
    do{
        delayTexto(
            "Essas são mesmo as opções que deseja? Caso queira trocar, escolha qual delas você deseja mudar. Caso não queira fazer mudanças, digite E.\n\n"
            "A. Mudar processador.\n"
            "B. Mudar o consumo energético.\n"
            "C. Mudar meu investimento.\n"
            "D. Mudar minha motivação.\n\n"
            "-> "
        );

        cin >> decisao;

        decisao = (char)(toupper(decisao));
        if(decisao == 'A') {
            comp.setProcessador(perguntarProcessador());
        }
        if(decisao == 'B') {
            comp.setEnergia(perguntarEnergia());
        }
        if(decisao == 'C') {
            comp.setCusto(perguntarCusto());
        }
        if(decisao == 'D') {
            comp.setMotivo(perguntarMotivo());
        }

    } while(decisao != 'E');

    delayTexto("Está decidido então. A recomendação está sendo preparada. Por favor aguarde.\n");
    limpaTela();

    return comp;
}

void montarResposta(Computador comp) {
    string custo = comp.getCusto();
    if(comp.getMotivo() == "IA") {
        if(comp.getProc() == "Eficiente"){
            delayTexto("Arquitetura: RISC.\n");
            delayTexto(
                "Processador: (CPU) AMD Ryzen Threadripper 7990X / Intel Xeon W-3375.\n"
                "Frequência da CPU: 3.0GHz ou superior.\n"
                "128GB de RAM ou mais.\n"
                "2TB de memória SSD.\n"
                "Fonte de Alimentação: 1000W ou mais.\n\n"
                "Justificativa: Com todas essas peças, podemos montar um computador altamente eficiente em termos da carga associada"
                " ao trabalhar com Inteligência Artificial. A arquitetura RISC vem com o fato de que é mais leve em relação"
                " aos cálculos paralelos que modelos de IA usam. Os processadores indicados possuem múltiplos núcleos e threads, o que os permitem"
                " executar várias tarefas de IA simultaneamente. A placa de Vídeo escolhida é uma das mais utilizadas para treinamento de IA, "
                "pois possue uma arquitetura que acelera operações com matrizes, o que é fundamental para se operar uma rede neural."
                " A quantidade elevada de RAM se deve ao fato de que as IAs podem ter que acessar informações do usuário várias vezes, assim "
                "precisando que elas estejam disponíveis a todo momento pode ser crucial para a velocidade em que a IA resolve as coisas."
                " Ter uma fonte de alimentação boa permite que o sistema rode sem causar instabilidades.\n"
            );
        }
        else {
            delayTexto(
                "Arquitetura: CISC.\n"
                "Processador: Intel Core i5-13600K / AMD Ryzen 7 7700X\n"
                "Placa de vídeo: NVIDIA GeForce RTX 4070\n"
                "Frequência da CPU: 4.5GHz\n"
                "Memória RAM: 32 GB DDR5 5600 MHz\n"
                "Armazenamento: SSD NVMe PCIe Gen 4.0 (1TB ou mais)\n"
                "Fonte de alimentação: Corsair RM750e (750W)\n"
                "Justificativa: A arquitetura CISC, oriunda dos processadores e a placas de vídeo escolhidos,"
                " oferecem equilíbrio entre custo e desempenho para tarefas de IA. Ela é responsável por realizar cálculos complexos, o que pode beneficiar "
                "o treinamento de novos modelos."
            );
        }
    }
    else if(comp.getMotivo() == "Jogos Eletrônicos") {
        delayTexto(
            "Arquitetura: CISC.\n"
        );
        if(comp.getProc() == "Eficiente"){
            delayTexto(
                "Processador: Intel Core I9-13900KS / AMD Ryzen 9 7950X3D.\n"
                "Placa de Vídeo: NVIDIA GeForce RTX 4090 / AMD Radeon RX 7900 XTX.\n"
                "Frequência da CPU: 5GHz ou mais.\n"
                "Memória RAM: 64GB DDR5.\n"
                "Armazenamento: SSD NVMe PCle Gen 4.0 (2TB).\n"
                "Fonte de alimentação: Corsair HX1500i (1500W).\n"
                "Justificativa: Esse sistema foi projetado para oferecer máximo desempenho em jogos eletrônicos, aproveitando o melhor da tecnologia atual."
                "A arquitetura CISC vinda dos processadores indicados, garante que o sistema possa lidar com qualquer tipo de jogo possível."
                " Sendo assim, você terá uma experiência rápida e fluida dos jogos que selecionar.\n\n"
            );
        }
        else {
            delayTexto(
                "Processador: AMD Ryzen 5 7600 / Intel Core i5-13400F"
                "Placa de Vídeo: NVIDIA RTX 4060 Ti / AMD RX 6700 XT"
                "Frequência da CPU: 4.5 / 5.0GHz"
                "Memória RAM: 32 GB DDR5 6000 MHz"
                "Armazenamento: SSD NVMe Samsung 980 Pro 1 TB"
                "Fonte de alimentação: Corsair RM750e (750W)"
                "Justificativa: Essa configuração combina componentes eficientes em energia e altamente otimizados para jogos eletrônicos."
                "A arquitetura CISC vinda dos processadores indicados ajuda na realização de cálculos complexos que vem dos jogos.\n\n"
            );
        }
    }
    else {
        if(comp.getProc() == "Eficiente") {
            delayTexto(
                "Arquitetura: CISC.\n"
                "Processador: Intel Core i7-13700K / AMD Ryzen 7 7700X\n"
                "Frequência da CPU: Acima de 4 GHz\n"
                "Placa de Vídeo: NVIDIA GeForce RTX 3060 Ti / NVIDIA RTX 4060 Ti"
                "Memória RAM: 16 GB DDR4 3200 MHz (Kingston HyperX / Corsair Vengeance)"
                "Armazenamento: Samsung 970 EVO Plus, 500 GB ou mais"
                "Fonte de alimentação: Corsair RM850x (850W)"
                "Justificativa: A arquitetura CISC oferece cálculos complexos de forma eficiente. Portanto, podemos assim realizar multitarefas "
                "de forma mais ágil, pelo motivo de ter mais núcleos. Uma placa de vídeo boa não é necessário para um computador pessoal, mas é "
                "útil quando se usa um software mais pesado, como um de edição de vídeos ou renderização de imagens. 16GB de RAM para que o "
                "computador consiga lidar com várias tarefas ao mesmo tempo. 500GB de SSD para que o computador ligue mais rapidamente e que "
                "os arquivos sejam carregados mais rapidamente também, afinal, SSD é bem mais rápido que HDD nesse sentido.\n\n"
            );
        }
        else {
            delayTexto(
                "Arquitetura: CISC"
                "Processador: Intel Core i5-13600K / AMD Ryzen 5 7600X\n"
                "Frequência da CPU: Entre 3.5 GHz e 4.5 GHz\n"
                "Memória RAM: NVIDIA GeForce RTX 3050 / AMD Radeon RX 6600\n"
                "Armazenamento: Samsung 970 EVO Plus, 500 GB ou mais\n"
                "Fonte de alimentação: Corsair RM650x (650W)\n"
                "Justificativa: A arquitetura CISC oferece a resolução de cálculos complexos de forma eficiente. Ideal para multitarefas, "
                "edição de documentos e uso de programas mais complexos. Os processadores mostrados são bons modelos custo-benefício existentes "
                "no mercado atualmente, com uma boa performance geral. A memória RAM é para que o computador possa lidar com muitas tarefas ao "
                "mesmo tempo, como manter várias janelas abertas. 500GB de SSD para que o computador execute as funções operacionais dele mais rápido."
            );
        }
    }
}