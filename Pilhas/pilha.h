// pilha = stack

typedef int TipoItem;    // posso trocar pra float a qualquer momento no código sem mexer nas estruturas
const int max_itens = 100;

class pilha{

    // somente a classe pode acessar
    private:
    int tamanho;
    int* estrutura;


    // outros de fora podem acessar
    public:
    pilha();   // função construtra tem que ser o mesmo nome da classe
};