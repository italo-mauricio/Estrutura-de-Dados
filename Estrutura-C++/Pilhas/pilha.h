// pilha = stack

typedef int TipoItem;    // posso trocar pra float a qualquer momento no código sem mexer nas estruturas
const int max_itens = 100;

class pilha{

    // somente a classe pode acessar
    private:
    int tamanho;
    TipoItem* estrutura;


    // outros de fora podem acessar
    public:
    pilha();   // função construtra tem que ser o mesmo nome da classe
    ~pilha();   // função destrutora
    bool estacheio();    // verifica se a pilha está cheia
    bool estavazia();    // verifica se a pilha está vazia
    void inserir(TipoItem item);      // push
    TipoItem remover();     // pop
    void imprimir();        // imprimir a pilha
    int qualtamanho();      // lenght
    

};