#include <string>
using namespace std;

class Computador{
    private:
    string processador, placaDeVideo, energia, desempenho, custo;
    public:

    void setProcessador(string const & s){
        this->processador = s;
    }

    void setPlaca(string const & s){
        this->placaDeVideo = s;
    }

    void setEnergia(string const & s){
        this->energia = s;
    }

    void setDesempenho(string const & s){
        this->desempenho = s;
    }

    void setCusto(string const & s){
        this->custo = s;
    }
};

Computador computadorGenerico();

/**
 * @brief Abre o menu de montagem da máquina desejada pelo usuário.
 * 
 */
void montarComputador();

/**
 * @brief Função pra limpar o prompt de comando.
 * 
 **/
void limpaTela();

/**
 * @brief Introduz o usuário ao sistema e explica como as coisas vão funcionar daqui pra frente.
 */
void introTela(const string & nome);

/**
 * @brief Função para ler o nome da pessoa.
 * 
 * @return Uma string contendo o nome da pessoa.
 */
string getNome();

void montaJogos();
void montaEstudos();
void montaEdicao();
void montaPesquisa();
void montaIA();

void delayTexto(const string& texto, int delayMs);

/**
 * @brief Verifica se a string é um número.
 * 
 * @param A string s
 * @return true, se a string for numérica.
 * @return false, caso contrário.
 */
bool verificaNumero(string const& s);