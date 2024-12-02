#include <string>
using namespace std;

/**
 * @brief Abre o menu de montagem da máquina desejada pelo usuário.
 * 
 */
void montarComputador();

/**
 * @brief Função pra limpar o prompt de comando.
 * 
 */
void limpaTela();

/**
 * @brief Introduz o usuário ao sistema e explica como as coisas vão funcionar daqui pra frente.
 */
void introTela(const string & nome);

string getNome();