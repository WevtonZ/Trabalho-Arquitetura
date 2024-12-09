#include <string>
using namespace std;


class Computador{
    private:
    string processador, energia, custo;
    string motivo;

    public:

    void setProcessador(string const & s){
        this->processador = s;
    }

    void setEnergia(string const & s){
        this->energia = s;
    }

    void setCusto(string const & s){
        this->custo = s;
    }

    void setMotivo(string const & s) {
        this->motivo = s;
    }

    string getCusto() {
        return custo;
    }

    string getProc() {
        return processador;
    }

    string getEnergia() {
        return energia;
    }

    string getMotivo() {
        return motivo;
    }
};

string perguntarMotivo();
string perguntarProcessador();
string perguntarEnergia();

void montarResposta(Computador comp);

Computador montarComputador();

void limpaTela();

void introTela(const string & nome);

string getNome();

void delayTexto(const string& texto, int delayMs);

bool verificaNumero(string const& s);