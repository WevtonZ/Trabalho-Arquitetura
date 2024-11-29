#include <iostream>
#include <string>

std::string nome;

void introTela() {
    std::cout << "\n";
    std::cout << "Olá " << nome << " tudo bem?\n\nEu sou a Tela, e estou aqui para poder te ajudar nas suas compras! ";
    std::cout << "Se você está aqui, quer dizer que está a procura de montar o computador dos seus sonhos, e as vezes isso";
    std::cout << " não é uma tarefa fácil, visto que há tantas peças diferentes por aí, as pessoas podem acabar sendo enganadas ";
    std::cout << "e podem acabar comprando peças que na real nem servem o propósito que elas estão procurando. ";
    std::cout << "Me deixe fazer parte da sua jornada! Eu tenho conhecimento para poder te indicar quais são as melhores peças ";
    std::cout << "que você pode comprar.\n";
    std::cout << "\n";

    std::cout << "Para continuarmos, por favor, nos diga o que você procura em um computador. Eu sou uma aplicação limitada, então ";
    std::cout << "não sou capaz ainda de ler o que você digitar e compreender tudo :(. Vamos fazer o seguinte, eu posso te dar ";
    std::cout << "algumas opções, e a partir daí você seleciona a que se aproxima mais dos seus interesses, combinado?\n";
    std::cout << "\n";
    
    return;
}

int main(int argc, char * argv[]) {
    std::cout << "Por favor, insira o seu nome para melhor lhe atender: ";
    std::getline(std::cin, nome);
    introTela(); // Introduzir o usuário ao sistema.

  
  
    return 0;
}
